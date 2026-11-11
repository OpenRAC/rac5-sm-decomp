typedef struct {
    char pad[0x108];
    int f108;
    char pad2[0x28];
    float f134;
    float f138;
} H;

extern struct { H *p; } D_001A428C;

extern void func_079398(void *a0);
extern int func_079688(void *a0);
extern int func_079428(float a, float b);

int func_079558(void *a0, void *a1)
{
    int r;

    func_079398(a1);
    if (func_079688(a0))
        r = D_001A428C.p->f108 | func_079428(D_001A428C.p->f134,
                                              D_001A428C.p->f138);
    else
        r = 0;
    return r;
}
