/* LEVEL_06:0x0321D8 -- placement copy of LEVEL_08_03A098.c: walks two 12-byte slots of a table and forwards each non-empty one to a helper. */

extern void func_032038(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8);

void func_0321D8(int a0, int a1, int a2, char *a3, int *a4, int a5, int a6)
{
    char *s0;
    int s2;
    int s5;
    int off;

    off = a5 * 12 + 0x14;
    s0 = a3 + off;
    s5 = *(int *)(a3 + 0x34);
    s2 = a4[1];
    if (*(unsigned short *)(s0 + 8) != 0) {
        func_032038(a0, *(int *)s0, *(unsigned short *)(s0 + 8), a1, a2, a6, s5, 0, s2);
    }
    if (*(unsigned short *)(s0 + 0xA) != 0) {
        func_032038(1, *(int *)(s0 + 4), *(unsigned short *)(s0 + 0xA), a1, a2, a6, s5, 0, s2);
    }
}
