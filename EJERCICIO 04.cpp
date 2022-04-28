//4. Hacer un programa que desarrolle una función, que genere en pantalla el listado de números primos ubicados entre 1 hasta un 
//   numero x (x es ingresado por teclado).

bool primo(int n)
{
    bool c;
    if(n !=1 && n !=0){
        for(int i=2;i<=n;i++){
            if(n%i ==0){
               if(n==i){
                   c=true;
               }
               else{
                   c=false;
                   return c;
               }
            }
        }
    }
    else
        c=false;
    return c;
}

int main()
{
    int x;
    cout<<"Ingrese x: ";
    cin>>x;

    for(int i=0;i<x;i++){
        if(primo(i))
            cout<<i<<endl;
    }
    return 0;
}
