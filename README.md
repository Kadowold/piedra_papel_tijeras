# piedra_papel_tijeras

Juego de piedra, papel o tijeras hecho en C, para jugar en la terminal.

## Cómo se juega

El jugador (nosotros) se enfrenta a la computadora.

## Descargar y jugar (Windows)

1. Entra a [Releases](https://github.com/Kadowold/piedra_papel_tijeras/releases).
2. Descarga el archivo [Piedra_Papel_o_tijera.exe].
3. Ábrelo con doble clic.

Si Windows muestra un aviso azul de seguridad, toca "Más información" y luego "Ejecutar de todos modos". Ese aviso sale con los programas que no tienen firma digital.

## Compilarlo tú mismo

Necesitas tener gcc instalado.

```bash
git clone https://github.com/Kadowold/piedra_papel_tijeras.git
cd piedra_papel_tijeras
gcc piedra_papel_tijeras.c -o piedra_papel_tijeras
./piedra_papel_tijeras
```

En Windows el último comando es `piedra_papel_tijeras.exe`. El repo también trae un `CMakeLists.txt` por si prefieres usar CMake.
