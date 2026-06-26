# Tps-Proyecto-Nicolas-Rambaldi-2026
Nicolás Rambaldi

nicolas.rambaldi1306@gmail.com

4to 1ra

Gonzalo Consorti


Instrucciones para el examen:  (semana del 26/6 )

Duración: hasta las 16:00hs
Abrir tinkercad.com y crear un circuito básico para desarrollar la consigna.
Dejar abierto su repositorio personal de GitHub (no crear repositorio nuevo), crear un nueva rama que se llame Examen y dentro una carpeta Examen.
Realizar la consigna del examen expuesta mas abajo.
Una vez resuelta o terminado el tiempo del examen, subir al repositorio: captura de pantalla del circuito y  el codigo en extensión .ino  (guardar archivo con nombre:    Apellido-Examen.ino) 
Publicar en esta tarea el link al repositorio donde se subió la resolución del examen y tocar entregar.
Asegurarse de que el repositorio este compartico con el docente como colaborador (Email docente:  consor92@gmail.com )
La entrega por GIT también es evaluada.
Nos dividiremos en 2 tandas de estudiantes, 1 por PC hasta que todas las PC estén llenas, el resto esperara a volver del recreo para realizar el examen.
Se recuerda que no hay recuperatorio.
Esta prohibido uso de celulares, o paginas auxiliares que no sean su repositorio de GitHub (sus TPs y Guías propios)
Se recuerda que la inasistencia sin justificativo medico amerita un 1 (uno) (en caso de contar con un certificado se evaluara en la siguiente clase SIN EXCEPCIÓN) 
Se recuerda que se penalizara el uso de aplicaciones/programas/sitios web no autorizados durante el examen con la inhabilitación del mismo (conlleva un 1).
Se recuerda que solo se podrá resolver el examen con contenidos vistos en la asignatura EN CLASE, todo contenido externo no explicado sera PENALIZADO en la nota (por cada contenido no calificado se restara 1 punto al final).
La consigna de clssroom impide que se suban entregas luego del horario de finalización de la materia. (max 9:15 y 10:35)
Se permite utilizar los TP's personales realizados para la resolución del mismo (Guia1, Tp1, Tp2, Tp3, Tp4, Tp5) SOLO VERLOS DESDE GITHUB y no se admite código que no seas explícitamente de la resolución de los ejercicios NI comentarios explicativos  dentro de los ejercicios resueltas para la resolución del examen.
Esto no entra por ende no se podría usar para resolver: (Funciones , vectores , tone )
-----------------------------------------------------------------------------------------------------------

Temas comprendidos en el examen que están habilitados para usarse:El examen se resuelve solo con los temas visto en clase, si se resuelve con algo que no vimos en clase 1 punto menos por cada cosa que no explicamos en clase.
Antes de realizar la consigna, por favor mirar las rubricas de calificación en la tarea (descripción y nota).
Tiempo estimado de examen 80min. (los tiempos son estrictos con reloj en pantalla y alarma)

Componentes permitidos poara su uso:
Protoboard
Arduino
Resistencia (220)
Potenciómetro (10K)
PushButton
Led RGB ( no vamos a usar led comunes)
Buzzers
Fotorresistencia
Sensor Ultrasónico
Sensor PIR
Sensor Temperatura
Pantalla LCD
Sensor inclinación
sensor flexible
detector de Luz
sensor de humedad
NeoPixel
Codificación:
#Define y Macros
#ifdef  #endif
Variables (locales y globales)   ( se admiten variables  contadoras )
Condicional simple ( if
else if
else  -  if ternario
switch)
Condicional Compuesto ( AND , OR , NOT)
pinMode ( INPUT, OUTPUT, INPUT_PULLUP)
Lectura/Escritura Digital
Lectura/Escritura Analógica
Función MAP, Constrain
delay
delayMicrosecond
Operadores aritméticos:     +   -   /   *    %
Operadores de comparación:  <  >  >=  <=  !=    !
Consola de Monitor Serial  Serial.print() y Serial.println()
------------------------------------------------------------------------------
Recomendación: realizar cada parte de forma individual y después unirlo para que todo el sistema completo ya que la rubrica de evaluación es por partes (aunque debe de quedar integrado para considerarse aprobado)
------------------------------------------------------------------------------

Consigna: Debes crear un sistema de monitoreo y visualización utilizando los siguientes componentes:

1) Comportamiento del Tira de Led de NeoPixel (6 LEDs):La tira de  6 LEDs se utilizará para representar la flexión del sensor flexible de la siguiente manera:
Flexión mínima: Los LEDs deben  encenderse e ir encendiendo en orden  incremental hasta el angulo marcado. ( max hasta 45°
LED 0 AL 1)
Flexión media: Los LEDs se deben ir encendiendo en orden incremental   ( 45° a  90° LED 2 AL 3)
Flexión máxima: Todos los LEDs deben encenderse  (completando el anillo de 6 LEDs). ( 90° a 180°
LED 4 AL 5)
En todos los casos, si el sensor retrocede deben ir apagando los led.
 A medida que el sensor detecta mayor o menor flexión, más o meos LEDs del anillo se irán iluminando o apagando uno a uno, de un color fijo:
Verde  ( LED 0 AL 1)
Amarillo (LED 2 AL 3)
Rojo (LED   3 a 5 )
2) Lectura del Sensor Flexible y Monitor Serial:
Debes realizar pruebas de lectura del sensor mediante el Monitor Serial, mostrando en la consola los valores que recibe el Arduino  de la siguiente forma:   "Flex: X 
Angulo: X
N
°Led: X
Color: X "     luego mandar un enter.
Deshabilitar (sin borrar ni comentar) la parte del código para pruebas de sensores luego de realizar las pruebas de valores.

3) Pantalla LCD debe mostrar: 
La lectura actual del sensor flexible en unidades de flexión ( Angulo 0 a 180) en un renglon
En el sefundo renglon El color en que se debe prender (lo mas a la derexha posible)
4) El estado del sistema ( con Botón en segundo plano ) :
Un PushButton debe usarse para encender y apagar el sistema completo. Al presionar el botón (una sola vez), el sistema debe activarse o desactivarse por completo.
Cuando el sistema está apagado, todos los LEDs deben apagarse
5) Entrega por GIT
subir el resuelto y entregar a classroom de forma adecuada.
-tener comentando y ordenado el codigo.

Tips y helpers:
Lectura dato bruto
pasado a angulo
pasado a n° led
  if (led >= n°) { prender n° } else { apagar n° }
encendido   =   negado de encendido.


Dificultades al intentar resolver:

el lcd no prendia y no llegue a hacer el boton xq me acorde al final que habia que poner uno
y el sensor flexible tenia unos numeros horribles la verdad
