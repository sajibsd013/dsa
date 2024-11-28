#include <stdio.h>
#include <stdbool.h>
#include <string.h>
// Palindrome or not using two pointer 

bool isPalindrome(char* s) {
    s = strlwr(s);
    int len = -1;


    for(int i=0;i<strlen(s); i++){
        if(s[i]>=97 && s[i]<=122 || s[i]>=48 && s[i]<=57 )
            s[++len] = s[i];
    }
    s[++len]='\0';
    int left = 0, right = strnen(s)-1;
    while(left<right){
         if(s[left]!=s[right]){
            return false;
        }
        right--;
        left++;
    }
    // for(int i=0, j=len-1;i<len/2;i++, j--){

    //     if(s[i]!=s[j]){
    //         return false;
    //     }
    // }

    return true;
}

int main()
{
   char s[] = "aabaa";
   bool res = isPalindrome(s);
   if(res){
    printf("Yes");
   }else{
    printf("No");

   }

}