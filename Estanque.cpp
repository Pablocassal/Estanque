/**
 * 	@Name: Estanque
 *	@Author: PersonalCastro
 *	@Brief: (traducir al inglés) Estealgoritmo esta basado en el algoritmode ordenacion llamado "burbuja"
 *		su principal problema esel tiempo estimado de duración y hepensado que si se mejoraba de alguna forma
 *		podria dar buenos resultados.
 *		Este consta de su movimiento principal donde (A,B) "A" y "B" son cambiados de posición en cuanto uno de estos
 *		lo requiere (ya dependiendo de la referencia de ordenacionque se tenga en ese momento).
 *		La formadde mejorarlo estara en que cuando se efectue este intercambio se llamara a una funció recursiva alterna
 *		que comprobara si se puede efectuar ese mismo movimiento pero en sentido contrario.
 *		
 *		"Lo que mas me gusto, fue poder ver todas esas ondas creadas a partir de una sola piedrecita".
 *
 *
 *	@Note: Se ordenara de menor a mayor [-33,-32,-31, ... , 0 , ... ,31,32,33]
 */

#include <iostream>

#define restaurar "\033[1;0m"
#define debug "\033[1;31m"
#define rojo     "\033[31m"      /* Red */
#define verde   "\033[32m"      /* Green */

using namespace std;


/**
 * @brief Procedimiento que comprueba el estado final del vector para saber si esta bien ordenado
 * @param El vector ya mencionado
 * @param Su dimensión
 */
void checking(int * vector, int dim);

int main () {

		
	int dim = 0;

	cout << "Dimension del vector: ";
	cin >> dim;

	int * vector;
	vector = new int [dim];

	vector[0] = 2;
	vector[1] = 0;
	vector[2] = -2;

	cout << "Se procede a crear un vector aleatorio con un tamaño predeterminado." << endl;

	cout << "Se pone el algoritmo para que ordene el vector y se mide el tiempo de proceso." << endl;

	cout << "Sacamos por pantalla el vector (el resultado)." << endl;

	cout << "Comprobamos si hay algun error poniendo en verde lo que este bien y en rojo lo que no." << endl;
	checking(vector, dim);

}


void checking (int * vector, int dim) {

//	cout << debug << "Debug: checking()" << restaurar << endl;

	cout << endl << "Cheking..." << endl << endl << endl;

	for (int i = 0; i < dim; i++) {

		if (vector[i] <= vector[i+1]) {

			cout << verde << vector[i] << " " << restaurar;
		}else{

			cout << rojo << vector[i] << " " << restaurar;
		}
	}
	
	cout << endl << endl << endl;
}
