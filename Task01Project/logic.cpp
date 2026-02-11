#include "logic.h"

int get_all_pushups(int day, int pushup) {
	int all_pushups = pushup;

	if (pushup < 1 || day < 1) {
		all_pushups = -1;
	}
	else {
		for (int i = 1; i < day; i++) {
			all_pushups += pushup;
		}
	}

	return all_pushups;
}

string get_pushups_statistic(int day, int pushup) {
	string msg = "";
	int all_pushups = pushup;

	if (pushup < 1 || day < 1) {
		all_pushups = -1;
	}
	else {
		msg += "Day " + to_string(1) + ": " + to_string(all_pushups) + " likes";
		for (int i = 2; i <= day; i++) {
			all_pushups += pushup;
			msg += '\n';
			msg += "Day " + to_string(i) + ": " + to_string(all_pushups) + " likes";
		}
	}
	return msg;
}