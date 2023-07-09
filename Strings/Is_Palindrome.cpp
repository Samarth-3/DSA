#include <bits/stdc++.h> 

char lowercase(char ch){

  if (ch>='a'&& ch <= 'z'){

    return ch;

  }

  else {

    char temp = ch -'A'+'a';

    return temp;
  }

}

bool isconsider(char ch){

    if ((ch>= 'a'&& ch<='z')||(ch>= 'A'&& ch<='Z')||(ch>= '0'&& ch<='9')){

        return 1;

    }

    else{

        return false;

    }

}

bool checkPalindrome(string s)

{
  int start =0;

  int end = s.size()-1;

  while (start<=end){

      if (isconsider(s[start]) == false){

          start++;

      }

      else if (isconsider(s[end]) == false){

          end--;

      }

      else if(lowercase(s[start])==lowercase(s[end])){

        start++;

        end--;

      }

      else{

        return false;

      }
  }

  return true;

}