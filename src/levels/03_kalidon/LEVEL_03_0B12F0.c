/* LEVEL_03:0x0B12F0 -- placement copy of LEVEL_01_0B1570.c: runs func_0B12E0, then stores a byte and a second byte widened to a word in two globals. */
extern unsigned char D_002147D8;
extern unsigned int D_002147D4;
extern unsigned int func_0B12E0(void);

void func_0B12F0(int a, unsigned char b)
{
    func_0B12E0();
    D_002147D8 = a;
    D_002147D4 = b;
}
