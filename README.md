http://qiita.com/yohhoy/items/960ee7a7b502e5c764b4

# ScientificCalculator

関数電卓とは、化学・工学・数学など計算向けに設計された電卓。

#色んな電卓

  - 普通の電卓
    四則演算や百分率ぐらいしか計算できない
  - グラフ電卓
    欧米ではグラフ電卓に取って変わられている。
  - プログラム電卓
    コンピュータのようにプログラムを格納し、より高度な計算が可能な電卓

# 仕様

  入力
    標準入力 まずこっち
    GUI

  計算の優先順位
    加算・減算より乗算・除算を先に行う
    
# 機能

参考
http://tomari.org/main/java/dentaku_kansuu.html


. 少数点
, カンマ　関数の区切りなどに利用

+
-
*
/
^

sqr ルート
pow yルート
mod 除算の余り

指数・対数
e　自然対数eの値
exp eのx乗？？
log 
ln 
ln2
ln10
ln2e 2を底としたeの対数
ln10e 10を底としたeの対数

順列・組み合わせ
n(x) xの階乗（N!)
nPr(n,r)　順列　nPr = N! / (n -r)
nCr(n,r)　組み合わせ nCr = N! / r! (n-r) !

三角関数
π
rad
deg
sin
cos
tan
asin
acos
atan

二次式の解
(ax^2 + bx + c = 0) Xa(a,b,c),Xb(a,b,c)
Xa = (-b + sqr(b^2 - 4ac)) / 2a
Xb = (-b - sqr(b^2 - 4ac)) / 2a


16進数対応
0x
A
B
C
D
E
F

２進数　１６進数　リアルタイム変換機能
式打ち込み中に
16@h とすると Fと変換とかしたり？



# 拡張性

  グラフ電卓の足掛かりになるように設計できればいいなぁ。
  ２次関数の放物線ぐらいならできるかも
  
  
# 内部設計

  四則演算の他に関数function(a,b)などの構文があるため、
  構文解析が必要
  
  字句解析
  [構文解析](BNF)
  意味解析
  



  
  
