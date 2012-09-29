#include<stdio.h>

int main(int argc, char** argv){
	if (argc < 3){
		printf("Usage: timeadd <hh:mm:ss> (+|-)<sec>\n");
		return 1;
	}
	char* time_txt = argv[1];
	char* diff_txt = argv[2];
	int hh, mm, ss;

	sscanf(time_txt, "%d%*c%d%*c%d", &hh, &mm, &ss);

	int diff = atoi(diff_txt);
	int old_time = 3600 * hh + 60 * mm + ss;
	int new_time = old_time + diff;
	int is_negative;

	if (new_time < 0){
		new_time = -new_time;
		is_negative = 1;
	} else {
		is_negative = 0;
	}

	int new_hh = new_time / 3600;
	int new_mm = (new_time % 3600) / 60;
	int new_ss = (new_time % 60);

	if (is_negative) {
		printf("-");
	}
	printf("%02d:%02d:%02d\n", new_hh, new_mm, new_ss);
}