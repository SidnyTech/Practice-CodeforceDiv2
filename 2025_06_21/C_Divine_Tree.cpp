#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int cantNodos, sumaDeseada, acumuladoExtra = 0, sumaActual = 0, divinidadExtra; 
    vector<int> valoresDivinidad;
    cin >> cantNodos >> sumaDeseada;

    if (sumaDeseada < cantNodos || sumaDeseada > cantNodos * (cantNodos + 1) / 2) {
        cout << "-1\n";
        return;
    }

    // Cantidad de "divinidad extra" que debemos repartir
    divinidadExtra = sumaDeseada - cantNodos;

    // Elegimos los valores de d(v) más grandes posibles para alcanzar la suma deseada
    for (int i = cantNodos - 1; i >= 0; --i) {
        if (acumuladoExtra == divinidadExtra) break;
        if (acumuladoExtra + i <= divinidadExtra) {
            acumuladoExtra += i;
            valoresDivinidad.push_back(i + 1); // d(v) = i+1
            sumaActual += i + 1;
        }
    }

    // Rellenamos el resto de nodos con valor 1 para completar los n nodos
    int cantidadGrandes = valoresDivinidad.size();
    for (int i = 0; i < cantNodos - cantidadGrandes; ++i) {
        valoresDivinidad.push_back(1);
    }
    sumaActual += (cantNodos - cantidadGrandes);

    // Verificamos que efectivamente hemos construido la suma deseada
    assert(sumaActual == sumaDeseada);

    // Caso especial: todos los valores d(v) son 1 (la suma es mínima)
    if (cantNodos == sumaDeseada) {
        cout << "1\n"; // El nodo raíz es el 1
        for (int i = 1; i < cantNodos; i++) {
            cout << i << ' ' << i + 1 << '\n'; // Conectamos en forma de cadena
        }
        return;
    }

    // Preparamos vector para marcar qué nodos ya han sido usados
    vector<bool> nodoUsado(cantNodos + 1, true);

    // El primer valor en valoresDivinidad es el valor del nodo raíz
    cout << valoresDivinidad[0] << '\n';
    nodoUsado[valoresDivinidad[0]] = false;

    // Conectamos los nodos que tienen valores grandes entre sí, como cadena
    for (int i = 1; i <= cantNodos; i++) {
        cout << valoresDivinidad[i - 1] << ' ' << valoresDivinidad[i] << '\n';
        nodoUsado[valoresDivinidad[i - 1]] = false;
        nodoUsado[valoresDivinidad[i]] = false;

        // Cuando llegamos al primer nodo de valor 1, conectamos los nodos restantes
        if (valoresDivinidad[i] == 1) {
            int anterior = 1;
            for (int j = 2; j <= cantNodos; ++j) {
                if (nodoUsado[j]) {
                    cout << anterior << ' ' << j << '\n';
                    anterior = j;
                }
            }
            return;
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;
    while (testCases--) solve();
}

// by Sidney Angelly Sahonero Garrado
