extern int D_001B48B8;

extern void func_0F1988(void *a, int b, int c, int d, float e);

void f(int p0, int p1, int p2)
{
    int *v1 = (int *)D_001B48B8;
    char buf[8];

    func_0F1988(p2 ? (void *)p2 : (void *)buf, p0, v1[2], p1,
                *(float *)(p1 + 0xC));
}
