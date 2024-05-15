#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    // Definir el diccionario como un mapa de string (palabra) a string (definición)
    map<string, string> diccionario;
void cargararch ()
{
// Agregar algunas palabras y sus definiciones al diccionario
    //crear archivo
    //crear cap 
    guardar y ya 
}

void buscar (string palabra)
{
    cin >> palabra;

    // Buscar la palabra en el diccionario
    auto it = diccionario.find(palabra);

    // Si la palabra se encuentra en el diccionario, mostrar su definición
    if (it != diccionario.end()) {
        cout << "La definición de '" << palabra << "' es: " << it->second << endl;
    } else {
        cout << "La palabra '" << palabra << "' no se encontró en el diccionario." << endl;
    }

    return 0;
}
    // Pedir al usuario que ingrese una palabra para buscar en el diccionario
   cout << "Seleccione la opcion que necesita: ";
   int opcion;
   switch (opcion)
   {
   case 1:
   cargararch ();
    break;
   case 2:
   buscar();
    break;
   default:
    break;
   }
    cout << "Ingrese una palabra para buscar en el diccionario: ";
   
}
