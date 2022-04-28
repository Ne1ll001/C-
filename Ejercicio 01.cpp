//1. Sumar todos los enteros pares desde 2 hasta 100.

int main()
{
    int p=0;

    for(int i=1;i<=100;i++){
        if (i%2==0)
        p += i;
    }
    cout<<"La suma de todos los numeros pares es: "<<p<<endl;

    return 0;
}
