#include <stdio.h>
#include <string.h>

//void copy_int(int val,void *buf,int maxbytes){
//	// size_t equals to unsigned
//	// maxbytes - sizeof(val) always equals to unsigned which >= 0
//	if(maxbytes - sizeof(val) >= 0)
//		memcpy(buf,(void *)&val,sizeof(val));
//}

void copy_int_new(int val,void *buf,int maxbytes){
	if( ~(sizeof(val)) >= ~maxbytes){
		memcpy(buf,(void *)&val,sizeof(val));
	}
}

int main(){
	int buf = 0;
	copy_int_new(0xFFFFFFFF,(void *)&buf,3);
	printf("%x\n",buf);
}
