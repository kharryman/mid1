//cmps335 exam 1 framework
//Write a unit test to check the validity of the milesToKm function. 
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

double milesToKm(double in_miles);
void UnitTest();
double tolerance;

int main(int argc, char *argv[])
{	
	
	double miles = 1.0;
	tolerance = 0.001;
	if (argc > 1) {
		miles = atof(argv[1]);
	}	
	if (argc > 2) {
		tolerance = atof(argv[2]);
	}
	if (miles < 0.0 && argc >2){		
		UnitTest();
	}
	else if (miles < 0.0){
		cout<<"Usage: ./mid1 'miles' 'tolerance'"<<endl;
		return 0;
	}
	if (argc < 3){	
	cout << miles << " miles = ";
	cout << milesToKm(miles) << " Km" << endl;
	cout << endl;
    }
	return 0;
}

void UnitTest(){
	double miles_array[] = {0.1,0.2	,0.3	,0.4	,0.5	,0.6	,0.7	,0.8	,0.9	,1.0	,1.1	,1.2	,1.3	,1.4	,1.5	,1.6	,1.7	,1.8	,1.9	,2.0	,2.1	,2.2	,2.3	,2.4	,2.5	,2.6	,2.7	,2.8	,2.9	,3.0	,3.1	,3.2	,3.3	,3.4	,3.5	,3.6	,3.7	,3.8	,3.9	,4.0	,4.1	,4.2	,4.3	,4.4	,4.5	,4.6	,4.7	,4.8	,4.9	,5.0	,5.1	,5.2	,5.3	,5.4	,5.5	,5.6	,5.7	,5.8	,5.9	,6.0	,6.1	,6.2	,6.3	,6.4	,6.5	,6.6	,6.7	,6.8	,6.9	,7.0	,7.1	,7.2	,7.3	,7.4	,7.5	,7.6	,7.7	,7.8	,7.9	,8.0	,8.1	,8.2	,8.3	,8.4	,8.5	,8.6	,8.7	,8.8	,8.9	,9.0	,9.1	,9.2	,9.3	,9.4	,9.5	,9.6	,9.7	,9.8	,9.9	,10.0	,10.1	,10.2	,10.3	,10.4	,10.5	,10.6	,10.7	,10.8	,10.9	,11.0	,11.1	,11.2	,11.3	,11.4	,11.5	,11.6	,11.7	,11.8	,11.9	,12.0	,12.1	,12.2	,12.3,12.4,12.5,12.6,12.7,12.8,12.9,13.0,13.1,13.2,13.3,13.4,13.5,13.6,13.7,13.8,13.9,14.0,14.1,14.2,14.3,14.4,14.5,14.6,14.7,14.8,14.9,15.0,15.1,15.2,15.3,15.4,15.5,15.6,15.7,15.8,15.9,16.0,16.1,16.2,16.3,16.4,16.5,16.6,16.7,16.8,16.9,17.0,17.1,17.2,17.3,17.4,17.5,17.6,17.7,17.8,17.9,18.0,18.1,18.2,18.3,18.4,18.5,18.6,18.7,18.8,18.9,19.0,19.1,19.2,19.3,19.4,19.5,19.6,19.7,19.8,19.9,20.0};

	double kilometers_array[] = {0.070595,0.127778,0.193219,0.256047,0.320338,0.377179,0.437968,0.502869,0.566453,0.627338,0.687828,0.750056,0.812044,0.872742,0.939051,0.999317,1.057795,1.122426,1.184569,1.245477,1.306479,1.370552,1.431963,1.500516,1.562474,1.622408,1.679902,1.747587,1.808442,1.868826,1.931736,1.993311,2.058741,2.114956,2.177221,2.244804,2.305723,2.366640,2.426989,2.489355,2.549020,2.617720,2.680177,2.739693,2.796955,2.863584,2.921229,2.984832,3.053955,3.111606,3.173981,3.231968,3.301554,3.363203,3.417607,3.487014,3.546460,3.606221,3.671176,3.729340,3.797348,3.853076,3.920678,3.981979,4.041785,4.109515,4.166262,4.234851,4.291360,4.356319,4.415136,4.479174,4.540696,4.599834,4.661250,4.727898,4.791527,4.848451,4.916565,4.977180,5.039618,5.097969,5.164436,5.224322,5.282185,5.350919,5.408075,5.473248,5.539605,5.599579,5.660778,5.723007,5.786572,5.843236,5.904629,5.965863,6.028120,6.094124,6.151809,6.218438,6.277264,6.341629,6.400159,6.468370,6.529736,6.587545,6.650267,6.713125,6.775721,6.844419,6.905757,6.968653,7.023566,7.089232,7.149879,7.210517,7.272780,7.338446,7.402120,7.458603,7.522106,7.584842,7.651417,7.706348,7.773612,7.829443,7.893471,7.960854,8.020551,8.080128,8.142003,8.208389,8.270194,8.328461,8.390922,8.451956,8.515895,8.578941,8.640696,8.705094,8.764701,8.825657,8.890815,8.953197,9.017682,9.081349,9.142233,9.196844,9.264040,9.326461,9.385418,9.453980,9.507000,9.570395,9.631752,9.699898,9.756987,9.820235,9.883626,9.948276,10.008963,10.072093,10.130992,10.191348,10.260607,10.319830,10.379083,10.440144,10.510276,10.569147,10.632470,10.690071,10.757761,10.814104,10.881951,10.941990,10.999862,11.066456,11.128969,11.191900,11.248778,11.318111,11.377467,11.435228,11.495819,11.564395,11.628164,11.683708,11.753395,11.808419,11.876475,11.934712,12.000728,12.055547,12.122003,12.185142,12.247047,12.310618,12.372681,12.432581};
			
	double calculated_kilometers;
	int bad_element_count = 0;
	
	cout<<"./mid1 -1 .007"<<endl<<endl;
	cout<<"Unit test of milesToKm() function..."<<endl;
	cout<<"Tolerance: "<<tolerance<<endl<<endl;
	
	cout<<left<<setw(10)<<"Miles"<<setw(10)<<"Table"<<setw(10)<<"Function"<<endl;
	cout<<setw(10)<<"-----"<<setw(10)<<"-----"<<setw(10)<<"--------"<<endl;
		
	for (int i=0;i<10;i++){
		calculated_kilometers = milesToKm(miles_array[i]);
		cout<<left<<setw(10)<<i+1<<setw(10)<<miles_array[i]<<setw(10)<<calculated_kilometers;		
		if (calculated_kilometers < (kilometers_array[i] - tolerance) || calculated_kilometers > (kilometers_array[i] + tolerance)){
			cout<<right<<setw(20)<<"<--- bad value";
			bad_element_count++;
		}		
		cout<<endl;
	}
	cout<<"..."<<endl<<"..."<<endl<<"..."<<endl<<"bad element count: "<<bad_element_count<<endl;
	cout<<"unit test complete"<<endl;
}

double milesToKm(double miles)
{
	return (miles * 0.62137);
}
