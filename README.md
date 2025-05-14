# temp

# ローカル環境で、課題コード（temp.cpp）のコンパイルを実行する場合、以下を実行
sh local_test.sh

# make, g++コンパイラが環境にない場合
## unix環境であることは必須。windowsの場合MinGWなどで上手く対応が必要
sudo apt update
sudo apt install build-essential

# 用意された受講生用レポジトリにpushされたタイミングでビルド・採点用テストが実行されます