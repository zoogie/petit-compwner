typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

#include "payload.h"

int main(void) {    

	u8 *payload_dest=(u8*)0x02200000;   
	//int size=0x1800;
	for(int i=0; i < payload_dat_size; i++){
		payload_dest[i] = payload_dat[i]; //warnings during complile because we memcpy past the array's boundry. this is ok since it's all allocated wram and the payload doesn't care about the extra junk at the end.
	}
	
	//*(u16*)0x400006C=0;  //MASTER_BRIGHT SUB & TOP
	//*(u16*)0x400106C=0;  //""
	
	asm("ldr pc,=0x02200000");
	
    return 0;
	
}