/* LEVEL_01:0x03A4E8 -- placement copy of LEVEL_02_03EF98.c. */
extern int D_0020B498[];

extern void func_03A370(char *a, int b, int c, unsigned d);
extern void func_03A470(char *a, int b);

void func_03A4E8(char *p1, int p2, unsigned p3)
{
    int v = *(int *)(p1 + (p2 << 2) + 0x5B8);

    if (v == 0) {
        func_03A370(p1, p2, D_0020B498[p2], p3);
    } else if (*(int *)(*(int *)(*(int *)(v + 0x40) + 4)
                        + *(unsigned char *)(v + 0x44) * 0x34 + 0x20) != p3) {
        func_03A470(p1, p2);
        func_03A370(p1, p2, D_0020B498[p2], p3);
    }
}
