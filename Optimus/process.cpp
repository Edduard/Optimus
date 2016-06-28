#include "process.h"


process::process(void)
{
	DO = new double[16];
	pH = new double[16];
	NNH2 = new double[16];
	oxigenDiz = new double[16];
}
process::~process(void)
{
	delete[] DO;
	delete[] pH;
	delete[] NNH2;
	delete[] oxigenDiz;
}
void process::dataTransfer(double durata, double volum, double temperatura, double debit, double n, double presiune)
{
	this->durata = durata;
	this->volum = volum;
	this->temperatura = temperatura;
	this->debit = debit;
	this->n = n;
	this->presiune = presiune;
}
double process::getDO(int i)
{
	return this->DO[i];
}
double process::getPH(int i)
{
	return this->pH[i];
}
double process::getNNH2(int i)
{
	return this->NNH2[i];
}
double process::getOxigenDiz(int i)
{
	return this->oxigenDiz[i];
}
void process::dataProcess()
{
	//
	// Insert the optimization process here
	//

	int i;
	for (i = 0; i < this->durata; i++)
	{
		this->NNH2[i] = i*(((this->durata / (-9.302)) + (this->debit / 11.11) + (this->n / (-56.49))) / (this->volum*this->volum*(this->presiune * (3.544)))) + (((this->durata / (4.225)) + (this->debit / 22.75) + (this->n / (-10.72))) / (((this->presiune*this->presiune))*(this->volum / (-401.65))));
		this->DO[i] = ((-0.583)*this->durata + 9.533);
		this->pH[i] = ((-0.583)*this->durata + 9.533);
		this->oxigenDiz[i] = ((-0.583)*this->durata + 9.533);
	}

	
	//this->DO[0]=0.24;
	//this->DO[1]=0.7;
	//this->DO[2]=0.94;
	//this->DO[3]=1.7;
	//this->DO[4]=2.45;
	

	//this->pH[0] = 7.33;
	//this->pH[1] = 7.3;
	//this->pH[2] = 7.28;
	//this->pH[3] = 7.32;
	//this->pH[4] = 7.28;

	
	//this->NNH2[0]=126;
	//this->NNH2[1]=126;
	//this->NNH2[2]=126;
	//this->NNH2[3]=126;
	//this->NNH2[4]=117.6;
	
	//this->oxigenDiz[0] = 100;
	//this->oxigenDiz[1] = 87.16;
	//this->oxigenDiz[2] = 2.69;
	//this->oxigenDiz[3] = 0.15;
	//this->oxigenDiz[4] = 0;

}