# print_GFX_SSD1306
  
print_GFX_SSD1306はRaspberry Pi PicoのC/C++開発ツールのpico-sdk用のグラフィックスライブラリであるyama_2_GFX_SSD1306に簡易的な文字表示機能を付け加えるライブラリです。  
print_GFX_SSD1306を使うためにはyama_2_GFXとyama_2_GFX_SSD1306が必要になります。  
(yama_2_GFX Version 0.3が必要)  
https://github.com/yamayamaru/yama_2_GFX  
https://github.com/yamayamaru/yama_2_GFX_SSD1306  
プログラム全体がC++で書かれていてC++用のライブラリになります。   
表示できる文字はASCIIコードの英数字、記号のみです。  
文字の画面スクロールの機能は実装してません。  
  
print_GFX_SSD1306はMicroPython用のライブラリであるmicropython-ili9341を参考にして作成しました  
https://github.com/jeffmer/micropython-ili9341  
  
print_GFX_SSD1306はyama_2_GFX_SSD1306を継承していてSSD1306に文字を描画するためのライブラリです。  
print_GFX_SSD1306はyama_2_GFX_SSD1306を継承していてyama_2_GFX_SSD1306の全機能が使用できます。  
