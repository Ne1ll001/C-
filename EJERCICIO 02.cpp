//2. Hacer un programa que lea por teclado un año, calcule y muestre si es bisiesto. Para realizar el cálculo utiliza una función llamada bisiesto. La función 
//bisiesto recibe el año leído por teclado, comprueba si es o no bisiesto.

int bisiesto(int x)
{
    if (x%4==0)
        return true;
    else
        return false;
}

int main()
{
    int a;
    cout<<"Ingrese un ano: "<<endl;
    cin>>a;

    if(bisiesto(a)==true){
        cout<<"El ano "<<a<<" es bisiesto. ";
    }
    else{
        cout<<"El ano "<<a<<" no es bisiesto. ";
    }

    return 0;
}
