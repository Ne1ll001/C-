//9. Escribir un programa que lea 10 datos desde el teclado y sume sólo aquellos que sean negativos.

int main()
{
    int negativos=0;
    double num;

    for(int i=0;i<10;i++){
        cout<<"Ingrese un numero: "<<endl;
        cin>>num;

        if(num<0){
            negativos++;
        }
    }
    cout<<"La suma de numeros negativos es: "<<negativos<<endl;
    return 0;
}
