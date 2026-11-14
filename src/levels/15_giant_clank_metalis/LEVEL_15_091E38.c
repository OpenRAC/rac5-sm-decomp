/* LEVEL_15:0x091E38 -- placement copy of LEVEL_01_0B1570.c: runs func_091E28, then stores a byte and a second byte widened to a word in two globals. */
extern unsigned char D_00150DD8;
extern unsigned int D_00150DD4;
extern unsigned int func_091E28(void);

void func_091E38(int a, unsigned char b)
{
    func_091E28();
    D_00150DD8 = a;
    D_00150DD4 = b;
}
