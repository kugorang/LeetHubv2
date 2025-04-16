class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int xPos = 0, yPos = 0;

        for (auto &command : commands)
        {
            if (command == "UP")
                yPos -= 1;
            else if (command == "RIGHT")
                xPos += 1;
            else if (command == "LEFT")
                xPos -= 1;
            else if (command == "DOWN")
                yPos += 1;
        }

        return yPos * n + xPos;
    }
};