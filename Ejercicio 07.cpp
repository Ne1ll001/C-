//7. Elabore un algoritmo que lea por teclado dos números enteros y determine si uno es divisor del otro.

int main()
{
    int a;
    int b;
    cout<<"Ingrese dos numeros enteros: "<<endl;
    cin>>a;
    cin>>b;

    if(a%b==0){
        cout<<"b es divisor de a"<<endl;
    }
    if(b%a==0){
        cout<<"a es divisor de b"<<endl;
    }
    else
        cout<<"Ni uno es divisor de otro"<<endl;

    return 0;
}
