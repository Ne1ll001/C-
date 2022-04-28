//10. Escribir un programa que almacene la cadena de caracteres contraseña en una variable, pregunte al usuario por la contraseña hasta que introduzca la contraseña
//    correcta.

int main()
{
    string a;
    string b="computacion";
    cout<<"Ingrese la contrasena: "<<endl;
    cin>>a;

    if(a==b){
        cout<<"La contrasena es correcta"<<endl;
    }
    else
        cout<<"La contrasena es incorrecta"<<endl;

    return 0;
}
