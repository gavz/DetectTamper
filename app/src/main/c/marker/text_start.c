

const void  *text_start(void);

const unsigned char rodata_hash[32] = {	0x2a, 0xbd, 0xa6, 0xf3, 0xec, 0x97, 0x7f, 0x9b, 0xf6, 0x94, 0x9a, 0xfc, 0x83, 0x68, 0x27, 0xcb, 0xa0, 0xa0, 0x9f, 0x6b, 0x6f, 0xde, 0x52, 0xcd, 0xe2, 0xcd, 0xff, 0x31, 0x80, 0xa2, 0xd4, 0xc3};

const unsigned char rodata_start[]=
	{ 'm','a','r','k','e','r','s','t','a','r','t' };

__attribute__((visibility("default")))
const void* text_start(){
    return (void *)text_start;
}