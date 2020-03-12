

#ifndef VOLUME_H_
#define VOLUME_H_


class Cylinder
{
private:
	double radius;
	double height;
	double result;

public:
	Cylinder();

	Cylinder(double radius, double height);


	void getVolume();
	void printVolume();


};


#endif /* VOLUME_H_ */
