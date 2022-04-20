#include <iostream>

using namespace std;

void RemoveDups(char* str) {
	size_t j = 1;
	size_t len = strlen(str);
	char prev = str[0];

	for (size_t i = 1; i < len; i++){
		if (str[i] == prev){
			continue;
		}
		prev = str[i];
		str[j] = prev;
		j++;
	}

	str[j] = '\0';
}

int main() {
	char data[] = "AAA BBB AAA";

	RemoveDups(data);
	printf("%s\n", data); // "A B A"

	return 0;
}