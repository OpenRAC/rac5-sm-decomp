/* LEVEL_10:0x0B2688 -- placement copy of LEVEL_01_0B1570.c: runs func_0B2678, then stores a byte and a second byte widened to a word in two globals. */
extern unsigned char D_00205158;
extern unsigned int D_00205154;
extern unsigned int func_0B2678(void);

void func_0B2688(int a, unsigned char b)
{
    func_0B2678();
    D_00205158 = a;
    D_00205154 = b;
}
