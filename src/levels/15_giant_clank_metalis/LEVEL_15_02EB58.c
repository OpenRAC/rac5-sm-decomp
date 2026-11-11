/* LEVEL_15:0x02EB58 -- placement copy of LEVEL_01_03A4E8.c: placement copy of LEVEL_02_03EF98.c. */
extern int D_0015FC18[];

extern void func_02E9E0(char *a, int b, int c, unsigned d);
extern void func_02EAE0(char *a, int b);

void func_02EB58(char *p1, int p2, unsigned p3)
{
    int v = *(int *)(p1 + (p2 << 2) + 0x5B8);

    if (v == 0) {
        func_02E9E0(p1, p2, D_0015FC18[p2], p3);
    } else if (*(int *)(*(int *)(*(int *)(v + 0x40) + 4)
                        + *(unsigned char *)(v + 0x44) * 0x34 + 0x20) != p3) {
        func_02EAE0(p1, p2);
        func_02E9E0(p1, p2, D_0015FC18[p2], p3);
    }
}
