//Estrucutura de los datos de los estudiantes
typedef struct{
    int cif;
    char name[100];
    char faculty[100];
    char major[100];
    char email[100];
    bool deliveredOrNot;
}studentsUAM;



//Declaracion e inicializacion, array de la estructura
studentsUAM database[] = {
    {18010053,"SILVIO ALEJANDRO MORA MENDOZA", "FACULTAD DE INGENIERIA Y ARQUITECTURA",
    "INGENIERIA EN SISTEMAS DE INFORMACION", "samora@uamv.edu.ni", true},
    
    {22011275, "CESAR AUGUSTO SILVA HERNANDEZ", "FACULTAD DE INGENIERIA Y ARQUITECTURA",
    "INGENIERIA EN SISTEMAS DE INFORMACION", "casilva@uamv.edu.ni", true},

    {23010471, "KAREN MARIZA ROSA YOLANDA FONSECA VEGA", "FACULTAD DE INGENIERIA Y ARQUITECTURA",
    "INGENIERIA EN SISTEMAS DE INFORMACION", "kmryfonseca@uamv.edu.ni", true},

    {23010328, "GABRIEL ILIUS PEREZ CALERO", "FACULTAD DE INGENIERIA Y ARQUITECTURA",
    "INGENIERIA EN SISTEMAS DE INFORMACION", "giperez@uamv.edu.ni", false},

    {23010286, "CHRISTOPHER JOSHUA IBARRA SOBALVARRO", "FACULTAD DE INGENIERIA Y ARQUITECTURA",
    "INGENIERIA EN SISTEMAS DE INFORMACION", "cjibarra@uamv.edu.ni", false},

    {22021115, "ADRIANA ISABEL LANZAS RIVAS", "FACULTAD DE INGENIERIA Y ARQUITECTURA",
    "INGENIERIA EN SISTEMAS DE INFORMACION", "ailanzasr@uamv.edu.ni", true},

    {23010159, "DIEGO ROBERTO CORRALES ESPINOZA", "FACULTAD DE INGENIERIA Y ARQUITECTURA",
    "INGENIERIA INDUSTRIAL", "drcorrales@uamv.edu.ni", false},

    {23010206,"ADRIANO SAMUEL MEDINA", "FACULTAD DE INGENIERIA Y ARQUITECTURA",
    "ARQUITECTURA", "amedina@uamv.edu.ni", false},
    
    {22010301, "ELISA MARGARITA CHAMORRO SANCHEZ", "FACULTAD DE CIENCIAS ADMINISTRATIVAS Y ECONOMICAS",
    "NEGOCIOS INTERNACIONALES", "echamorro@uamv.edu.ni", false},

    {22010301, "ALVIN JAVIER RODRIGUEZ VALDIVIA", "FACULTAD DE CIENCIAS ADMINISTRATIVAS Y ECONOMICAS",
    "ADMINISTRACION DE EMPRESAS", "ajrodriguezv@uamv.edu.ni ", false},

    {23010785,"VICTORIA NAVARRETE PINEDA", "FACULTAD DE CIENCIAS ADMINISTRATIVAS Y ECONOMICAS",
    "ECONOMIA EMPRESARIAL", "vnavarrete@uamv.edu.ni", false},

    {22010590,"GIULIANNA ISABELLA HERNANDEZ RUIZ", "FACULTAD DE CIENCIAS MEDICAS",
    "MEDICINA", "gihernandez@uamv.edu.ni", false},

    {21011539, "MARIA IGNACIA MANZANARES LACAYO", "FACULTAD DE CIENCIAS MEDICAS",
    "PSICOLOGIA", "mimanzanares@uamv.edu.ni ", false},

    {22011091, "MARCELA GABRIELA SALINAS MENDIETA", "FACULTAD DE ODONTOLOGIA",
    "ODONTOLOGIA", "mgsalinas@uamv.edu.ni", false},

    {23010018, "AMY SILOE LOPEZ ESCOBAR", "FACULTAD DE MARKETING, DISEÑO Y CIENCIAS DE LA COMUNICACION",
    "MARKETING Y PUBLICIDAD", "aslopez@uamv.edu.ni ", false},

    {21011984,"ALEXANDRA XIOMARA MEJIA WILFORD", "FACULTAD DE MARKETING, DISEÑO Y CIENCIAS DE LA COMUNICACION",
    "DISENO Y COMUNICACION VISUAL", "cagomezg@uamv.edu.ni", false},

    {19014356, "CARLOS FERNANDO PEREZ ROMERO", "FACULTAD DE CIENCIAS JURIDICAS Y RELACIONES INTERNACIONALES",
    "DIPLOMACIA Y RELACIONES INTERNACIONALES", "cfpromero@uamv.edu.ni", false},

    {23010202,"CARMEN ANDREA GOMEZ GUADAMUZ", "FACULTAD DE CIENCIAS JURIDICAS Y RELACIONES INTERNACIONALES",
    "DERECHO", "cagomezg@uamv.edu.ni", false},

    {21012325,"MATTHEW JAVIER CARRILLO ARANGO", "FACULTAD DE CIENCIAS ADMINISTRATIVAS Y ECONOMICAS",
    "ADMINISTRACION DE EMPRESAS", "mjcarrillo@uamv.edu.ni", false},

    {21012429,"ALEXANDER SAMUEL MORENO ENRIQUEZ", "FACULTAD DE CIENCIAS ADMINISTRATIVAS Y ECONOMICAS",
    "ADMINISTRACION DE EMPRESAS", "asmoreno@uamv.edu.ni", false},

    {21012437,"SANTIAGO ENRIQUE BALDOVINOS ZELAYA", "FACULTAD DE CIENCIAS ADMINISTRATIVAS Y ECONOMICAS",
    "ADMINISTRACION DE EMPRESAS", "sebaldovinos@uamv.edu.ni", false},

};