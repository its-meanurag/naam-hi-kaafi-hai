 int fib(int n){

    //base case 
    // 0,1,1,2,3,5,8,13........
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans;
    ans=f(n-1)+f(n-2);
    return ans;
 }