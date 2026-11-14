/* LEVEL_24:0x0AADE8 -- placement copy of LEVEL_01_0B1570.c: runs func_0AADD8, then stores a byte and a second byte widened to a word in two globals. */
extern unsigned char D_001CCDD8;
extern unsigned int D_001CCDD4;
extern unsigned int func_0AADD8(void);

void func_0AADE8(int a, unsigned char b)
{
    func_0AADD8();
    D_001CCDD8 = a;
    D_001CCDD4 = b;
}
