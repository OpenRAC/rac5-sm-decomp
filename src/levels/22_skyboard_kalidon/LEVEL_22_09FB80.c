/* LEVEL_22:0x09FB80 -- placement copy of LEVEL_01_0B1570.c: runs func_09FB70, then stores a byte and a second byte widened to a word in two globals. */
extern unsigned char D_0015B4D8;
extern unsigned int D_0015B4D4;
extern unsigned int func_09FB70(void);

void func_09FB80(int a, unsigned char b)
{
    func_09FB70();
    D_0015B4D8 = a;
    D_0015B4D4 = b;
}
