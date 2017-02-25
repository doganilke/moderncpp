#ifndef RATIONAL
#define RATIONAL
#include "fstream"
class rational{
public:
    rational():mNumerator(0),mDenominator(1){}
    rational(int n):mNumerator(n),mDenominator(1){}
    rational(int n,int d);
    int getNumerator()const;
    int getDenominator()const;
    void reciprocal();
    rational operator+(const rational& other);
    rational operator-(const rational& other);
    rational operator *(const rational& other);
    rational operator /(const rational& other);
    rational operator++();
    rational operator--();
    void printRationalNumber()const;

    friend std::ostream& operator<<(std::ostream& os,const rational& a)
    {
     os<<a.getNumerator()<<"/"<<a.getDenominator();
     return os;
    }
    friend std::istream& operator>>(std::istream& is, rational& a){
        is>>a.mNumerator>>a.mDenominator;
        return is;
    }

private:

    void mGcd(int n,int d);
    int mNumerator;
    int mDenominator;

};

#endif // RATIONAL

