char nextGreatestLetter(char* letters, int lettersSize, char target){
    char ans='z'+1;
    for(int i=0;i<lettersSize;i++){
        if(letters[i]>target && letters[i]<ans){
            ans=letters[i];
        }
    }
    if(ans=='z'+1)  return letters[0];
    else    return ans;
}
