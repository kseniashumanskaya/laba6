#include "fraction.h"
#include <cassert>

int __Gcd(int x, int y) {
    int remainder, dividend, divider;
    int modul_x = x;
    int modul_y = y;
    if (x < 0)
        modul_x = -x;
    if (y < 0)
        modul_y = -y;
    remainder = modul_y;
    dividend = modul_x;
    divider = modul_y;
    while (dividend % divider != 0) {
        remainder = dividend % divider;
        dividend = divider;
        divider = remainder;
    }
    return remainder;
}

int Fraction::GetNumerator(){
    return numerator_;
}

int Fraction::GetDenumerator() {
    return denumerator_;
}
void Fraction::FractionRediction()
{
    int gcd = __Gcd(numerator_, denumerator_);
    numerator_ /= gcd;
    denumerator_ /= gcd;
}
void Fraction::WriteFraction()
{
    std::cout << numerator_ << "/" << denumerator_;
}
Fraction Fraction::operator+(const Fraction& second)
{
    int result_denumerator = (*this).denumerator_ * second.denumerator_;
    int result_numerator = (*this).denumerator_ * second.numerator_ + second.denumerator_ * (*this).numerator_;
    Fraction result(result_numerator, result_denumerator);
    result.FractionRediction();
    return result;
}
Fraction Fraction::operator*(const Fraction& second)
{
    int result_denumerator = (*this).denumerator_ * second.denumerator_;
    int result_numerator = second.numerator_ * (*this).numerator_;
    Fraction result(result_numerator, result_denumerator);
    result.FractionRediction();
    return result;
}
Fraction Fraction::operator/(const Fraction& second)
{
    Fraction new_second(second.denumerator_, second.numerator_);
    return (*this) * new_second;
}
;
Fraction::Fraction(int numerator, int denumerator) : numerator_(numerator), denumerator_(denumerator) {
    if (denumerator_ < 0) {
        numerator_ = -numerator_;
        denumerator_ = -denumerator_;
    }
    if (denumerator == 0) {
        std::cout << "denumerator cannot be 0" << std::endl;
        assert(denumerator != 0);
    }
    (*this).FractionRediction();
};
Fraction::Fraction(const Fraction& fraction) : numerator_(fraction.numerator_), denumerator_(fraction.denumerator_) {
    (*this).FractionRediction();
};






