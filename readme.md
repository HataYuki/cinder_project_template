# `cinder_project_template`
[Cinder](https://libcinder.org)のプロジェクトテンプレート。  
[CLion](https://www.jetbrains.com/ja-jp/clion/)向け。  
cmake 使用。

## 1 　「Cinder」をダウンロードする。

```bash
$ git clone --recursive --depth=1 https://github.com/cinder/Cinder.git
$ cd Cinder
$ mkdir build
$ cd build
$ cmake ..
$ make -j4
```

gitの最新verだとうまく行かない場合は、v0.9.2をgitのreleaseから落とした方がいいかもしれない。

## 2 　「cinder_project_template」を「Cinder」直下に配置。

```bash
$ cd Cinder
$ git clone --depth=1 https://github.com/HataYuki/cinder_project_template.git
```

## 3 「CLion」で開く。

CLion の「Welcom to CLion」のパネルを開き、  
「New CMake Project from Source」を選択。  
ダイアログで「cinder_project_template」選択する。  
「Open Existing Project」を選択。

## 備考
「Run」を実行してもバイナリが実行されない場合は、「Run/Debug configurations」パネルの
「Executable」で.app内のバイナリを指定してあげる必要がある。


このテンプレートの場合「cinder_project_template/cmake-build-debug/Debug/cinder_project_template/cinder_project_template.app/Contents/MacOS/cinder_project_template」
を指定する。

実行ファイルがない場合は、一度「Run」を実行する。ビルドは成功するので、「MacOS」フォルダ内にバイナリは生成されるのでそれを指定する。


## 環境

Macbook pro(macOS Catalina 10.15.3)  
CLion 2019.3.2
