#include "types.h"   // Tipos básicos usados por los programas de usuario en xv6
#include "stat.h"    // Definiciones relacionadas con información de archivos (no se usa aquí directamente)
#include "user.h"    // Declaraciones de funciones de usuario: printf, sleep, exit, getpid, etc.

int                 // Tipo de valor que devuelve main (0 implícito al hacer exit())
main(void)          // Función principal del programa, punto de entrada cuando se ejecuta prio_test
{
  int i;            // Variable entera para controlar el bucle de iteraciones

  // Imprime un mensaje indicando que el proceso inicia la prueba, mostrando su PID
  printf(1, "PID %d iniciando prueba...\n", getpid());

  // Bucle que se repite 5 veces para simular trabajo del proceso
  for(i = 0; i < 5; i++){
    // Imprime el PID y el número de iteración actual del bucle
    printf(1, "PID %d ejecutando iteracion %d\n", getpid(), i);
    // Hace que el proceso duerma un tiempo, permitiendo que el scheduler reparta CPU
    sleep(100);
  }

  // Termina el proceso de forma correcta y devuelve el control al sistema operativo xv6
  exit();
}

