//6. Elabore un código que solicite un numero entre 100 < x < 999 y muestre el resultado en binario.

int main()
{
    int a;
    float binario;
    cout<<"Ingrese un numero entre 100 y 999: "<<endl;
    cin>>a;

    if (100<a && a<999){
        cout<<"El numero a en binario es: "<<binario<<endl;
    }
    else
        cout<<"El numero no cumple con lo solicitado"<<endl;

    return 0;
}
