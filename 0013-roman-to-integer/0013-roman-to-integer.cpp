class Solution {
public:
    int romanToInt(string s) {
        unsigned char sLength = s.length();
        unsigned short answer = 0;

        for (unsigned char i = 0; i < sLength; ++i)
        {
            if (s[i] == 'M')
                answer += 1000;
            else if (s[i] == 'D')
                answer += 500;
            else if (s[i] == 'C')
            {
                if (i < sLength - 1)
                {
                    if (s[i + 1] == 'D')
                    {
                        answer += 400;
                        ++i;
                    }
                    else if (s[i + 1] == 'M')
                    {
                        answer += 900;
                        ++i;
                    }
                    else
                        answer += 100;
                }
                else
                    answer += 100;
            }
            else if (s[i] == 'L')
                answer += 50;
            else if (s[i] == 'X')
            {
                if (i < sLength - 1)
                {
                    if (s[i + 1] == 'L')
                    {
                        answer += 40;
                        ++i;
                    }
                    else if (s[i + 1] == 'C')
                    {
                        answer += 90;
                        ++i;
                    }
                    else
                        answer += 10;
                }
                else
                    answer += 10;
            }
            else if (s[i] == 'V')
                answer += 5;
            else if (s[i] == 'I')
            {
                if (i < sLength - 1)
                {
                    if (s[i + 1] == 'V')
                    {
                        answer += 4;
                        ++i;
                    }
                    else if (s[i + 1] == 'X')
                    {
                        answer += 9;
                        ++i;
                    }
                    else
                        answer += 1;
                }
                else
                    answer += 1;
            }
        }

        return answer;
    }
};