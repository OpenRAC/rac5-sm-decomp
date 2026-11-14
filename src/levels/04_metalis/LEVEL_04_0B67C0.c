/* LEVEL_04:0x0B67C0 -- placement copy of LEVEL_01_0B1570.c: runs func_0B67B0, then stores a byte and a second byte widened to a word in two globals. */
extern unsigned char D_00215618;
extern unsigned int D_00215614;
extern unsigned int func_0B67B0(void);

void func_0B67C0(int a, unsigned char b)
{
    func_0B67B0();
    D_00215618 = a;
    D_00215614 = b;
}
