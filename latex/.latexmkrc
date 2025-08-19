# latexmkrc (Windows向け日本語uplatex用の例)

# 使用するコンパイラやツールの指定
$latex    = 'uplatex';
$bibtex   = 'upbibtex';
$dvipdf   = 'dvipdfmx %O -o %D %S';
$makeindex = 'mendex -U %O -o %D %S';

# PDF生成モード（uplatex + dvipdfmx）
$pdf_mode = 3;

# フォント環境変数の設定（Windowsのフォントパスに変更）
# もしくはコメントアウトしてデフォルトに任せてもよい
$ENV{OPENTYPEFONTS} = 'C:/Windows/Fonts//:';
$ENV{TTFONTS}       = 'C:/Windows/Fonts//:';
