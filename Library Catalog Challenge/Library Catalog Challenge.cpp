// Library Catalog Challenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Library
{
    const std::string sTitle{};
    const std::string sAuthor{};
    const std::string sPublisher{};
    const std::string sSubject{};
    const std::string sOCLC{};

    const long lISBN{};
    const double  dDecimal{};
    const int iPublished{};
    const int iAcquired{};
    const int iStock{};
};

int main()
{
    Library firstBook { "Name", "Author", "Publisher", "Subject", "OCLC", 1243, 24.5f, 23,22,1 };
    std::cout << "Name: " << firstBook.sTitle << std::endl;
    std::cout << "Author: " << firstBook.sAuthor << std::endl;
    std::cout << "Publisher: " << firstBook.sPublisher << std::endl;
    std::cout << "Subject: " << firstBook.sSubject << std::endl;
    std::cout << "OCLC: " << firstBook.sOCLC << std::endl;
    std::cout << "ISBN: " << firstBook.lISBN << std::endl;
    std::cout << "Published: " << firstBook.iPublished << std::endl;
    std::cout << "Acquired: " << firstBook.iAcquired << std::endl;
    std::cout << "Stock: " << firstBook.iStock << std::endl;
    
}

