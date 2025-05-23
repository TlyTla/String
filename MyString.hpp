#ifndef _MY_STRING_HPP_
#define _MY_STRING_HPP_
#include <iostream>
#include <cstring>



class MyString
{
public:

	MyString();
	MyString(int size);
	MyString(const char* word);
	MyString(MyString&& word);


	~MyString();

	MyString& operator=(const MyString& word);
	MyString& operator=(MyString&&);
	MyString operator+(const MyString& word);
	MyString& operator+=(const char* word);

	friend bool operator<(const MyString& left, const MyString& right);
	friend bool operator>(const MyString& left, const MyString& right);
	friend bool operator<=(const MyString& left, const MyString& right);
	friend bool operator>=(const MyString& left, const MyString& right);
	friend bool operator==(const MyString& left, const MyString& right);
	friend bool operator!=(const MyString& left, const MyString& right);

	const char* GetStr();

	int Size();
	void Resize(unsigned int obj);
	void Clear();
	bool Empty();
	void Push_back(const char& obj);
	void Print() const;
	

	

private:
	char* str = nullptr;
	unsigned int size{ 0 };
};

#endif	//!_MY_STRING_HPP_