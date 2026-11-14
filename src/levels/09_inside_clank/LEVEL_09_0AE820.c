/* LEVEL_09:0x0AE820 -- placement copy of LEVEL_01_0B1570.c: runs func_0AE810, then stores a byte and a second byte widened to a word in two globals. */
extern unsigned char D_001E5F58;
extern unsigned int D_001E5F54;
extern unsigned int func_0AE810(void);

void func_0AE820(int a, unsigned char b)
{
    func_0AE810();
    D_001E5F58 = a;
    D_001E5F54 = b;
}
