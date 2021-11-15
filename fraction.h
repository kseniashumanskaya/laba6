#pragma once
#include <iostream>

int __Gcd(int x, int y);

class Fraction
{
public:
    Fraction(int numerator, int denumerator);
    Fraction(const Fraction& fraction);
    Fraction() = delete;
    int GetNumerator();
    int GetDenumerator();
    void FractionRediction();
    void WriteFraction();

public:
    Fraction operator+ (const Fraction& second);
    Fraction operator* (const Fraction& second);
    Fraction operator/ (const Fraction& second);
private:
    int numerator_;
    int denumerator_;
};
