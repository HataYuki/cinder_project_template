#cinder_project_template
[Cinder](https://libcinder.org)のプロジェクトテンプレート。
[CLion](https://www.jetbrains.com/ja-jp/clion/)向け。
cmake使用。

## 1　「Cinder」をダウンロードする。
```bash
$ git clone --recursive --depth=1 https://github.com/cinder/Cinder.git
$ cd Cinder
$ mkdir build
$ cd build
$ cmake ..
$ make -j4
```

## 2　「cinder_project_template」を「Cinder」直下に配置。
```bash
$ cd Cinder
$ git clone --depth=1 https://github.com/HataYuki/cinder_project_template.git
```

## 3 「CLion」で開く。
CLionの「Welcom to CLion」のパネルを開き、「Open」を選択。
ダイアログで「cinder_project_template」選択する。
終わり。

### 作成当時の環境
Macbook pro(macOS Catalina 10.15.3)
CLion 2019.3.2


