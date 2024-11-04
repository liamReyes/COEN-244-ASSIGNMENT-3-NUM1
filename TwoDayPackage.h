#ifndef TWODAY_H_
#define TWODAY_H_

#include "Package.h"


class TwoDayPackage : public Package {

public:
	TwoDayPackage(string& n, string& a, string& c, string& s, string& z, double& w, double& cost
		, string& N, string& A, string& C, string& S, string& Z,
		 double& fee)
		:Package(n, a, c, s, z, w, cost,N,A,C,S,Z), flatFee(fee) {};

	~TwoDayPackage() {};


	double calculateCost() final override {
		return flatFee + weight * CostPerOunce;
	}

private:
	double flatFee;





};



#endif // !TWODAY_H_

