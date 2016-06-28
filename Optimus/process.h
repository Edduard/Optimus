#pragma once
ref class process
{
private:
	double durata, volum, temperatura, debit, n, presiune, *DO, *pH, *NNH2, *oxigenDiz;
public:
	process(void);
	~process(void);
	void dataTransfer(double, double, double, double, double, double);
	double getDO(int);
	double getPH(int);
	double getNNH2(int);
	double getOxigenDiz(int);
	void dataProcess(void);
};

