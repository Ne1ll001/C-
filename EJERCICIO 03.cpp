//3. Hacer un programa que lee por teclado la fecha actual y la fecha de nacimiento de una persona y por medio de una función calcule su edad en años, meses y días.

int hola(int x,int y)
{
    int a;
    int m;
    int d;

    a=x-y;
    m=a*12;
    d=a*365;

    cout<<"Su edad en anos es: "<<a<<endl;
    cout<<"Su edad en meses es: "<<m<<endl;
    cout<<"Su edad en dias es: "<<d<<endl;

    return 0;
}

int main()
{
    int f;
    int n;
    cout<<"Ingrese la fecha actual: "<<endl;
    cin>>f;
    cout<<"Ingrese su fecha de nacimiento: "<<endl;
    cin>>n;

    cout<<hola(f,n);

    return 0;
}
