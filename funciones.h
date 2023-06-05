#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpiarBuffer()
{
    fflush(stdin);
    fflush(stdout);
}

void limpiarPantalla()
{
    system("pause");
    system("cls");
}

void saltoLinea()
{
    printf("\n");
}

void Informacion_para_usuario()
{
    printf("\n\nEste programa le sera de utilidad a la hora de organizar los clientes\n\n\n");
}

void explicaciones()
{
    printf("\n\nSe escribio id y no id porque los ids se podian repetir\n");
    printf("Si se repiten los id, sucederia que el nuevo id reemplaza el viejo dando como resultado la eliminacion del anterior \n\n\n\n\n");
}

int menu()
{
    int opc = 0;
    printf("/********** MENU PRINCIPAL **********/ \n");
    printf("- Opcion 1: Menu Fichero \n");
    printf("- Opcion 2: Insertar Clientes \n");
    printf("- Opcion 3: Ver Clientes \n");
    printf("- Opcion 4: Modificar Clientes \n");
    printf("- Opcion 5: Eliminar Clientes \n");
    printf("- Opcion 6: Salir \n");
    printf("- Digite su opcion: ");
    scanf("%d", &opc);
    return opc;
}

void newClientes(FILE *fileClientes, struct Clientes at){
    //variable de control
    int guardado = 0;
    if(fileClientes!=NULL){
        limpiarBuffer();
        limpiarPantalla();
        printf(" - DATOS DEL Clientes -");
        saltoLinea();
        saltoLinea();

        printf("ID: ");
        scanf("%s", at.ID);
        saltoLinea();
        limpiarBuffer();

        printf("Nombre: ");
        gets(at.nombress);
        saltoLinea();
        limpiarBuffer();
        
        printf("Edad: ");
        scanf("%d", &at.edad);
        saltoLinea();
        limpiarBuffer();

        printf("Sexo: ");
        scanf("%c", &at.sexo);
        saltoLinea();
        limpiarBuffer();

        printf("Telefono: ");
        gets(at.telefono);
        saltoLinea();
        limpiarBuffer();

        printf("Escriba su Correo_electronico: ");
        gets(at.dop.Correo_electronico);
        saltoLinea();
        limpiarBuffer();

        guardado=fwrite(&at, sizeof(struct Clientes), 1, fileClientes);
        if(guardado>0){
            printf("\nLos datos del Clientes han sido guardados con exito! \n");
        }
        else{
            printf("\nERROR: intente nuevamente, si el error persiste contacte con el Administrador del Sistema... \n");
        }
    }
    else{
        printf("\nERROR: verifique que el fichero de Clientes exista, que este abierto en modo agregar, y/o finalmente que no esta siendo ocupado por otro programa... \n");
    }

    //CERRAMOS EL FICHERO
    fclose(fileClientes);
}

void visualizarClientess(FILE *fileClientes, struct Clientes at)
{
    //fileClientes = fopen("archivoClientes.txt", "r");
    char ID[20]; //Clientes a buscar
    char opc =' '; //Variable de control
    limpiarBuffer();
    printf("Desea visualizar todos los Clientess registrados?\n");
    printf("Digite - S o s - para ver todos los Clientess.\n");
    printf("Digite - N o n - para ver un Clientes especifico.\n");
    limpiarBuffer();
    printf("Digite su opcion: ");
    scanf("%c", &opc);
    if(opc=='S' || opc=='s'){
        int num = 0; //contador
        limpiarBuffer();
        saltoLinea();
        printf("N° \t ID \t\t\t Nombre \t Edad \t Sexo \t Telefono \t\t Correo_electronico \n");
        fread(&at, sizeof(struct Clientes), 1, fileClientes);
        while(!feof(fileClientes)){
            num++;
            printf("%d \t %s \t\t %s \t\t %d \t %c \t %s \t %s \n", num, at.ID, at.nombress, at.edad, at.sexo, at.telefono, at.dop.Correo_electronico);
            fread(&at, sizeof(struct Clientes), 1, fileClientes);
        }
    }
    else{
        if(opc=='N' || opc=='n'){
            limpiarBuffer();
            saltoLinea();
            int encontrado = 0;
            printf("Digite el numero de ID del Clientes que desea buscar: ");
            scanf("%s", ID);
            rewind(fileClientes);
            fread(&at, sizeof(struct Clientes), 1, fileClientes);
            while(!feof(fileClientes)){
                if(!strcmp(ID, at.ID)){
                    encontrado = 1;
                    limpiarBuffer();
                    printf("----------------------------\n");
                    printf("----- Datos del Clientes -----\n");
                    printf("----------------------------\n");
                    printf("ID: %s \n", at.ID);
                    limpiarBuffer();

                    printf("Nombre: %s \n", at.nombress);
                    limpiarBuffer();

                    printf("Edad: %d \n", at.edad);
                    limpiarBuffer();

                    printf("Sexo: %c \n", at.sexo);
                    limpiarBuffer();

                    printf("Telefono: %s \n", at.telefono);
                    limpiarBuffer();

                    printf("Escriba su Correo_electronico: %s \n", at.dop.Correo_electronico);
                    limpiarBuffer();
                    printf("----------------------------\n");
                    saltoLinea();
                    break;
                }
                fread(&at, sizeof(struct Clientes), 1, fileClientes);
            }
            if(encontrado!=1){
                printf("Ingrese un numero de ID valido e intente nuevamente! \n");
            }
        }
        else{
            printf("Estimado Usuario, por favor ingrese una opcion valida! \n");
        }

    }
    fclose(fileClientes);

}

void editarClientes(FILE *fileClientes, struct Clientes at){
    bool encontrado = false;
    int borrado = 1;
    char numID[20];
    int opcion = 0;

    FILE *temp;
    temp = fopen("temporal.txt", "w+"); //ARCHIVO TEMPORAL VACÍO

    limpiarBuffer();
    printf("Digite el numero de ID del Clientes que desea editar: ");
    scanf("%s", numID);

    fread(&at, sizeof(struct Clientes), 1, fileClientes);
    while(!feof(fileClientes)){
        if(!strcmp(numID, at.ID)){
            encontrado = true;
            limpiarBuffer();
            printf("----------------------------\n");
            printf("----- Datos del Clientes -----\n");
            printf("----------------------------\n");
            printf("ID: %s \n", at.ID);
            limpiarBuffer();

            printf("Nombre: %s \n", at.nombress);
            limpiarBuffer();

            printf("Edad: %d \n", at.edad);
            limpiarBuffer();

            printf("Sexo: %c \n", at.sexo);
            limpiarBuffer();

            printf("Telefono: %s \n", at.telefono);
            limpiarBuffer();

            printf("Escriba su Correo_electronico: %s \n", at.dop.Correo_electronico);
            limpiarBuffer();
            printf("----------------------------\n");
            saltoLinea();

            printf("Datos que puede editar del Clientes: \n");
            printf("Digite - 1 - para modificar el nombre\n");
            printf("Digite - 2 - para modificar la edad\n");
            printf("Digite - 3 - para modificar el sexo\n");
            printf("Digite - 4 - para modificar el telefono\n");
            printf("Digite - 5 - para modificar el Escriba su Correo_electronico\n");
            printf("Ingrese una opcion: ");
            scanf("%d", &opcion);
            limpiarBuffer();
            switch(opcion)
            {
            case 1:
                printf("\n Ingrese el nuevo nombre: ");
                gets(at.nombress);
                limpiarBuffer();
                saltoLinea();
                break;
            case 2:
                printf("\n Ingrese la nueva edad: ");
                scanf("%d", &at.edad);
                limpiarBuffer();
                saltoLinea();
                break;
            case 3:
                printf("\n Ingrese el nuevo sexo: ");
                scanf("%c", &at.sexo);
                limpiarBuffer();
                saltoLinea();
                break;
            case 4:
                printf("\n Ingrese el nuevo telefono: ");
                gets(at.telefono);
                limpiarBuffer();
                saltoLinea();
                break;
            case 5:
                printf("\n Ingrese el nuevo Escriba su Correo_electronico: ");
                gets(at.dop.Correo_electronico);
                limpiarBuffer();
                saltoLinea();
                break;
            default:
                printf("ESTIMADO USUARIO, INGRESE UNA OPCION VALIDA! \n");
                limpiarBuffer();
                saltoLinea();
                break;
            }

            fwrite(&at, sizeof(struct Clientes), 1, temp);
            printf("Clientes actualizado con exito! \n");
        }
        else{
            fwrite(&at, sizeof(struct Clientes), 1, temp);
        }
        fread(&at, sizeof(struct Clientes), 1, fileClientes);
    }
    if(encontrado==false)
    {
        printf("El Clientes que solicita no esta registrado, intente nuevamente con otro numero de ID!\n");
    }

    //CERRAMOS LOS ARCHIVOS
    fclose(temp);
    fclose(fileClientes);
    //BORRAMOS EL ARCHIVO VIEJO
    borrado = remove("archivoClientes.txt");
    if(borrado==0)
    {
        rename("temporal.txt", "archivoClientes.txt");
    }
}

void eliminarClientes(FILE *fileClientes, struct Clientes at){
    bool encontrado = false;
    int borrado = 1;
    char numID[20];
    int opcion = 0;

    FILE *temp;
    temp = fopen("temporal.txt", "w+"); //ARCHIVO TEMPORAL VACÍO
    
    limpiarBuffer();
    printf("Digite el numero de ID del Clientes que desea eliminar: ");
    scanf("%s", numID);

    fread(&at, sizeof(struct Clientes), 1, fileClientes);
    while(!feof(fileClientes)){
        if(!strcmp(numID, at.ID)){
            encontrado = true;
            limpiarBuffer();
            printf("----------------------------\n");
            printf("----- Datos del Clientes -----\n");
            printf("----------------------------\n");
            printf("ID: %s \n", at.ID);
            limpiarBuffer();

            printf("Nombre: %s \n", at.nombress);
            limpiarBuffer();

            printf("Edad: %d \n", at.edad);
            limpiarBuffer();

            printf("Sexo: %c \n", at.sexo);
            limpiarBuffer();

            printf("Telefono: %s \n", at.telefono);
            limpiarBuffer();

            printf("Escriba su Correo_electronico: %s \n", at.dop.Correo_electronico);
            limpiarBuffer();
            printf("----------------------------\n");
            saltoLinea();

            printf("\nEsta seguro que desea eliminar el registro de este Clientes?\n");
            printf("\nSi su respuesta es SI, digite - 1 (uno) - de lo contrario digite - 0 (cero) -\n");
            scanf("%d", &opcion);
            if(opcion==1){ 
                printf("El registro ha sido eliminado con exito! \n");
            }
            else{
                fwrite(&at, sizeof(struct Clientes), 1, temp);
                printf("\nRegresando al menu principal... \n");
            }
        }
        else{
            fwrite(&at, sizeof(struct Clientes), 1, temp);
        }
        fread(&at, sizeof(struct Clientes), 1, fileClientes);
    }
    if(encontrado==false)
    {
        printf("El Clientes que solicita no esta registrado, intente nuevamente con otro numero de ID!\n");
    }

    //CERRAMOS LOS ARCHIVOS
    fclose(temp);
    fclose(fileClientes);
    //BORRAMOS EL ARCHIVO VIEJO
    borrado = remove("archivoClientes.txt");
    if(borrado==0)
    {
        rename("temporal.txt", "archivoClientes.txt");
    }

}

int menuFichero()
{
    int opc = 0;
    printf("/************** MENU FICHERO **************/ \n");
    printf("- Opcion 1: Intentar dar una descripcion de las opciones \n");
    printf("- Opcion 2: Explicaciones \n");
    printf("- Opcion 3: Regresar al menu anterior \n");
    printf("- Digite su opcion: ");
    scanf("%d", &opc);
    return opc;
}


void gestionarFichero(FILE *fileClientes)
{
    fileClientes = fopen("archivoClientes.txt", "r");
    if(fileClientes==NULL){
        fileClientes = fopen("archivoClientes.txt", "w");
        printf("Creamos el fichero \n");
    }
    else{
        fileClientes = fopen("archivoClientes.txt", "a+");
        printf("Abrimos el fichero en modo a+ \n");
    }
}

FILE * abrirFicheroA(){
    FILE *fileClientes = NULL;
    fileClientes = fopen("archivoClientes.txt", "a+");
    if(fileClientes==NULL){
        printf("Error, el fichero no ha sido creado! \n");
    }
    else{
        printf("El fichero ha sido abierto en modo agregar. \n");
        //system("cls");
        printf("\nRegresando al menu principal... \n");
    }
    return fileClientes;
}

FILE * nuevoFichero(){//crear un fichero
    FILE *fileClientes = NULL;// Se declara un puntero a un archivo y se inicializa en NULL.
    fileClientes = fopen("archivoClientes.txt", "a");// Se abre o crea el archivo "archivoClientes.txt" en modo escritura.
    if(fileClientes==NULL){// Si el puntero al archivo es nulo, indica que hubo un error al abrir o crear el archivo.
        printf("Error, el fichero no ha sido creado! \n");
    }
    else{
        printf("El fichero nuevo ha sido creado. \n");
        //system("cls");
        printf("\nRegresando al menu principal... \n");
    }
    return fileClientes;// Se devuelve el puntero al archivo, ya sea NULL si hubo un error o el puntero al archivo creado.
}

FILE * abrirFichero(){
    FILE *fileClientes = NULL;
    fileClientes = fopen("archivoClientes.txt", "r");
    if(fileClientes==NULL){
        printf("Error, el fichero no ha sido creado! \n");
    }
    else{
        printf("El fichero ha sido abierto en modo lectura. \n");
        //system("cls");
        printf("\nRegresando al menu principal... \n");
    }
    return fileClientes;
}

void eliminarFichero(FILE *fileClientes)
{
    int respuesta = 0;
    int borrado = 1;
    int cerrado = 1;

    printf("\n Esta seguro que desea eliminar el archivo de Clientess? \n");
    printf("\n Si su respuesta es SI, digite - 1 (uno) - de lo contrario digite - 0 (cero) - \n");
    scanf(" %d", &respuesta);
    if(respuesta){
        cerrado = fclose(fileClientes);
        if(cerrado != 1){
            borrado = remove("archivoClientes.txt");
            if(borrado!=1){
            printf("\nEl archivo de Clientess ha sido eliminado con exito! \n");
            }
            else{
                printf("\nERROR al intentar eliminar el archivo de Clientess! \n");
            }
        }
        else{
         //system("cls");
         printf("\nERROR al intentar cerrar el archivo de Clientess! \n");
        } 
    }
    else{
        //system("cls");
        printf("\n Regresando al menu principal... \n");
    }
}