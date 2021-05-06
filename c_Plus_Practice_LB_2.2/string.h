#pragma once
#include <iostream>
#include <string>
using namespace std;

class String
{
protected:
	string str;

public:
	String(string str) { this->str = str; }
	virtual void lenString();
	~String() {};
};

class Letters : public String
{
public:
	Letters(string str) : String(str){}
	void  lenString() override;
	~Letters() {};
};

class Number : public String
{
public:
	Number(string str) : String(str) {}
	void  lenString() override;
	~Number() {};

};