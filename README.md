https://five-tarsal-393.notion.site/LIBFT-11369dbe95f48011bd26d4aec7e68f02
#Libft - Proyecto 42



    Introducción
    Estructura del Proyecto
    Descripción de Funciones
    Cómo Usar
    Makefile
    Bonus
    Pruebas
    Autor

Introducción
Este proyecto es parte de los proyectos del Comun Core de 42 y tiene como objetivo recrear funciones esenciales de la librería estándar de C desde cero, junto con algunas funciones adicionales que nos serán útiles en futuros proyectos.
Tabla de Contenidos.

lua

|-- libft/
    |-- ft_*.c          # Archivos fuente de cada función
    |-- libft.h         # Archivo de cabecera con las declaraciones de funciones
    |-- Makefile        # Script de compilación
    |-- bonus/          # Funciones adicionales (operaciones con listas enlazadas)
    |-- obj/            # Archivos objeto compilados
    |-- libft.a         # Archivo de librería estática generado

Descripción de Funciones

La biblioteca libft incluye las siguientes categorías de funciones:
Funciones de Memoria

    ft_memset - Rellena un bloque de memoria con un valor específico.
    ft_bzero - Borra un bloque de memoria.
    ft_memcpy - Copia una cantidad específica de bytes de un área de memoria a otra.
    ft_memccpy - Copia bytes de una cadena a otra hasta encontrar un carácter específico.
    ft_memmove - Copia bytes de un área de memoria a otra, gestionando correctamente áreas solapadas.
    ft_memchr - Busca un carácter en un bloque de memoria.
    ft_memcmp - Compara dos áreas de memoria.
    ft_calloc - Asigna memoria para una matriz de elementos, inicializando todo a cero.

Funciones de Manipulación de Cadenas

    ft_strlen - Calcula la longitud de una cadena.
    ft_strchr - Encuentra la primera ocurrencia de un carácter en una cadena.
    ft_strrchr - Encuentra la última ocurrencia de un carácter en una cadena.
    ft_strncmp - Compara dos cadenas de caracteres.
    ft_strdup - Duplica una cadena en una nueva ubicación de memoria.
    ft_strcpy - Copia una cadena a otra.
    ft_strncpy - Copia un número específico de caracteres de una cadena a otra.

Funciones de Conversión

    ft_atoi - Convierte una cadena de caracteres a un número entero.
    ft_itoa - Convierte un número entero a una cadena de caracteres.

Funciones de Entrada/Salida

    ft_putchar_fd - Escribe un carácter en un archivo descriptor.
    ft_putstr_fd - Escribe una cadena en un archivo descriptor.
    ft_putendl_fd - Escribe una cadena en un archivo descriptor, seguida de un salto de línea.
    ft_putnbr_fd - Escribe un número en un archivo descriptor.

Funciones Adicionales (Bonus)

Estas funciones están diseñadas para manejar listas enlazadas utilizando la estructura t_list:

    ft_lstnew - Crea un nuevo nodo de una lista enlazada.
    ft_lstadd_front - Añade un nodo al principio de una lista enlazada.
    ft_lstadd_back - Añade un nodo al final de una lista enlazada.
    ft_lstsize - Calcula el número de nodos en una lista.
    ft_lstlast - Devuelve el último nodo de una lista.
    ft_lstdelone - Elimina un nodo de una lista.
    ft_lstclear - Elimina todos los nodos de una lista.
    ft_lstiter - Itera sobre una lista y aplica una función a cada nodo.
    ft_lstmap - Crea una nueva lista aplicando una función a cada nodo de una lista existente.

Cómo Usar

    Clona este repositorio:

    bash

git clone https://github.com/tu_usuario/libft.git
cd libft

Compila la librería con el Makefile:

bash

make

El archivo libft.a se generará en el directorio y podrás usarlo en tus proyectos enlazándolo como cualquier otra librería estática:

bash

    gcc -Wall -Wextra -Werror -L. -lft tu_programa.c -o tu_programa

Makefile

El proyecto incluye un Makefile con las siguientes reglas:

    make o make all: Compila la librería y genera el archivo libft.a.
    make clean: Elimina los archivos objeto generados.
    make fclean: Elimina los archivos objeto y la librería libft.a.
    make re: Ejecuta fclean y luego recompila todo desde cero.

Bonus

El proyecto también incluye funciones adicionales para manejar listas enlazadas, ubicadas en el directorio bonus/. Estas funciones implementan operaciones comunes sobre listas, como añadir, eliminar, y recorrer los nodos de una lista enlazada.
Pruebas

Para probar las funciones implementadas en libft, puedes utilizar un archivo main.c de prueba o herramientas de testing externas, como:

    libft-tester
    war-machine
    libft-unit-test

Autor

    Tu Nombre - @ainigo-l
