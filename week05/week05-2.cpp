bool isPalindrome(int x){
    if(x<0)return false;

    //x:1234567 r:0
    //        7   7 = 0*10  +7
    //       6   76 = 7*10  +6
    //      5   765 = 76*10 +5
    //     4   7654 = 765*10+4
    int x2=x;
    long long int r=0;
    while(x>0){
        r=r*10+x%10;
        //printf("x:%d r:%d\n",x,r);

        x=x/10;
    }
    if(r==x2)return true;
    else return false;
}
