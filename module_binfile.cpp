//Выполнила Колосова Елена ВМК-22


#include <fstream>
#include <iostream>
#include <string> 
using namespace std;

namespace ArrayAndBinFile{
/// считывает массив с бинарного файла
/// \param arr массив
/// \param n размер массива
/// \param file файл, откуда считывается массив
/// \return ничего, но заполняет массив числами из файла
void file_to_array(float *arr, unsigned n, std::string &FileName){
ifstream file(FileName, ios_base::binary);
if (file.is_open()){
	for (int i = 0; i<n; i++){
		file.read((char*)&arr[i], sizeof(float));
	//cout<<arr[i]<<endl;
	}
}
else 
	throw invalid_argument("File not found");
file.close();
}


/// выводит массив в бинарный файл
/// \param arr массив
/// \param n размер массива
/// \param file файл, куда выводится массив
/// \return ничего, но в файл выводиться массив
void output_to_file(const float * arr, unsigned n, std::string &FileName){
ofstream file(FileName, ios_base::binary);
if (file.is_open()){
	for (int i = 0; i<n; i++){
		file.write((char*)&arr[i], sizeof(float));}
}
else 
	throw invalid_argument("File not found");
file.close();
}
}