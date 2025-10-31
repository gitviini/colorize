<div align="center">

![Example image](./image.png)

  <p>
    <b>Colorize</b>

![starts](https://img.shields.io/github/stars/gitviini/colorize)
![c_version](https://img.shields.io/badge/c-17%2B-brightgreen)

  </p>
</div>

by: [gitviini](https://github.com/gitviini)

## :bookmark: Descrição

Lib escrita em c para impressão de texto em caixa alta.  <br />
OBS: Sem 'ç' e caracteres especiais.

## :gear: Requerimentos

- Compilador para c (gcc e etc)

## :bug: Como executar

```shell
git clone https://github.com/gitviini/colorize
cd colorize
gcc example.c colorize.c -o colorize && ./colorize
```

## :exploding_head: Como usar no próprio código

```c
...

// incluindo cabeçalho do módulo colorize
#include "colorize.h"

...

int main(){

  // recebe uma string e imprime no formato do colorize
  colorize("<string>");

  return 0;
}
```
