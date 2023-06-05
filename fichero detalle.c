#include <stdio.h>

struct Producto {
    char nombre[50];
    int cantidad;
    float precio;
};

struct Factura {
    int numero;
    char fecha[20];
    struct Producto productos[10];
    int cantidadProductos;
};

void ingresarDatosFactura(struct Factura* factura) {
    printf("Ingrese el numero de factura: ");
    scanf("%d", &factura->numero);

    printf("Ingrese la fecha: ");
    scanf("%s", factura->fecha);

    printf("Ingrese la cantidad de productos: ");
    scanf("%d", &factura->cantidadProductos);

    for (int i = 0; i < factura->cantidadProductos; i++) {
        printf("Ingrese el nombre del producto %d: ", i + 1);
        scanf("%s", factura->productos[i].nombre);

        printf("Ingrese la cantidad del producto %d: ", i + 1);
        scanf("%d", &factura->productos[i].cantidad);

        printf("Ingrese el precio unitario del producto %d: ", i + 1);
        scanf("%f", &factura->productos[i].precio);
    }
}

float calcularTotal(struct Factura* factura) {
    float total = 0.0;

    for (int i = 0; i < factura->cantidadProductos; i++) {
        total += factura->productos[i].cantidad * factura->productos[i].precio;
    }

    return total;
}

void mostrarFactura(struct Factura* factura) {
    printf("\n-----------------------\n");
    printf("Factura #%d\n", factura->numero);
    printf("Fecha: %s\n", factura->fecha);
    printf("-----------------------\n");
    printf("Descripcion\tCantidad\tPrecio Unitario\tTotal\n");
    printf("-----------------------\n");

    for (int i = 0; i < factura->cantidadProductos; i++) {
        printf("%s\t\t%d\t\t%.2f\t\t%.2f\n", factura->productos[i].nombre, factura->productos[i].cantidad, factura->productos[i].precio, factura->productos[i].cantidad * factura->productos[i].precio);
    }

    printf("-----------------------\n");
    printf("Total: %.2f\n", calcularTotal(factura));
}
void limpiarPantalla()
{
    system("pause");
    system("cls");
}

int main() {
    while(1){
        struct Factura factura;
        ingresarDatosFactura(&factura);
        mostrarFactura(&factura);
        limpiarPantalla();
    }
    
    return 0;
}
