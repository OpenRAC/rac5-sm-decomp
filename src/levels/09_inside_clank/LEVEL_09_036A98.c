extern int D_001F5098[];

extern void func_036920(int a, int b, int c, int d);
extern void func_036A20(int a, int b);

void func_03EF98(int p1, int p2, int p3)
{
    int v = *(int *)(p1 + (p2 << 2) + 0x5B8);

    if (v == 0) {
        func_036920(p1, p2, D_001F5098[p2], p3);
    } else if (*(int *)(*(int *)(*(int *)(v + 0x40) + 4)
                        + *(unsigned char *)(v + 0x44) * 0x34 + 0x20) != p3) {
        func_036A20(p1, p2);
        func_036920(p1, p2, D_001F5098[p2], p3);
    }
}
