class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {
            ".-","-...","-.-.","-..",".","..-.","--.",
            "....","..",".---","-.-",".-..","--","-.","---",".--.",
            "--.-",".-.","...","-","..-","...-",
            ".--","-..-","-.--","--.."
        };
        unordered_map<string, bool> um;

        for (auto &word : words)
        {
            string currentMorse = "";

            for (auto &ch : word)
                currentMorse.append(morse[ch - 'a']);
            
            um.insert(make_pair(currentMorse, true));
        }

        int answer = 0;

        for (auto &element : um)
            if (element.second)
                ++answer;

        return answer;
    }
};