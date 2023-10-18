//Выполнила Колосова Елена ВМК-22
namespace ArrayAndBinFile{

/// считывает массив с бинарного файла
/// \param arr массив
/// \param n размер массива
/// \param file файл, откуда считывается массив
/// \return ничего, но заполняет массив числами из файла
void file_to_array(float *arr, unsigned n, std::string &FileName);

/// выводит массив в бинарный файл
/// \param arr массив
/// \param n размер массива
/// \param file файл, куда выводится массив
/// \return ничего, но в файл выводиться массив
void output_to_file(const float * arr, unsigned n, std::string &FileName);
}
