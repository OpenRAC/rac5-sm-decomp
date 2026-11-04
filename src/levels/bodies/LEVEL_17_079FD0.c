typedef struct {
    char pad[0x108];
    int f108;
    char pad2[0x28];
    float f134;
    float f138;
} H;

extern struct { H *p; } D_0019788C;

extern void func_079E10(void *a0);
extern int func_07A100(void *a0);
extern int func_079EA0(float a, float b);

int func_079FD0(void *a0, void *a1)
{
    int r;

    func_079E10(a1);
    if (func_07A100(a0))
        r = D_0019788C.p->f108 | func_079EA0(D_0019788C.p->f134,
                                              D_0019788C.p->f138);
    else
        r = 0;
    return r;
}
