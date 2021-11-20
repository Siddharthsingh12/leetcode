class Solution {
public:
    string intToRoman(int num) {
        static char* ones[10] ={ "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
        static char* tens[10] ={ "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
        static char* hundreds[10] = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
        static string thousands[4] = { "", "M", "MM", "MMM" };
        string res="";
        int temp=num/1000;
        res+=thousands[temp];
        num-=temp*1000;
        temp=num/100;
        res+=hundreds[temp];
        num-=temp*100;
        temp=num/10;
        res+=tens[temp];
        num-=temp*10;
        res+=ones[num];
        return res;
    }
};