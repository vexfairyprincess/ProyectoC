#include <iostream>
#include <stdio.h>
#include <string.h>
#include "gotoxy.h"
#include "struct.h"
#include "searcherFunctions.cpp"
using namespace std;

int lastReg = 0;

//Crud
// Create
void addStudent(studentsUAM st);
/*Read*/
void showStudent(int pos);
int isStudent(char id[]);
void showStudents();
void startStudent(int pos);
studentsUAM getStudent(int pos);
/*Update*/
void updateStudent(studentsUAM st, int pos);
/*Delete*/
void deleteStudent(int pos);

/*Menu*/
void start();
int actionMenu();
void actions();

/*Archivos
*/
FILE *studentsUamRegister;
void saveStudents();
void readStudents();
int calcLastReg(FILE *archivo);

//Funcion para añadir estudiantes
void addStudent(studentsUAM st){
    students[lastReg] = st;
    lastReg++;
}
//Funcion para mostrar estudiantes
void showStudent(int pos){
    cout << "CIF: " << students[pos].cif << endl;
    cout << "Nombre Completo: " << students[pos].fullname << endl;
    cout << "Facultad: " << students[pos].faculty << endl;
    cout << "Carrera: " << students[pos].major << endl;
    cout << "Email: " << students[pos].email << endl;
    cout << "Estado de entrega: " << students[pos].deliveredOrNot << endl;
    cout << "Fecha de entrega: " << students[pos].dateOfDelivery.day << "/" << students[pos].dateOfDelivery.month << "/" << students[pos].dateOfDelivery.year << endl;
}

studentsUAM getStudent(int pos){
    return students[pos];
}

int isStudent(char CIF[])
{
    int position = 0;
    for (int i = 0; i < lastReg; i++)
    {
        if (strcmp(CIF, students[i].cif) == 0)
        {
            position = i;
            break;
        }
    }
    return position;
}

void showStudents()
{
    system("cls||clear");
    if (lastReg == 0)
    {
        cout << "No hay registros" << endl;
        return;
    }
    for (int i = 0; i < lastReg; i++)
    {
        cout << "========================\n";
        showStudent(i);
    }
    cout << endl;
    cout << "Ultimo registro...\n";
}

void updateStudent(studentsUAM st, int pos){
    students[pos] = st;
}

void deleteStudent(int pos){
    if (pos == lastReg)
    {
        cout << "No hay registro\n";
        return;
    }
    for (int i = pos; i < lastReg - 1; i++)
    {
        students[i] = students[i + 1];
    }
    lastReg--;
    startStudent(lastReg);
}

void startStudent(int pos){
    strcpy(students[pos].cif, "");
    strcpy(students[pos].fullname, "");
    strcpy(students[pos].faculty, "");
    strcpy(students[pos].major, "");
    strcpy(students[pos].email, "");
    strcpy(students[pos].deliveredOrNot, "");
    students[pos].dateOfDelivery.day = 0;
    students[pos].dateOfDelivery.month = 0;
    students[pos].dateOfDelivery.year = 0;
}

void start(){
    int pos, selectMenu;
    char cif[8];
    studentsUAM st;
    readStudents();
    

    gotoxy(10, 5);
    cout << " UNIVERSIDAD AMERICANA - UAM" << endl;
    gotoxy(10, 7);
    cout << " SELECCIONE UN FILTRO DE BUSQUEDA: " << endl;
    gotoxy(10, 9);
    cout << " 1. Por CIF" << endl;
    gotoxy(10, 10);
    cout << " 2. Por Nombre" << endl;
    gotoxy(10, 11);
    cout << " 3. Por Facultad" << endl;
    gotoxy(10, 12);
    cout << " 4. Por Carrera" << endl;
    gotoxy(10, 13);
    cout << " 5. Mostrar a los estudiantes con carnets ENTREGADOS" << endl;
    gotoxy(10, 14);
    cout << " 6. Mostrar a los estudiantes con carnets NO ENTREGADOS" << endl;
    gotoxy(10, 15);
    cout << " 7. Ir al Menu de Acciones" << endl;
    gotoxy(10, 16);    
    cout << " 8. Salir" << endl;
    gotoxy(13, 18);
    cout << "---> ";
    cin >> selectMenu;
    cin.ignore();

    switch (selectMenu)
    {
    case 1:
        system("clear || cls");
        cout << "Escribe el CIF del estudiante: " << endl;
        scanf(" %[^\n]", cif);
        pos = isStudent(cif);
        if(pos == 0){
            cout << "No se encontro el registro" << endl;
            system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
            system("clear || cls");
            start();

        } else{
            system("clear || cls ");
            cifSearcher();}
            return;
        break;
    
    case 2:
        system("clear || cls");
        cout << "Escribe el nombre del estudiante: " << endl;
        scanf(" %[^\n]", st.fullname);
        pos = isStudent(st.fullname);
        if(pos == 0){
            cout << "No se encontro el registro" << endl;
            system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
            system("clear || cls");
            start();

        } else{
            system("clear || cls ");
            nameSearcher();}
            return;
        break;
    
    case 3:
        system("clear || cls");
        cout << "Escribe la facultad del estudiante: " << endl;
        scanf(" %[^\n]", st.faculty);
        pos = isStudent(st.faculty);
        if(pos == 0){
            cout << "No se encontro el registro" << endl;
            system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
            system("clear || cls");
            start();

        } else{
            system("clear || cls ");
            facultySearcher();}
            return;
        break;
    
    case 4:
        system("clear || cls");
        cout << "Escribe la carrera del estudiante: " << endl;
        scanf(" %[^\n]", st.major);
        pos = isStudent(st.major);
        if(pos == 0){
            cout << "No se encontro el registro" << endl;
            system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
            system("clear || cls");
            start();

        } else{
            system("clear || cls ");
            majorSearcher();}
            return;
        break;
    
    case 5:
        system("clear || cls");
        cout << "Estudiantes con carnets ENTREGADOS: " << endl;
        deliveredShow();
        break;
    
    case 6:
        system("clear || cls");
        cout << "Estudiantes con carnets NO ENTREGADOS: " << endl;
        notDeliveredShow();
        break;

    case 7:
        system("clear || cls");
        actions();
        break;
    
    case 8:
        cout << "Saliendo del programa..." << endl;
        break;

    default:
        cout << "Opcion no valida" << endl;
        break;
    }

}

int actionMenu(){
    int op;
        gotoxy(10, 5);
        cout << " UNIVERSIDAD AMERICANA - UAM" << endl;
        gotoxy(15, 6);
        cout << "Cantidad de registros: " << lastReg << endl;
        gotoxy(10, 9);
        cout << " 1. Agregar Estudiante" << endl;
        gotoxy(10, 10);
        cout << " 2. Editar Estudiante" << endl;
        gotoxy(10, 11);
        cout << " 3. Eliminar Estudiante" << endl;
        gotoxy(10, 12);
        cout << " 4. Mostrar todos los Estudiantes" << endl;
        gotoxy(10, 13);
        cout << " 5. Regresar a los Filtros de Busqueda" << endl;
        gotoxy(10, 14);
        cout << " 6. Salir" << endl;
        gotoxy(13, 16);
        cout << " ---> ";
        cin >> op;
    return op;
}


void actions(){
    int op, pos, resp;
    char cif[8];
    studentsUAM st;
    readStudents();

    do{
        system("clear||cls");
        op = actionMenu();
        switch(op){
            case 1: 
                system("clear||cls");
                gotoxy(10, 5);
                cout << "CIF:";
                gotoxy(10, 6);
                cout << "Nombre Completo: ";
                gotoxy(10, 7);
                cout << "Facultad: ";
                gotoxy(10, 8);
                cout << "Carrera: ";
                gotoxy(10, 9);
                cout << "Email: ";
                gotoxy(10, 10);
                cout << "Estado de entrega: ";
                gotoxy(10,11);
                cout << "Fecha de entrega dd/mm/yyyy: ";
                gotoxy(15, 5);
                scanf(" %[^\n]", st.cif);
                gotoxy(27, 6);
                scanf(" %[^\n]", st.fullname);
                gotoxy(20, 7);
                scanf(" %[^\n]", st.faculty);
                gotoxy(19, 8);
                scanf(" %[^\n]", st.major);
                gotoxy(17, 9);
                scanf(" %[^\n]", st.email);
                gotoxy(29, 10);
                scanf(" %[^\n]", st.deliveredOrNot);
                gotoxy(39,11);
                scanf("%d/%d/%d", &st.dateOfDelivery.day, &st.dateOfDelivery.month, &st.dateOfDelivery.year);
                addStudent(st);
                system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
            break;
            
            case 2: 
                system("clear || cls");
                cout << "Escribe el CIF a buscar: ";
                scanf(" %[^\n]", cif);
                pos = isStudent(cif);
                if(pos == 0){
                    cout << "No se encontro el registro" << endl;
                } else{
                    system("clear || cls ");
                    showStudent(pos);
                    cout << "Desea editar este registro? (1. Si / 2. No): ";
                    cin >> resp;
                    if(resp == 1){
                system("clear || cls");
                cout << "===== DATOS ACTUALES =====";
                gotoxy(0,2);
                pos = isStudent(cif);
                showStudent(pos);
                gotoxy(0,11);
                cout << "===== DATOS A EDITAR =====" << endl;
                gotoxy(0,13);
                cout << "CIF:";
                gotoxy(0,14);
                cout << "Nombre Completo: ";
                gotoxy(0,15);
                cout << "Facultad: ";
                gotoxy(0,16);
                cout << "Carrera: ";
                gotoxy(0,17);
                cout << "Email: ";
                gotoxy(0,18);
                cout << "Estado de entrega: ";
                gotoxy(0,19);
                cout << "Fecha de entrega: ";
                gotoxy(5,13);
                scanf(" %[^\n]", st.cif);
                gotoxy(17,14);
                scanf(" %[^\n]", st.fullname);
                gotoxy(10,15);
                scanf(" %[^\n]", st.faculty);
                gotoxy(9,16);
                scanf(" %[^\n]", st.major);
                gotoxy(7,17);
                scanf(" %[^\n]", st.email);
                gotoxy(19,18);
                scanf(" %[^\n]", st.deliveredOrNot);
                gotoxy(18,19);
                scanf("%d/%d/%d", &st.dateOfDelivery.day, &st.dateOfDelivery.month, &st.dateOfDelivery.year);
                updateStudent(st, pos);
                gotoxy(40,21);
                cout << "Registro actualizado...\n";
                }
                else{
                    cout << "Operacion cancelada...\n";
                }
                }
                system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
            break;

            case 3: 
                system("clear || cls");
                if (lastReg == 0)
                {
                    cout << "No hay nada que eliminar" << endl;
                    system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
                    break;
                }
                cout << "Escribe el CIF del estudiante: ";
                cin >> cif;
                pos = isStudent(cif);
                st = getStudent(pos);
                cout << endl;
                cout << "¿Realmente deseas eliminar el estudiante llamado: " << st.fullname << "?\n";
                cout << "Escribe 1 para SI o 2 para NO: ";
                cin >> resp;
                if (resp == 1)
                {
                deleteStudent(pos);
                cout << endl;
                cout << "Registro Eliminado... \n";
                }
                else{
                    cout << endl;
                    cout << "Operacion cancelada.... \n";
                }
                system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
            break;

            case 4:
                system("clear||cls");
                showStudents();
                system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
            break;

            case 5:
                system("clear || cls");
                start();
            break;

            case 6:
                cout << "Saliendo del programa..." << endl;
            break;

            default:
                cout << "Opcion no valida" << endl;
                system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
            break;
        }
    }
    while (op != 6);
    {
        saveStudents();
    }
}

void saveStudents(){
    studentsUamRegister = fopen("data.bin", "wb");
    fwrite(students, sizeof(studentsUAM), lastReg, studentsUamRegister);
    fclose(studentsUamRegister);
}

void readStudents(){
    studentsUamRegister = fopen("data.bin", "rb");
    if(studentsUamRegister == NULL){
        return;
} else{
    lastReg = calcLastReg(studentsUamRegister);
    fread(students, sizeof(studentsUAM), MAX, studentsUamRegister);
    fclose(studentsUamRegister);
}
}

int calcLastReg(FILE *archivo){
    int file_size, num_studentsUAM;
    //Obtener el tamaño del archivo
    fseek(archivo, 0, SEEK_END);
    file_size = ftell(archivo);
    rewind(archivo);

    //Calcular el numero de registros
    num_studentsUAM = file_size / sizeof(studentsUAM);
    return num_studentsUAM;
}