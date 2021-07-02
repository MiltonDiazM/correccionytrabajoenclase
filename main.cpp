#include <iostream>

int main()

    int (a,b,i,potencia=1);
    printf("Ingrese la base de la potencia");
    scanf("%d", &a);
    printf("Ingrese el exponente de la potencia");
    scanf("%d", &&b);

    for(i=1;i<=b;i++)
    {
        potencia=potencia*a;
    printf("resultado: %d",potencia);

}


using namespace std;
int funcionfactorial(int num)
{
    int fact=1;
    while(num>0)
    {
        fact=fact*num--;
    }
    return fact;

}

{
    int a;
    cout<<"Ingrese un valor: "<<endl;
    cin>>a;
    cout<<"El factorial de "<<a<<" es "<<funcionfactorial(a)<<endl;

    return 0;
}


using namespace std;
//Una función recibe como para metros el nombre de una persona,
//el día y mes de nacimiento. La funciÃ³n debe devolver el nombre
//de la persona, indicando el signo del zodiaco al que pertenece
//Ejemplo. Hola Juan, tu signo del zodiaco es acuario
//Aries (21 de marzo-20 de abril)
//Tauro (21 de abril- 21 de mayo)
//Géminis (22 de mayo-21 de junio)
//Cáncer (22 de junio-22 de julio)
//Leo (23 de julio-23 de agosto)
//Virgo (24 de agosto-23 de septiembre)
//Libra (24 de septiembre-23 de octubre)
//Escorpio (23 de octubre a 21 de noviembre)
//Sagitario (22 de noviembre a 21 de diciembre)
//Capricornio (22 de diciembre a 19 de enero)
//Acuario (20 de enero a 18 de febrero)
//Piscis (19 de febrero a 20 de marzo)

string signos_zodiacales (string nombre, int dia, int mes){
    string mensaje="Hola "+nombre;
    if((dia>=21&&mes==3)||(dia<=20&&mes==4)){
        mensaje+= ", usted es Aries ";
    }
    else if((dia>=24&&mes==9)||(dia<=23&&mes==10)) {
        mensaje+=", usted es Libra ";
    }
    else if((dia>=21&&mes==4)||(dia<=21&&mes==5)) {
        mensaje+=", usted es Tauro ";
}
    else if((dia>=24&&mes==10)||(dia<=22&&mes==11)) {
        mensaje+=", usted es Escorpio ";
}
    else if((dia>=22&&mes==5)||(dia<=21&&mes==6)) {
        mensaje+=", usted es Geminis ";
}
    else if((dia>=23&&mes==11)||(dia<=21&&mes==12)) {
        mensaje+=", usted es Sagitario ";
}
    else if((dia>=21&&mes==6)||(dia<=23&&mes==7)) {
        mensaje+=", usted es Cancer ";
}
    else if((dia>=22&&mes==12)||(dia<=20&&mes==1)) {
        mensaje+=", usted es Capricornio ";
}
    else if((dia>=24&&mes==7)||(dia<=23&&mes==8)) {
        mensaje+=", usted es Leo ";
}
    else if((dia>=21&&mes==1)||(dia<=19&&mes==2)) {
        mensaje+=", usted es Acuario ";
}
    else if((dia>=24&&mes==8)||(dia<=23&&mes==9)) {
        mensaje+=", usted es Virgo ";
}
    else if((dia>=20&&mes==2)||(dia<=20&&mes==3)) {
        mensaje+=", usted es piscis ";
}
    return (mensaje);
}
int main() {
    string nombre;
    int dia;
    int mes;
    cout << endl<< "ingrese su nombre: ";
    cin>>nombre;
    cout << endl<< "ingrese su dia de nacimiento: ";
    cin>>dia;
    cout << endl<< "ingrese su mes de nacimiento: ";
    cin>>mes;
    cout<<endl<<signos_zodiacales(nombre, dia, mes);
    return 0;
}


#include <iostream>
using namespace std;
//funcion que resive como parametro el nombre de una persona y su edad
// y devuelve un saludo, indicando ademas si es o no mayor de edad
string saludo (string nombre, int edad){
    string mensaje="Bienvenido "+nombre;
if(edad>=18){
    mensaje+= ", usted es mayor de edad ";
    }
else{
    mensaje+=", usted es menor de edad ";
    }

    return (mensaje);
}
int main() {
    string nombre;
    int edad;
    cout << endl<< "ingrese su nombre: ";
    cin>>nombre;
    cout << endl<< "ingrese su edad: ";
    cin>>edad;
    cout<<endl<<saludo(nombre, edad);
    return 0;
}
