# C言語について

[printf](http://www.k-cube.co.jp/wakaba/server/format.html)

#コンパイラについて

include "my_program.h" などは
そのソースが単純に展開されるだけっぽい

gcc -c file.c プリコンパイル？ *.o と *.gch（プリコンパイルヘッダ）ができる




# git
git add . 消したファイルはステージングされない
git add -A 更新のすべてをステージングし、消したファイルはステージングしない

#メモリマップ

あるOS/コンパイラの組み合わせにおける、
RAM上のアドレスと用途の割り当て表

-割り込みベクタ(VECT)
-初期スタック領域(INIT)
-コード領域(C)
-初期化データ領域(D)
-未初期化データ領域(BSS)
-OS管理領域(BSS)
-OS未使用領域

