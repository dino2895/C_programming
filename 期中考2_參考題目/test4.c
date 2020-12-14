#include <stdio.h>
#include <string.h>
#define MAX_INPUT 999

int char_length = 0;
char myStr[MAX_INPUT];

int str_len(char *str){
    int i=0;
    for(;str[i]!='\0';++i);
    //for(;(str[i] != '\0') && (str[i] != '!') && (str[i] != '?') && (str[i] != '.');++i);
    return i;
}

int spaceNum(char *str){
    int j=1;
    for(int i=0;str[i]!='\0';++i)j+=(str[i] == ' ');
    return j;
}

int maxSplitStr(char *str){
    int j = 1, max_len = 0;
    for(int i=0;i<strlen(str);++i){
        if(str[i] == ' ' || i == (strlen(str)-1)){
            if(j>max_len)max_len = j;
            j=0;
        }else{
            ++j;
        }
    }
    return max_len;
}

void print_str(char *str, int length){
    int i=0;
    while(length--)printf("%c", str[i++]);
}

int main(){
    gets(myStr);
    char_length = strlen(myStr);
    int splitNum = spaceNum(myStr);
    char max_len = maxSplitStr(myStr);
    char arr[splitNum][max_len];
    int arr_len[splitNum];

    int arr_index = 0, j=0;
    char mySym = '\0';
    for(int i=0;i<=char_length;++i){
        if(myStr[i] == '\0' || myStr[i] == '!' || myStr[i] == '?' || myStr[i] == '.'){
            arr_len[arr_index] = j;
            mySym = myStr[i];
            break;
        }
        if(myStr[i] == ' '){
            arr_len[arr_index] = j;
            ++arr_index;
            j=0;
        }else{
            arr[arr_index][j++] = myStr[i];
        }
    }
    for(int i=splitNum-1;i>=0;--i){
        print_str(arr[i], arr_len[i]);
        printf("%c", (i==0 ? mySym : ' '));
    }
}
