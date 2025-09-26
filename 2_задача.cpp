#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<vector<float>> transtable = {
    {1, 83.61, 0.8556, 7.13, 88.68},
    {0.011961, 1, 0.010188, 0.085423, 1.06},
    {1.17, 98.15, 1, 8.34, 103.66},
    {0.1402, 11.71, 0.1199, 1, 12.43},
    {0.011275, 0.9429, 0.009646, 0.080435, 1}
  };
  vector<string> data = {"USD", "RUB", "EUR", "CNY", "INR"};
  string input1, input2;
  int temp1, temp2;
  float money;
  cout << "Введите название валюты, в которой выражены ваши сбережения\n";
  cin >> input1;
  while (find(data.begin(), data.end(), input1) == data.end()) {
    cout << "Не нашлось такой валюты, попробуйте еще раз. Доступные варианты: ";
    for (auto elem : data) {
      cout << elem << ", ";
    } cout << ".\n";
    cin >> input1;
  } temp1 = find(data.begin(), data.end(), input1) - data.begin();
  cout << "Введите название валюты, в которую вы хотите перевести ваши сбережения\n";
  cin >> input2;
  while (find(data.begin(), data.end(), input2) == data.end()) {
    cout << "Не нашлось такой валюты, попробуйте еще раз. Доступные варианты: ";
    for (auto elem : data) {
      cout << elem << ", ";
    } cout << ".\n";
    cin >> input2;
  } temp2 = find(data.begin(), data.end(), input2) - data.begin();
  cout << "Введите сумму, которую вы хотите перевести\n";
  cin >> money;
  cout << money  << " " << input1 << " = " << money * transtable[temp1][temp2]  << " " << input2 << endl;
}
