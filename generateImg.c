#include "generateImg.h"

void generateImg(int32_t incolor, FILE *fp)
{
	static unsigned char color[3];

	switch(incolor)
	{
		case 1:				//White
			color[0] = 255;  	/* red */
			color[1] = 255; 	/* green */
			color[2] = 255;  	/* blue */
			break;
		case 2:				//Yellow
			color[0] = 255;  	/* red */
			color[1] = 255; 	/* green */
			color[2] = 0;  		/* blue */
			break;
		case 3:				//Cyan
			color[0] = 0;	  	/* red */
			color[1] = 255; 	/* green */
			color[2] = 255;  	/* blue */
			break;
		case 4:				//Green
			color[0] = 0;	  	/* red */
			color[1] = 255; 	/* green */
			color[2] = 1;  		/* blue */
			break;
		case 5:				//Magenta
			color[0] = 255;	  	/* red */
			color[1] = 0; 		/* green */
			color[2] = 254;  	/* blue */
			break;
		case 6:				//Red
			color[0] = 254;	  	/* red */
			color[1] = 0; 		/* green */
			color[2] = 0; 	 	/* blue */
			break;
		case 7:				//Blue
			color[0] = 0;	  	/* red */
			color[1] = 0; 		/* green */
			color[2] = 255; 	/* blue */
			break;
		case 8:				//Gray
			color[0] = 75;	  	/* red */
			color[1] = 75; 		/* green */
			color[2] = 75; 		/* blue */
			break;
		default:			//Garbage
			color[0] = 100;	  	/* red */
			color[1] = 175; 	/* green */
			color[2] = 100; 	/* blue */
			break;
			
	}
	//FILE *fp = fopen("out.ppm", "wb"); /* b - binary mode */
	//(void) fprintf(fp, "P6\n%d %d\n255\n", dimx, dimy);

	(void) fwrite(color, 1, 3, fp);

	//(void) fclose(fp);
}
