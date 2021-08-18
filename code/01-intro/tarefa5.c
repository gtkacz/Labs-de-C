

int process_pixel(int level, int contrast) {

	int new_level;

	if (level * contrast<255){
	new_level = level * contrast;
	}

	else{
		new_level = 255;
	}

	return new_level;
}