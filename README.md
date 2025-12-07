## Archivos modificados en el proyecto

En este repositorio se modificaron principalmente:

- `proc.h`: se añadió el campo `priority` en `struct proc`.
- `proc.c`: se modificaron `userinit()`, `fork()` y `scheduler()` para usar prioridad.
- `kalloc.c`: se añadieron los contadores `free_pages` y `allocated_pages`.
- `sysproc.c`, `syscall.c`, `syscall.h`, `user.h`, `usys.S`: se implementó la syscall `memstat`.
- `prio_test.c`: programa de usuario para probar el scheduler.
- `memstat.c`: programa de usuario para invocar `memstat`.
