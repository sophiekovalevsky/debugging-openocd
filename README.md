# Debugging con OpenOCD para Sistemas Embebidos

Este repositorio contiene todos los recursos necesarios para poder replicar
las experiencias mostradas en la charla dada en el Arduino Day México 2021.

El motor de inspiración de esta charla era generar documentación en español sobre el proceso
de depuración a la hora de trabajar con un microcontrolador para sistemas embebidos.

El objetivo era introducir los conceptos de depuración y las herramientas que generalmente
se utilizan para diagnosticar fallas en microcontroladores que adentro tienen un procesador
implementado con architectura ARM con el architecture profile M. En este caso un Cortex-M4
que reside en el STM32L476.

## Estructura

```
├── Core (código fuente principal)
├── Drivers (dependencias para inicialización de periféricos)
├── python-gdb-server (código en python para ver los mensajes del cliente gdb)
└── startup
```
