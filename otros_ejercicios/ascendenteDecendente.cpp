#include<iostream>

using namespace std;

main() {
    int n, i, j, A[50], aux;

    cout << "Ingrese la Cantidad de Nuemeros a Ingresar: ";
    cin >> n;
    //llenamos el vector
    for (i = 1; i <= n; i++) {
        cout << "Vector Numero " << i << " :";
        cin >> A[i];
    }
    //se realiza la ordenacion de los numeros
    for (i = 1; i <= n - 1; i++) {
        for (j = 1; j <= n - 1; j++) {
            if (A[j] > A[j + 1]) {
                aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;
            }
        }
    }
    //se imprimen los numeros
    cout << "ascendente: ";
    for (i = 1; i <= n; i++) {
        cout << "," << A[i];
    }
    cout << "ndecendente: ";
    for (i = n; i >= 1; i--) {
        cout << "," << A[i];
    }
    
    return 0;
}
