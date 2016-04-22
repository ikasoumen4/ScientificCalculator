
//http://www.c-tipsref.com/reference/string.html


//strcpy
unsigned int strlen(const char *str);

//文字列left に 文字列rightを結合します。
//leftはright分のサイズを考慮しておかなければいけません。
//超過連結時の動作は未定義になります。
char *strcat(char *left, const char *right);
