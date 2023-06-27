class Solution {
public:
    string convertToTitle(int columnNumber) {
         string title;

    while (columnNumber > 0) {
        int remainder = (columnNumber - 1) % 26;

     
        title += ('A' + remainder);
        columnNumber = (columnNumber - 1) / 26;
    }

    reverse(title.begin(), title.end());

    return title;
        
    }
};