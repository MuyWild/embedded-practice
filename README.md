
# Embedded Practice 🧠⚙️

Repositorio personal de ejercicios y proyectos en C enfocados en **programación de sistemas embebidos**.

## Descripción
Este proyecto es un laboratorio personal para practicar conceptos clave de programación en C aplicados a sistemas embebidos, incluyendo:

- Modularidad y separación de código en archivos `.c` y `.h`
- Control de flujo y funciones recursivas
- Uso de Makefile para compilación automatizada
- Buenas prácticas de versionado con Git

---

## Estructura del proyecto

embedded-practice/
├── include/ # Cabeceras de los módulos
│ └── factorial.h
├── src/ # Código fuente
│ ├── main.c
│ └── factorial.c
├── Makefile # Script de compilación
├── README.md
└── .gitignore

---

## Módulos actuales

### 1. Factorial
- **Archivos:** [`include/factorial.h`](include/factorial.h), [`src/factorial.c`](src/factorial.c)
- **Funcionalidad:** calcular factorial de un número de manera iterativa o recursiva

#### Ejemplo de ejecución:

```bash
make
./mi_programa
make          # Compila el proyecto
make clean    # Elimina binarios y objetos generados
Buenas prácticas aplicadas

Binarios y archivos objeto no se suben a Git gracias a .gitignore.

Cada módulo tiene su cabecera (.h) y código (.c) separados.

Mensajes de commits claros y atómicos:

Ejemplo: "Implemento módulo factorial iterativo y recursivo, limpio proyecto base y actualizo Makefile"

Próximos pasos

Implementar más ejercicios de fundamentos de C: punteros, estructuras, memoria dinámica

Integración de periféricos simulados para microcontroladores

Creación de mini proyectos tipo firmware

---

### 🔹 Próximo paso

1. Guarda este contenido en tu `README.md`.  
2. Ejecuta:

```bash
git add README.md
git commit -m "Actualizo README final con documentación profesional y módulo factorial"
git push



