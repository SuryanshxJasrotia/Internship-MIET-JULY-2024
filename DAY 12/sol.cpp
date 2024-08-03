#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
struct Interval {
    int start;
    int end;
};

bool compareIntervals(const Interval& a, const Interval& b) {
    return a.start < b.start;
}

bool canAttendMeetings(vector<Interval>& intervals) {
    sort(intervals.begin(), intervals.end(), compareIntervals);
    for(auto i: intervals){
        printf("%d ",i);
    }
    cout<<endl;

    for (int i = 1; i < intervals.size(); ++i) {
        if (intervals[i].start < intervals[i - 1].end) {
            return false;  // Overlapping meetings
        }
    }
    return true;  // No overlaps
}

int main() {
    vector<Interval> meetings = {{0, 30}, {5, 10}, {15, 20}};
    bool result = canAttendMeetings(meetings);
    cout << (result ? "Can attend all meetings" : "Cannot attend all meetings") << endl;

    return 0;
}
