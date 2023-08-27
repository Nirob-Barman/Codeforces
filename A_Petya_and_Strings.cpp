#include <bits/stdc++.h>

using namespace std;

int main()
{
    int index, length;
    char string1[100], string2[100];
    gets(string1);
    gets(string2);
    strupr(string1);
    strupr(string2);
    printf("%d\n", strcmp(string1, string2));
    return 0;
}
