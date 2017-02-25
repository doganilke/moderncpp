#include "rational.h"
#include "iostream"
rational::rational(int n, int d){
    if(n<0 && d <0){
        mNumerator=-n;
        mDenominator=-d;
    }
    else{
        mNumerator=n;
        mDenominator=d;
    }

    mGcd(n,d);
}

void rational::mGcd(int n, int d)
{
    if(n<d){
        int i=n;

        if(d%i==0){
            d=d/i;
            n=n/i;
        }
    }else
    {
        int i=d;
        if(n%i==0){
            d=d/i;
            n=n/i;
        }
    }
    mNumerator=n;
    mDenominator=d;



}

int rational::getNumerator() const
{
    return mNumerator;
}

int rational::getDenominator() const
{
    return mDenominator;
}

void rational::reciprocal()
{
    int temp;
    temp=mNumerator;
    mNumerator=mDenominator;
    mDenominator=temp;
}

rational rational::operator+(const rational &other)
{
    if(other.mDenominator==mDenominator)
        return rational(mNumerator+other.mNumerator,mDenominator);
    else{
        int tempDenominator=other.mDenominator*mDenominator;
        int tempNominator=mNumerator*other.mDenominator+other.mNumerator*mDenominator;
        return rational(tempNominator,tempDenominator);
    }
}

rational rational::operator-(const rational &other)
{
    if(other.mDenominator==mDenominator)
        return rational(mNumerator-other.mNumerator,mDenominator);
    else{
        int tempDenominator=other.mDenominator*mDenominator;
        int tempNominator=mNumerator*other.mDenominator-other.mNumerator*mDenominator;
        return rational(tempNominator,tempDenominator);
    }
}

rational rational::operator *(const rational &other)
{
    return rational(mNumerator*other.mNumerator,mDenominator*other.mDenominator);
}

rational rational::operator /(const rational &other)
{
    return rational(mNumerator*other.mDenominator,mDenominator*other.mNumerator);
}

rational rational::operator++()
{
    mNumerator+=mDenominator;

    return rational(mNumerator,mDenominator);
}

rational rational::operator--()
{
    mNumerator-=mDenominator;
    return rational(mNumerator,mDenominator);
}

void rational::printRationalNumber() const
{
    std::cerr<<mNumerator<<"/"<<mDenominator<<std::endl;
}


