int prime(int n){
    if(n==0 || n==1){
        return 0;
    for(int i =2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
    }
}

int factorial(int m ){
    int product= 1;
    for(int i =1;i<=m;i++){
        product*=i;
    }
    return product;
}

int evenodd(int b){
    if(b%2==0){
        return 0;
    }
    return 1;
}