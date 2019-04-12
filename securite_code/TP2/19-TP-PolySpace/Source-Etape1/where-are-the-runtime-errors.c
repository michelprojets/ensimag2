int where_are_the_run_time_errors(int input) {
	int x,y,k;
	
	k = input / 100;
	x = 2;
	y = k + 5;
	
	while (x < 10) {
		x++;
		y = y + 3;
	}
	
	if ((3*k + 100) > 43) {
		y++;
		if ((x>0 && x<15) && (y>5 && y<35)) {
			x = (10 * x) / (x - y);
		}
	}
	return x;
}
