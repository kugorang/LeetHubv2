class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        bool result = true;
        int magazineLen = magazine.length();

        for (auto ransomNoteCh : ransomNote)
        {
            bool isMatched = false;

            for (int i = 0; i < magazineLen; ++i)
            {
                if (ransomNoteCh == magazine[i])
                {
                    isMatched = true;
                    magazine[i] = '.';
                    break;
                }
            }

            if (!isMatched)
            {
                result = false;
                break;
            }
        }
        
        return result;
    }
};