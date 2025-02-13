class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());

        unsigned short answer = 0;
        unsigned char seatsSize = seats.size();

        for (unsigned char i = 0; i < seatsSize; ++i)
            answer += abs(seats[i] - students[i]);
        
        return answer;
    }
};