//4. Escriba un código que solicite ingresar dos números 𝑥 y 𝑦, tal que 𝑥 < 𝑦. Muestre todos los números primos que se encuentren entre el 
//   rango de valores, de no encontrarse, mostrar el primo más cercano a 𝑥 o 𝑦.

int main()
{
    int x;
    int y;
    cout<<"Ingrese dos numeros: "<<endl;
    cin>>x;
    cin>>y;

    if(x<y){
        for(int i==x;i<=y;i++)
            if(es primo(i))
            cout<<i<<endl;
    }

    return 0;
}
