#include<iostream>
#include<cstdlib> // numeros aleatorios
#include<ctime>   // calcular tiempos
#include<fstream> // Gestionar ficheros
#include <cassert>
#include <climits>

using namespace std;

/////////////////////////////////////////////////////////////
// DECLARACIONES
/////////////////////////////////////////////////////////////
/* ************************************************************ */ 
/*  Burbuja  */
/**
   @brief Ordena un vector por el método de la burbuja.

   @param T: vector de elementos. Debe tener num_elem elementos.
             Es MODIFICADO.
   @param num_elem: número de elementos. num_elem > 0.

   Cambia el orden de los elementos de T de forma que los dispone
   en sentido creciente de menor a mayor.
   Aplica el algoritmo de la burbuja.
*/
inline static 
void bubble(int T[], int num_elem);

/**
   @brief Ordena parte de un vector por el método de la burbuja.

   @param T: vector de elementos. Tiene un número de elementos 
                   mayor o igual a final.Es MODIFICADO.

   @param inicial: Posición que marca el incio de la parte del
                   vector a ordenar.
   @param final: Posición detrás de la última de la parte del
                   vector a ordenar. 
           inicial < final.

   Cambia el orden de los elementos de T entre las posiciones
   inicial y final - 1de forma que los dispone en sentido creciente
   de menor a mayor.
   Aplica el algoritmo de la burbuja.
*/
static void bubble_lims(int T[], int inicial, int final);



/* ************************************************************ */ 
/*  Fibonacci  */
/**
   @brief Calcula el término n-ésimo de la sucesión de Fibonacci.

   @param n: número de orden del término buscado. n >= 1.

   @return: término n-ésimo de la sucesión de Fibonacci.
*/
int fibo(int n);



/* ************************************************************ */ 
/*  Hanoi  */
/**
   @brief Resuelve el problema de las Torres de Hanoi
   @param M: número de discos. M > 1.
   @param i: número de columna en que están los discos.
             i es un valor de {1, 2, 3}. i != j.
   @param j: número de columna a que se llevan los discos.
             j es un valor de {1, 2, 3}. j != i.

   Esta función imprime en la salida estándar la secuencia de 
   movimientos necesarios para desplazar los M discos de la
   columna i a la j, observando la restricción de que ningún
   disco se puede situar sobre otro de tamaño menor. Utiliza
   una única columna auxiliar.
*/
void hanoi (int M, int i, int j);



/* ************************************************************ */ 
/*  Heapsort  */
/* ************************************************************ */ 
/*  Método de ordenación por montones  */

/**
   @brief Ordena un vector por el método de montones.

   @param T: vector de elementos. Debe tener num_elem elementos.
             Es MODIFICADO.
   @param num_elem: número de elementos. num_elem > 0.

   Cambia el orden de los elementos de T de forma que los dispone
   en sentido creciente de menor a mayor.
   Aplica el algoritmo de ordenación por montones.
*/
inline static 
void heapsort(int T[], int num_elem);

/**
   @brief Reajusta parte de un vector para que sea un montón.

   @param T: vector de elementos. Debe tener num_elem elementos.
             Es MODIFICADO.
   @param num_elem: número de elementos. num_elem > 0.
   @param k: índice del elemento que se toma com raíz
   
   Reajusta los elementos entre las posiciones k y num_elem - 1 
   de T para que cumpla la propiedad de un montón (APO), 
   considerando al elemento en la posición k como la raíz.
*/
static void reajustar(int T[], int num_elem, int k);



/* ************************************************************ */ 
/*  Insertion  */
/**
   @brief Ordena un vector por el método de inserción.

   @param T: vector de elementos. Debe tener num_elem elementos.
             Es MODIFICADO.
   @param num_elem: número de elementos. num_elem > 0.

   Cambia el orden de los elementos de T de forma que los dispone
   en sentido creciente de menor a mayor.
   Aplica el algoritmo de inserción.
*/
inline static 
void insertion(int T[], int num_elem);

/**
   @brief Ordena parte de un vector por el método de inserción.

   @param T: vector de elementos. Tiene un número de elementos 
                   mayor o igual a final. Es MODIFICADO.
   @param inicial: Posición que marca el incio de la parte del
                   vector a ordenar.
   @param final: Posición detrás de la última de la parte del
                   vector a ordenar. 
                  inicial < final.

   Cambia el orden de los elementos de T entre las posiciones
   inicial y final - 1de forma que los dispone en sentido creciente
   de menor a mayor.
   Aplica el algoritmo de inserción.
*/
static void insertion_lims(int T[], int inicial, int final);



/* ************************************************************ */ 
/*  Mergesort  */
/**
   @brief Ordena un vector por el método de mezcla.

   @param T: vector de elementos. Debe tener num_elem elementos.
             Es MODIFICADO.
   @param num_elem: número de elementos. num_elem > 0.

   Cambia el orden de los elementos de T de forma que los dispone
   en sentido creciente de menor a mayor.
   Aplica el algoritmo de mezcla.
*/
inline static 
void mergesort(int T[], int num_elem);

/**
   @brief Ordena parte de un vector por el método de mezcla.

   @param T: vector de elementos. Tiene un número de elementos 
                   mayor o igual a final. Es MODIFICADO.
   @param inicial: Posición que marca el incio de la parte del
                   vector a ordenar.
   @param final: Posición detrás de la última de la parte del
                   vector a ordenar. 
                   inicial < final.

   Cambia el orden de los elementos de T entre las posiciones
   inicial y final - 1 de forma que los dispone en sentido creciente
   de menor a mayor.
   Aplica el algoritmo de la mezcla.
*/
static void mergesort_lims(int T[], int inicial, int final);

/**
   @brief Ordena un vector por el método de inserción.

   @param T: vector de elementos. Debe tener num_elem elementos.
             Es MODIFICADO.
   @param num_elem: número de elementos. num_elem > 0.

   Cambia el orden de los elementos de T de forma que los dispone
   en sentido creciente de menor a mayor.
   Aplica el algoritmo de inserción.
*/
inline static 
void insertionM(int T[], int num_elem);


/**
   @brief Ordena parte de un vector por el método de inserción.

   @param T: vector de elementos. Tiene un número de elementos 
                   mayor o igual a final. Es MODIFICADO.
   @param inicial: Posición que marca el incio de la parte del
                   vector a ordenar.
   @param final: Posición detrás de la última de la parte del
                   vector a ordenar. 
                   inicial < final.

   Cambia el orden de los elementos de T entre las posiciones
   inicial y final - 1 de forma que los dispone en sentido creciente
   de menor a mayor.
   Aplica el algoritmo de la inserción.
*/
static void insertion_limsM(int T[], int inicial, int final);


/**
   @brief Mezcla dos vectores ordenados sobre otro.

   @param T: vector de elementos. Tiene un número de elementos 
                   mayor o igual a final. Es MODIFICADO.
   @param inicial: Posición que marca el incio de la parte del
                   vector a escribir.
   @param final: Posición detrás de la última de la parte del
                   vector a escribir
                   inicial < final.
   @param U: Vector con los elementos ordenados.
   @param V: Vector con los elementos ordenados.
             El número de elementos de U y V sumados debe coincidir
             con final - inicial.

   En los elementos de T entre las posiciones inicial y final - 1
   pone ordenados en sentido creciente, de menor a mayor, los
   elementos de los vectores U y V.
*/
static void fusion(int T[], int inicial, int final, int U[], int V[]);



/* ************************************************************ */ 
/*  Quicksort  */
/**
   @brief Ordena un vector por el método quicksort.

   @param T: vector de elementos. Debe tener num_elem elementos.
             Es MODIFICADO.
   @param num_elem: número de elementos. num_elem > 0.

   Cambia el orden de los elementos de T de forma que los dispone
   en sentido creciente de menor a mayor.
   Aplica el algoritmo quicksort.
*/
inline static 
void quicksort(int T[], int num_elem);

/**
   @brief Ordena parte de un vector por el método quicksort.

   @param T: vector de elementos. Tiene un número de elementos 
                   mayor o igual a final. Es MODIFICADO.
   @param inicial: Posición que marca el incio de la parte del
                   vector a ordenar.
   @param final: Posición detrás de la última de la parte del
                   vector a ordenar. 
                   inicial < final.

   Cambia el orden de los elementos de T entre las posiciones
   inicial y final - 1 de forma que los dispone en sentido creciente
   de menor a mayor.
   Aplica el algoritmo quicksort.
*/
static void quicksort_lims(int T[], int inicial, int final);

/**
   @brief Ordena un vector por el método de inserción.

   @param T: vector de elementos. Debe tener num_elem elementos.
             Es MODIFICADO.
   @param num_elem: número de elementos. num_elem > 0.

   Cambia el orden de los elementos de T de forma que los dispone
   en sentido creciente de menor a mayor.
   Aplica el algoritmo de inserción.
*/
inline static 
void insercion(int T[], int num_elem);

/**
   @brief Ordena parte de un vector por el método de inserción.

   @param T: vector de elementos. Tiene un número de elementos 
                   mayor o igual a final. Es MODIFICADO.
   @param inicial: Posición que marca el incio de la parte del
                   vector a ordenar.
   @param final: Posición detrás de la última de la parte del
                   vector a ordenar. 
                  inicial < final.

   Cambia el orden de los elementos de T entre las posiciones
   inicial y final - 1 de forma que los dispone en sentido creciente
   de menor a mayor.
   Aplica el algoritmo de inserción.
*/
static void insercion_lims(int T[], int inicial, int final);

/**
   @brief Redistribuye los elementos de un vector según un pivote.

   @param T: vector de elementos. Tiene un número de elementos 
                   mayor o igual a final. Es MODIFICADO.
   @param inicial: Posición que marca el incio de la parte del
                   vector a ordenar.
   @param final: Posición detrás de la última de la parte del
                   vector a ordenar. 
                  inicial < final.
   @param pp: Posición del pivote. Es MODIFICADO.

   Selecciona un pivote los elementos de T situados en las posiciones
   entre inicial y final - 1. Redistribuye los elementos, situando los
   menores que el pivote a su izquierda, despu�s los iguales y a la
   derecha los mayores. La posición del pivote se devuelve en pp.
*/
static void dividir_qs(int T[], int inicial, int final, int & pp);

////////////////////////////////////////////////////////////
//  IMPLEMENTACIONES
////////////////////////////////////////////////////////////
/* ************************************************************ */ 
/*  Burbuja  */
inline void bubble(int T[], int num_elem)
{
    bubble_lims(T, 0, num_elem);
}


static void bubble_lims(int T[], int inicial, int final)
{
    int i, j;
    int aux;
    for (i = inicial; i < final - 1; i++)
        for (j = final - 1; j > i; j--)
            if (T[j] < T[j-1])
            {
                aux = T[j];
                T[j] = T[j-1];
                T[j-1] = aux;
            }
}



/* ************************************************************ */ 
/*  Fibonacci  */
int fibo(int n)
{
    if (n < 2)
        return 1;
    else
        return fibo(n-1) + fibo(n-2);
}



/* ************************************************************ */ 
/*  Hanoi  */
void hanoi (int M, int i, int j)
{
     if (M > 0)
    {
        hanoi(M-1, i, 6-i-j);
        //cout << i << " -> " << j << endl;
        hanoi (M-1, 6-i-j, j);
    }
}



/* ************************************************************ */ 
/*  heapsort  */


static void heapsort(int T[], int num_elem)

{

    int i;

    for (i = num_elem/2; i >= 0; i--)

        reajustar(T, num_elem, i);

    for (i = num_elem - 1; i >= 1; i--)

    {

        int aux = T[0];

        T[0] = T[i];

        T[i] = aux;

        reajustar(T, i, 0);

    }

}



static void reajustar(int T[], int num_elem, int k)

{

    int j;

    int v;

    v = T[k];

    bool esAPO = false;

    while ((k < num_elem/2) && !esAPO)

    {

        j = k + k + 1;

        if ((j < (num_elem - 1)) && (T[j] < T[j+1]))

            j++;

        if (v >= T[j])

            esAPO = true;

        T[k] = T[j];

        k = j;

    }

    T[k] = v;

}



/* ************************************************************ */ 
/*  insertion  */
inline static void insertion(int T[], int num_elem)

{

    insertion_lims(T, 0, num_elem);

}





static void insertion_lims(int T[], int inicial, int final)

{

    int i, j;

    int aux;

    for (i = inicial + 1; i < final; i++) {

        j = i;

        while ((T[j] < T[j-1]) && (j > 0)) {

            aux = T[j];

            T[j] = T[j-1];

            T[j-1] = aux;

            j--;

        }

    }

}



/* ************************************************************ */ 
/*  mergesort  */
inline static void insertionM(int T[], int num_elem)

{

    insertion_limsM(T, 0, num_elem);

}





static void insertion_limsM(int T[], int inicial, int final)

{

    int i, j;

    int aux;

    for (i = inicial + 1; i < final; i++) {

        j = i;

        while ((T[j] < T[j-1]) && (j > 0)) {

            aux = T[j];

            T[j] = T[j-1];

            T[j-1] = aux;

            j--;

        }

    }

}





const int UMBRAL_MS = 100;



void mergesort(int T[], int num_elem)

{

    mergesort_lims(T, 0, num_elem);

}



static void mergesort_lims(int T[], int inicial, int final)

{

    if (final - inicial < UMBRAL_MS)

    {

        insertion_limsM(T, inicial, final);

    } else {

        int k = (final - inicial)/2;



        int * U = new int [k - inicial + 1];

        assert(U);

        int l, l2;

        for (l = 0, l2 = inicial; l < k; l++, l2++)

            U[l] = T[l2];

        U[l] = INT_MAX;



        int * V = new int [final - k + 1];

        assert(V);

        for (l = 0, l2 = k; l < final - k; l++, l2++)

            V[l] = T[l2];

        V[l] = INT_MAX;



        mergesort_lims(U, 0, k);

        mergesort_lims(V, 0, final - k);

        fusion(T, inicial, final, U, V);

        delete [] U;

        delete [] V;

    }

}





static void fusion(int T[], int inicial, int final, int U[], int V[])

{

    int j = 0;

    int k = 0;

    for (int i = inicial; i < final; i++)

    {

        if (U[j] < V[k]) {

            T[i] = U[j];

            j++;

        } else{

            T[i] = V[k];

            k++;

        }

    }

}




/* ************************************************************ */ 
/*  quicksort  */
inline static void insercion(int T[], int num_elem)

{

    insercion_lims(T, 0, num_elem);

}





static void insercion_lims(int T[], int inicial, int final)

{

    int i, j;

    int aux;

    for (i = inicial + 1; i < final; i++) {

        j = i;

        while ((T[j] < T[j-1]) && (j > 0)) {

            aux = T[j];

            T[j] = T[j-1];

            T[j-1] = aux;

            j--;

        }

    }

}





const int UMBRAL_QS = 50;





inline void quicksort(int T[], int num_elem)

{

    quicksort_lims(T, 0, num_elem);

}



static void quicksort_lims(int T[], int inicial, int final)

{

    int k;

    if (final - inicial < UMBRAL_QS) {

        insercion_lims(T, inicial, final);

    } else {

        dividir_qs(T, inicial, final, k);

        quicksort_lims(T, inicial, k);

        quicksort_lims(T, k + 1, final);

    }

}





static void dividir_qs(int T[], int inicial, int final, int & pp)

{

    int pivote, aux;

    int k, l;



    pivote = T[inicial];

    k = inicial;

    l = final;

    do {

        k++;

    } while ((T[k] <= pivote) && (k < final-1));

    do {

        l--;

    } while (T[l] > pivote);

    while (k < l) {

        aux = T[k];

        T[k] = T[l];

        T[l] = aux;

        do k++; while (T[k] <= pivote);

        do l--; while (T[l] > pivote);

    }

    aux = T[inicial];

    T[inicial] = T[l];

    T[l] = aux;

    pp = l;

}



////////////////////////////////////////////////////////////
//  FUNCION MAIN
///////////////////////////////////////////////////////////
int main (int argc, char *argv[]){

    int *v; // Puntero para crear el vector de valores
    int n, i, argumento;
    unsigned long int tini, tfin; // Tiempos de ejecuci´on inicial y final
    double tejecucion; // tiempo de ejecuci´on del algoritmo en ms
    unsigned long int semilla; // Semilla para el generador de n´umeros aleatorios
    ofstream fsalida; // Fichero de salida
    string nombre; // Nombre del fichero

    if (argc <= 3) {
        cerr << "\nError: El programa se debe ejecutar ";
        cerr << "de la siguiente forma.\n\n";
        cerr << argv[0];
        cerr << " NombreAlgoritmo Semilla tamCaso1 tamCaso2 ... tamCasoN\n\n";
        return 0;
    }

    // guardamos el fichero adecuado
    nombre = argv[1];

    // Abrimos fichero de salida con el mismo nombre que el algoritmo
    fsalida.open("datos/"+nombre+".dat");
    if (!fsalida.is_open()) {
        cerr << "Error: No se pudo abrir fichero para escritura ";
        cerr << nombre << "\n\n";
        return 0;
    }
    // Inicializamos generador de n´umeros aleatorios
    semilla = atoi(argv[2]);
    srand(semilla);

    // Pasamos por cada tama~no de caso
    for (int argumento=3; argumento<argc; argumento++) {
        // Cogemos el tama~no del caso
        n = atoi(argv[argumento]);

        // Reservamos memoria para el vector
        v = new int[n];

        // Generamos vector aleatorio de prueba, con componentes entre 0 y n-1
        for (i= 0; i<n; i++) v[i]= rand()%n;

        tini = clock(); // Tiempo en que comienza la ejecuci´on
        // Ejecutamos algoritmo para tama~no de caso n
        if (nombre == "bubble"){
            bubble(v, n);
        }
        else if(nombre == "fibonacci"){
            fibo(n);
        }
        else if(nombre == "hanoi"){
            hanoi(n, 1, 2);
        }
        else if(nombre == "heapsort"){
            heapsort(v, n);
        }
        else if(nombre == "insertion"){
            insertion(v, n);
        }
        else if(nombre == "mergesort"){
            mergesort(v, n);
        }
        else if(nombre == "quicksort"){
            quicksort(v, n);
        }
        else{
            cerr << "Error, el nombre del algoritmo no existe" << endl;
            return 0;
        }
        tfin = clock(); // Tiempo en que finaliza la ejecuci´on

        tejecucion= 1000*(tfin-tini)/(double)CLOCKS_PER_SEC;
        // Guardamos tam. de caso y t_ejecucion a fichero de salida
        fsalida << n << " " << tejecucion << "\n";
        // Lo mostramos tambien por pantalla
        cerr << "Tam. Caso: " << n << " T. Ejecucion: " << tejecucion << endl;
        
        // Liberamos memoria del vector
        delete [] v;
    }

    fsalida.close();
    return 0;
}