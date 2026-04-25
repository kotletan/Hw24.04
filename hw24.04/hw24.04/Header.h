#pragma once
//Створити структуру Дріб
//Поля структури Чисельник та Знаменник
//Зробити ії у header файлі
//Написати функції (також у header файлі):
//1) Створення об'єкта структури Дріб
//2) Вивод інформації про об'єкт структури Дріб
//В main протестувати роботу функції
//Зробити репозіторій та запушити зроблений код. Мені відправити посилання на Ваш git репозіторій
struct Fraction
{
    int num;
    int denom;
};
Fraction createFraction()
{
    Fraction p;
    cin>>p.num;
    cin>>p.denom;
    return p;
}
void showFraction(Fraction p)
{
    cout<<"Numerator: "<<p.num<<"Denominator: "<<p.denom<<endl;
}
