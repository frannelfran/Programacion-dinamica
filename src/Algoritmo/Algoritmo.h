// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: DAA
// Curso: 3º
// Práctica 04 : Programacion_Dinamica
// Autor: javier Gómez Alayón
// Correo: alu0101562445@ull.edu.es
// Fecha: 03/10/25
// Archivo Algoritmo.h : Declaración de la clase Algoritmo
//        En este fichero se declara la clase Algoritmo
//
// Historial de revisiones
//        03/10/25 - Creación (primera versión) del código
#ifndef C_Algoritmo_H
#define C_Algoritmo_H
#include"../Grafo/Grafo.h"

class Algoritmo {
 public:
  Algoritmo();
  virtual solve(Grafo) = 0;
 
};

#endif