#ifndef VECTORCLASS_H
#define VECTORCLASS_H

class vectorClass{
	private:
	//Variables
	double dMagnitude;
	double dAngle;
	double dXComponent;
	double dYComponent;
	
	public:
	//Setter Methods
	void setMagnitude(double m)		{dMagnitude = m;}
	void setAngle(double a)			{dAngle = a;}
	void setXComponent(double x)	{dXComponent = x;}
	void setYComponent(double y)	{dYComponent = y;}
	void setComponents();
	void setMagnAndDir();
	
	//Getters Methods
	double getAngle(){return dAngle;}
	double getMagnitude(){return dMagnitude;}
	double getXComponent(){return dXComponent;}
	double getYComponent(){return dYComponent;}
	
	//Constructores
	vectorClass(double, double);
	vectorClass();
};

#endif