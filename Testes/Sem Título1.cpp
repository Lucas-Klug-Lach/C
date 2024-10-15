#include <stdio.h>

int main(){
	printf '%*s\n' 35  "Tabela ASCII"; 
	printf "%d\n" {32..126}  | \
awk '{printf "%5c = %3d\n", $1, $1}' | sed 'N;N;N;N;s/\n//g'

}
