#pragma once
ref class Kettle
{
public:
	int power;
	float volume;
	int temperature;
	int time;
	void timeIs() {
		time = (float)(volume / power * 10000);
	}
	
};

