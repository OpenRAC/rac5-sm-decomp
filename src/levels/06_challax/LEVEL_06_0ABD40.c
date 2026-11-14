/* LEVEL_06:0x0ABD40 -- placement copy of LEVEL_01_0B1570.c: runs func_0ABD30, then stores a byte and a second byte widened to a word in two globals. */
extern unsigned char D_001EB058;
extern unsigned int D_001EB054;
extern unsigned int func_0ABD30(void);

void func_0ABD40(int a, unsigned char b)
{
    func_0ABD30();
    D_001EB058 = a;
    D_001EB054 = b;
}
