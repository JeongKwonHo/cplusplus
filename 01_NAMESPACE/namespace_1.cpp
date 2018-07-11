#include <stdio.h>

namespace Audio
{
	void init()
	{
		printf("Audio init\n");
	}
}

namespace Video
{
	void init()
	{
		printf("Video init\n");
	}
}

//global namespace 
void init()
{
	printf("System init\n");
}

int main()
{
	init(); //global

	Audio::init();

	Video::init();
	
	return 0;
}

