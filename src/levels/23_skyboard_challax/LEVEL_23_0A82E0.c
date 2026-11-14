/* LEVEL_23:0x0A82E0 -- placement copy of LEVEL_01_0B1570.c: runs func_0A82D0, then stores a byte and a second byte widened to a word in two globals. */
extern unsigned char D_001CF558;
extern unsigned int D_001CF554;
extern unsigned int func_0A82D0(void);

void func_0A82E0(int a, unsigned char b)
{
    func_0A82D0();
    D_001CF558 = a;
    D_001CF554 = b;
}
