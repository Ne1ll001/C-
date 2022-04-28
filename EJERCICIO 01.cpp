//1. Hacer un programa que sin usar la función pow(), pero por medio de una función, calcule la potencia de un número (ambos números ingresados por teclado).

int potencia(int x, int y)
{
    int p;

    if(y==1){
        p=x;
    }
    else{
        p=x*potencia(x,y-1);
    }

    return p;
}

int main()
{
    int n,e;
    cout<<"Ingrese un numero: "<<endl;
    cin>>n;
    cout<<"Ingrese el exponente: "<<endl;
    cin>>e;

    cout<<"La potencia de "<<n<<" elevado a "<<e<<" es: "<<potencia(n,e);

    return 0;
}
