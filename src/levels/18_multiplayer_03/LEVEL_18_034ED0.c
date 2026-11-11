extern int D_001C1998[];

extern void func_034D58(int a, int b, int c, int d);
extern void func_034E58(int a, int b);

void func_03EF98(int p1, int p2, int p3)
{
    int v = *(int *)(p1 + (p2 << 2) + 0x5B8);

    if (v == 0) {
        func_034D58(p1, p2, D_001C1998[p2], p3);
    } else if (*(int *)(*(int *)(*(int *)(v + 0x40) + 4)
                        + *(unsigned char *)(v + 0x44) * 0x34 + 0x20) != p3) {
        func_034E58(p1, p2);
        func_034D58(p1, p2, D_001C1998[p2], p3);
    }
}
