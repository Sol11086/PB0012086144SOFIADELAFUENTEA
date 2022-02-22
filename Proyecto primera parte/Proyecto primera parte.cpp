

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int opcion;
    int opcion2;
    int opcion3;
    do
    {
        system("cls");

        cout << "Bienvenido a Menu de citas." << endl;
        cout << "Presione 1 para continuar 2 para salir" << endl;
        cin >> opcion;

        if (opcion == 1)
        {
            system("cls");

            cout << "¿Que desea hacer?" << endl;
            cout << endl;
            cout << endl;

            cout << "Ingrese 1 para Agendar cita" << endl;
            cout << endl;
            cout << "Ingrese 2 para Modificar cita" << endl;
            cout << endl;
            cout << "ingres 3 para eliminar cita" << endl;
            cout << endl;
            cout << "Ingrese 4 para Mostrar lista de citas vigentes" << endl;
            cout << endl;
            cout << "Ingrese 5 para volver al menu principal" << endl;
            cout << endl;
            cout << endl;
            cin >> opcion2;

            switch (opcion2)
            {
            case 1:
                system("cls");
                do
                {
                    cout << "Ingrese los siguientes datos:" << endl;
                    cout << endl;
                    cout << "Nombre completo:" << endl;
                    //se supone aqui va un cin ; 
                    cout << "Tipo de tratamiento:" << endl;
                    //otro cin ;
                    cout << "ingresa 1 para agendar otra cita o 2 para volver al menu" << endl;
                    cin >> opcion3;
                } while (opcion3 == 1);
                break;

            case 2:
                system("cls");
                do
                {
                    cout << "Para modificar cita ingrese su numero de cita:";
                    //ira un cin ;
                    cout << endl;
                    cout << "Presione 1 para modificar otra cita presione 2 para volver al menu" << endl;
                    cin >> opcion3;
                } while (opcion3 == 1);
                break;

            case 3:
                system("cls");
                do
                {
                    cout << "Para eliminar su cita ingrese su numero de cita:";
                    // ira un cin;
                    cout << endl;
                    cout << "Presione 1 para eliminar otra cita presione 2 para volver al menu" << endl;
                    cin >> opcion3;
                } while (opcion3 == 1);
                break;

            case 4:
                system("cls");
                do
                {
                    cout << "Lista de citas vigentes:";
                    //aqui sale la lista de vigentes
                    cout << endl;
                    cout << "presione 2 para volver al menu" << endl;
                    cin >> opcion3;
                } while (opcion3 == 1);
                break;

            case 5:
                system("cls");
                break;

            default:
                cout << "no inhgreso una opcion correcta";


            }
        }

    } while (opcion == 1);
    

    return 0; 
    



}
