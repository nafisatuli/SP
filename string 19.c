#include <stdio.h>
int main()
{
    char str[1000];
    int freq[255];
    int i = 0, min;
    int ascii;
    printf("Enter any string: ");
    gets(str);
    for(i=0; i<255; i++)
    {
        freq[i] = 0;
    }
    for(i=0;str[i] != '\0';i++)
    {
        ascii = (int)str[i];
        freq[ascii] += 1;
    }
    min = 0;
    for(i=0; i<255; i++)
    {
        if(freq[i] != 0)
        {
            if(freq[min] == 0 || freq[i] < freq[min])
                min = i;
        }
    }
    printf("Minimum occurring character is '%c' = %d.", min, freq[min]);
    return 0;
}
