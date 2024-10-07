https://five-tarsal-393.notion.site/LIBFT-11369dbe95f48011bd26d4aec7e68f02
# Libft - Proyecto 42

Este proyecto forma parte del Comun Core de 42 y tiene como objetivo recrear funciones esenciales de la librería estándar de C desde cero, junto con algunas funciones adicionales que serán útiles en futuros proyectos.

## Tabla de Contenidos

- [Introducción](#introducción)
- [Estructura del Proyecto](#estructura-del-proyecto)
- [Descripción de Funciones](#descripción-de-funciones)
- [Cómo Usar](#cómo-usar)
- [Makefile](#makefile)
- [Bonus](#bonus)
- [Pruebas](#pruebas)
- [Autor](#autor)

## Introducción

El proyecto **libft** consiste en la implementación personal de un subconjunto de funciones de la librería estándar de C, además de algunas funciones útiles adicionales que serán utilizadas en futuros proyectos de 42. Estas funciones abarcan operaciones como la gestión de memoria, manipulación de cadenas y manejo de listas enlazadas.

## Estructura del Proyecto

```bash
libft/
├── ft_*.c          # Archivos fuente de cada función
├── libft.h         # Archivo de cabecera con las declaraciones de funciones
├── Makefile        # Script de compilación
├── bonus/          # Funciones adicionales (operaciones con listas enlazadas)
├── obj/            # Archivos objeto compilados
└── libft.a         # Archivo de librería estática generado

 ```
## Descripción de Funciones

La biblioteca **libft** incluye las siguientes categorías de funciones:

### Funciones de Memoria

- `ft_memset` - Rellena un bloque de memoria con un valor específico.
- `ft_bzero` - Borra un bloque de memoria.
- `ft_memcpy` - Copia una cantidad específica de bytes de un área de memoria a otra.
- `ft_memccpy` - Copia bytes de una cadena a otra hasta encontrar un carácter específico.
- `ft_memmove` - Copia bytes de un área de memoria a otra, gestionando correctamente áreas solapadas.
- `ft_memchr` - Busca un carácter en un bloque de memoria.
- `ft_memcmp` - Compara dos áreas de memoria.
- `ft_calloc` - Asigna memoria para una matriz de elementos, inicializando todo a cero.

### Funciones de Manipulación de Cadenas

- `ft_strlen` - Calcula la longitud de una cadena.
- `ft_strchr` - Encuentra la primera ocurrencia de un carácter en una cadena.
- `ft_strrchr` - Encuentra la última ocurrencia de un carácter en una cadena.
- `ft_strncmp` - Compara dos cadenas de caracteres.
- `ft_strdup` - Duplica una cadena en una nueva ubicación de memoria.
- `ft_strcpy` - Copia una cadena a otra.
- `ft_strncpy` - Copia un número específico de caracteres de una cadena a otra.

### Funciones de Conversión

- `ft_atoi` - Convierte una cadena de caracteres a un número entero.
- `ft_itoa` - Convierte un número entero a una cadena de caracteres.

### Funciones de Entrada/Salida

- `ft_putchar_fd` - Escribe un carácter en un archivo descriptor.
- `ft_putstr_fd` - Escribe una cadena en un archivo descriptor.
- `ft_putendl_fd` - Escribe una cadena en un archivo descriptor, seguida de un salto de línea.
- `ft_putnbr_fd` - Escribe un número en un archivo descriptor.

### Funciones Adicionales (Bonus)

Estas funciones están diseñadas para manejar listas enlazadas utilizando la estructura `t_list`:

- `ft_lstnew` - Crea un nuevo nodo de una lista enlazada.
- `ft_lstadd_front` - Añade un nodo al principio de una lista enlazada.
- `ft_lstadd_back` - Añade un nodo al final de una lista enlazada.
- `ft_lstsize` - Calcula el número de nodos en una lista.
- `ft_lstlast` - Devuelve el último nodo de una lista.
- `ft_lstdelone` - Elimina un nodo de una lista.
- `ft_lstclear` - Elimina todos los nodos de una lista.
- `ft_lstiter` - Itera sobre una lista y aplica una función a cada nodo.
- `ft_lstmap` - Crea una nueva lista aplicando una función a cada nodo de una lista existente.

## Cómo Usar

1. Clona este repositorio:

    ```bash
    git clone https://github.com/AndreaILara/Libft-42.git
    cd libft
    ```

2. Compila la librería con el Makefile:

    ```bash
    make
    ```

3. El archivo `libft.a` se generará en el directorio y podrás usarlo en tus proyectos enlazándolo como cualquier otra librería estática:

    ```bash
    gcc -Wall -Wextra -Werror -L. -lft tu_programa.c -o tu_programa
    ```

## Makefile

El proyecto incluye un **Makefile** con las siguientes reglas:

- `make` o `make all`: Compila la librería y genera el archivo `libft.a`.
- `make clean`: Elimina los archivos objeto generados.
- `make fclean`: Elimina los archivos objeto y la librería `libft.a`.
- `make re`: Ejecuta `fclean` y luego recompila todo desde cero.

## Bonus

El proyecto también incluye funciones adicionales para manejar listas enlazadas, ubicadas en el directorio `bonus/`. Estas funciones implementan operaciones comunes sobre listas, como añadir, eliminar, y recorrer los nodos de una lista enlazada.

## Pruebas

Para probar las funciones implementadas en **libft**, puedes utilizar un archivo `main.c` de prueba o herramientas de testing externas, como:

- [libft-tester](https://github.com/Tripouille/libftTester)
- [war-machine](https://github.com/ska42/libft-war-machine)
- [libft-unit-test](https://github.com/alelievr/libft-unit-test)

## Autor

- **Andrea** - [@ainigo-l](https://github.com/AndreaILara)

