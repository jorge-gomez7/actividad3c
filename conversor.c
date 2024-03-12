#include <stdio.h>

float convertir(float cantidad, char origen, char destino) {
   
    float tasa_quetzal_a_dolar = 0.13;
    float tasa_quetzal_a_euro = 0.11;
    float tasa_dolar_a_quetzal = 7.65;
    float tasa_dolar_a_euro = 0.85;
    float tasa_euro_a_quetzal = 9.21;
    float tasa_euro_a_dolar = 1.18;

    
    if (origen == 'Q' && destino == 'D') {
        return cantidad * tasa_quetzal_a_dolar;
    } else if (origen == 'Q' && destino == 'E') {
        return cantidad * tasa_quetzal_a_euro;
    } else if (origen == 'D' && destino == 'Q') {
        return cantidad * tasa_dolar_a_quetzal;
    } else if (origen == 'D' && destino == 'E') {
        return cantidad * tasa_dolar_a_euro;
    } else if (origen == 'E' && destino == 'Q') {
        return cantidad * tasa_euro_a_quetzal;
    } else if (origen == 'E' && destino == 'D') {
        return cantidad * tasa_euro_a_dolar;
    } else {
        
        if (origen == destino) {
            return cantidad;
        } else {
          -1
            return -1;
        }
    }
}

int main() {
    float cantidad, resultado;
    char origen, destino;

   
    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);
    printf("Ingrese la moneda de origen (Q, D, E): ");
    scanf(" %c", &origen);
    printf("Ingrese la moneda de destino (Q, D, E): ");
    scanf(" %c", &destino);

    
    resultado = convertir(cantidad, origen, destino);

    
    if (resultado != -1) {
        printf("El resultado de la conversión es: %.2f\n", resultado);
    } else {
        printf("No se puede realizar la conversión.\n");
    }

    return 0;
}
