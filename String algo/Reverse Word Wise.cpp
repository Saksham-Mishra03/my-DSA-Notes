/* Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
Input format :
String in a single line
Output format :
Word wise reversed string in a single line
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always */

*************************************************************************************************************************************************************************



int length(char input[])
{
    int i = 0;
    while (input[i] != '\0')
    {
        i++;
    }
    return i;
}

void rev(char ar[],int start,int end)
{
   
    while(start<=end)
    {
        char temp = ar[end];
        ar[end] = ar[start];
        ar[start] = temp;
        start++;
        end--;
    }
}

void reverseStringWordWise(char input[])
{
    int n = length(input), j = 0, i = 0;
    rev(input, 0, n - 1);

    while (input[i] != '\0')
    {
        if (input[i] == ' ')
        {
            rev(input, j, i - 1);
            j = i + 1;
        }
        i++;
    }
    rev(input, j, i - 1);
}
