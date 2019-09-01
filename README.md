# TryUMDH
UMDHによるメモリーリーク調査



参考サイト


https://blogs.msdn.microsoft.com/japan_platform_sdkwindows_sdk_support_team_blog/2013/08/18/howto-umdh/


1. [ツールのインストール](https://developer.microsoft.com/ja-jp/windows/downloads/sdk-archive)
1. LeakSampleをビルド
1. LeakSample.pdbをC:\C:\symbols.cache_pubにコピー
1. コマンドプロンプトを起動
1. set _NT_SYMBOL_PATH=srv*C:\symbols.cache_pub*http://msdl.microsoft.com/download/symbols
1. "C:\Program Files (x86)\Windows Kits\10\Debuggers\x64\gflags" -i Leaksample.exe +ust
1. LeakSample.exeを実行
1. "C:\Program Files (x86)\Windows Kits\10\Debuggers\x64\umdh.exe" -p:{プロセスID} -f:C:\Output\log1.txt
1. しばらく（5分ほど）待つ
1. "C:\Program Files (x86)\Windows Kits\10\Debuggers\x64\umdh.exe" -p:{プロセスID} -f:C:\Output\log2.txt
1. "C:\Program Files (x86)\Windows Kits\10\Debuggers\x64\umdh.exe" C:\Output\log1.txt C:\Output\log2.txt > C:\Output\log12.txt
1. 出力結果を解析。
