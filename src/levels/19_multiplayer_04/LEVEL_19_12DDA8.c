extern void *func_0222A0(int a, int b, int c);
extern void *func_12E2A0(int a, int b, int c, int d, float e, float f, int g, int h);

int func_148328(int p1, int p2, int p3, int p4)
{
    void *r;
    void *l;
    int a3;

    r = func_0222A0(2, 1, *(int *)(**(int **)(p1 + 0x58) + 0xF8));
    a3 = p4 + 0x29;
    if (r != 0) {
        a3 = p4 + 0x31;
    }
    l = func_12E2A0(p1, p2, p3, a3, 0.1f, 1.0f, p4 & 0xFFFF, 1);
    if (l != 0) {
        **(int **)((char *)l + 0x58) = **(int **)((char *)p1 + 0x58);
    }
    return l != 0;
}
