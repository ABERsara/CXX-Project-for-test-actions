#pragma once
class rectangle {
private:
	double length;
	double width;
public:
	rectangle();
	rectangle(double len, double wid);
	rectangle(const rectangle& r);
	double getLength();
	double getWidth();
	void setLength(double len);
	void setWidth(double wid);
	double Area() const;
	double perimeter();
	rectangle operator +=(double num);
	void operator +=(const rectangle& r);
	rectangle operator *(double num);
	bool operator ==(const rectangle& r);
	bool operator !=(const rectangle& r);
	void operator ++();


};