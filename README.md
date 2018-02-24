<h2>Problema</h2>

Construir una herramienta computacional que considere el funcionamiento de un AFD M= (Q ,Σ, δ, q 0 , F) utilizando la tabla de transiciones. La herramienta debe recibir como entrada un alfabeto finito Σ = { , , }, los estados del AFD Q = { , , }, los estados finales F = { , , }, de tal forma que una vez ingresada ésta información deberá generar la tabla dinámica para ingresar las transiciones del AFD, por último se deberá ingresar una cadena w - es necesario tener opción de analizar varias cadenas en la misma ejecución- y   que   el   programa   determine   si   la   cadena   es   aceptada   o   rechazada.

<h2>Algoritmo</h2>

Nuestro algoritmo es bastante sencillo, tenemos un vector Q de Objetos de tipo estado el cual a su vez tiene un vector con N enteros donde N es la cantidad de elementos en el alfabeto. Dichos enteros significan a qué estado iria el estado actual si se le introduce el elemento n del alfabeto. Con esto implementado lo único que tuvimos que hacer es codificar la función de transición extendida de manera recursiva y que al final de la iteración devuelva la propiedad Final del elemento actual.
