
// o *var pega o valor
// o &var pega o endereço


int c = 10;
int* ponteiro;

// ponteiro apontando para o mesmo endereco de c
ponteiro = &c;

// imprime o endereco da variavel c
printf("%d %d\n", ponteiro, &c);

// imprime o conteúdo da variavel c
printf("%d %d\n", *ponteiro, c);
