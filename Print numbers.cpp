//coding ninjas
//code to print numbers from 1 to n in increasing order recursively.

void print(int n){
    if(n == 1){
        cout<<n<<" ";
        return;
    }
    
    print(n - 1);
    cout << n << " ";
}
