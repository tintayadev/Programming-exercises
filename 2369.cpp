/*#include <iostream>;
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        char str[10000];
        cin >> str;

    }
    return 0;
}*/
/*
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.clear();
	cin.clear();
    while(t--){
        string name;
        getline(cin, name);
        cin.clear();
	    cin.clear();
        string input;
        getline(cin, input);

        stringstream ss(input);
        vector<int> numbers;
        int num;
        while (ss >> num) {
            numbers.push_back(num);
        }

        // Imprimir los números leídos
        int sum =0;
        for (int n : numbers) {
            //cout << n << " ";
            sum = sum+ n;
        }
        cout << "El nombre del estudiante es "<<name<< endl;
        cout << "Su promedio es " <<(sum / numbers.size())*10 <<"/100";
        cout << endl;
    }
    

    return 0;
}
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

struct Estudiante {
    std::string nombre;
    std::vector<int> notas;
};

void procesarEstudiante(const Estudiante& estudiante) {
    std::cout << "El nombre del estudiante es " << estudiante.nombre << std::endl;

    // Calcula el promedio
    double promedio = 0.0;
    for (size_t i = 0; i < estudiante.notas.size(); ++i) {
        promedio += estudiante.notas[i];
    }
    promedio /= estudiante.notas.size();

    std::cout << "Su promedio es " << std::fixed << std::setprecision(0) << promedio << "/100" << std::endl;

    // Obtiene la nota más alta y la más baja
    int notaMasAlta = *std::max_element(estudiante.notas.begin(), estudiante.notas.end());
    int notaMasBaja = *std::min_element(estudiante.notas.begin(), estudiante.notas.end());

    std::cout << "Su nota mas baja es " << notaMasBaja << "/100" << std::endl;
    std::cout << "Su nota mas alta es " << notaMasAlta << "/100" << std::endl;

    // Determina si el estudiante está aprobado o reprobado
    if (promedio >= 60) {
        std::cout << "El estudiante esta aprobado" << std::endl;
    } else {
        std::cout << "El estudiante esta reprobado" << std::endl;
    }

    std::cout << std::endl;
}

int main() {
    int casos;
    std::cin >> casos;

    std::vector<Estudiante> estudiantes(casos);

    for (int i = 0; i < casos; ++i) {
        std::cin.ignore(); // Ignorar el salto de línea después de casos
        std::getline(std::cin, estudiantes[i].nombre);

        int cantidadNotas;
        std::cin >> cantidadNotas;

        estudiantes[i].notas.resize(cantidadNotas);
        for (int j = 0; j < cantidadNotas; ++j) {
            std::cin >> estudiantes[i].notas[j];
        }
    }

    for (int i = 0; i < casos; ++i) {
        procesarEstudiante(estudiantes[i]);
    }

    return 0;
}
