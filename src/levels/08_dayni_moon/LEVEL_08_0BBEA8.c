/* LEVEL_08:0x0BBEA8 -- placement copy of LEVEL_01_0B1570.c: runs func_0BBE98, then stores a byte and a second byte widened to a word in two globals. */
extern unsigned char D_00245018;
extern unsigned int D_00245014;
extern unsigned int func_0BBE98(void);

void func_0BBEA8(int a, unsigned char b)
{
    func_0BBE98();
    D_00245018 = a;
    D_00245014 = b;
}
