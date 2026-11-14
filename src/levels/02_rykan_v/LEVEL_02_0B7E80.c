/* LEVEL_02:0x0B7E80 -- placement copy of LEVEL_01_0B1570.c: runs func_0B7E70, then stores a byte and a second byte widened to a word in two globals. */
extern unsigned char D_00211118;
extern unsigned int D_00211114;
extern unsigned int func_0B7E70(void);

void func_0B7E80(int a, unsigned char b)
{
    func_0B7E70();
    D_00211118 = a;
    D_00211114 = b;
}
