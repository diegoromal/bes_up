#!/bin/bash

##########################################################################
##### Script de testes na disciplina Sistemas Computacionais de Base #####
##########################################################################

echo "Vou buscar os dados do sistema. Posso continuar? [sn]"
read RESPOSTA

test "$RESPOSTA" = "n" && exit
test "$RESPOSTA" = "N" && exit

echo "Data e horário: "
date
echo

echo "Uso do disco: "
df
echo

echo "Usuários conectados: "
w
