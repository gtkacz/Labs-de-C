

int process_pixel(int level, int limiarize) {

	int new_level;

	if (limiarize < level){
	new_level = 255;
	}

	else{
	new_level = 0;
	}

	return new_level;
}
