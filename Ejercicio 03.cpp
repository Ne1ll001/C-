//3. Elabore un programa que solicite ingresar una hora del día (HH:MM en formato de cadena), solicite un tiempo en minutos a agregar, y retorne la hora
de finalización (el formato de salida debe de estar en AM o PM según corresponda).

int main()
{
    string hora;
    cout<<"Ingrese una hora del dia: "<<endl;
    cin>>hora;
    int m;
    cout<<"Ingrese los minutos a agregar: "<<endl;
    cin>>m;
    int s;

    s=hora+m;

    if (00:00<s<12:00){
        cout<<"La hora de finalizacion es: "<<s<<"a.m.";
    }
    if else (12:00<s<24:00)
        cout<<"La hora de finalizacion es: "<<s<<"p.m.";

    return 0;
}
