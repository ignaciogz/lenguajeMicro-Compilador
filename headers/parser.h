#ifndef PARSER_H_
#define PARSER_H_
	
	#include "micro.h"
	
	void Objetivo(void);
	void Programa(void);
	void ListaSentencias(void);
	void Sentencia(void);
	void ListaIdentificadores(void);
	void Identificador(REG_EXPRESION * resultado);
	void ListaExpresiones(void);
	void Expresion(REG_EXPRESION * resultado);
	void Primaria(REG_EXPRESION * resultado);
	void OperadorAditivo(char * resultado);

#endif