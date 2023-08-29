#include <iostream>

enum month {Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
int main(){
    char month_names[][8*2+1] = {"Январь","Февраль","Март","Апрель","Май","Июнь","Июль","Август",
                                "Сентябрь","Октябрь","Ноябрь","Декабрь",}; //CYRILLIC CHAR NEEDS 2 BYTES!!!
    int num {};
    do{
        std::cout<<"Введите номер месяца: ";
        std::cin >> num;
        if(num<0 || num>12){
            std::cout<<"Неправильный номер!\n";
        }else{
            //std::cout<<month_names[(num-1)]<<"\n";
            //month user_month = static_cast<month>(num);
            switch(static_cast<month>(num-1)){
            //switch(num-1){
                case Jan: std::cout<<month_names[Jan]<<std::endl;
                break;
                case Feb: std::cout<<month_names[Feb]<<std::endl;
                break;
                case Mar: std::cout<<month_names[Mar]<<std::endl;
                break;
                case Apr: std::cout<<month_names[Apr]<<std::endl;
                break;
                case May: std::cout<<month_names[May]<<std::endl;
                break;
                case Jun: std::cout<<month_names[Jun]<<std::endl;
                break;
                case Jul: std::cout<<month_names[Jul]<<std::endl;
                break;
                case Aug: std::cout<<month_names[Aug]<<std::endl;
                break;
                case Sep: std::cout<<month_names[Sep]<<std::endl;
                break;
                case Oct: std::cout<<month_names[Oct]<<std::endl;
                break;
                case Nov: std::cout<<month_names[Nov]<<std::endl;
                break;
                case Dec: std::cout<<month_names[Dec]<<std::endl;
                break;
            }

        }
    }while(num);
    std::cout<<"До свидания"<<std::endl;

    return 0;
}
