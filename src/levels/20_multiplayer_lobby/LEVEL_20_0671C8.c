typedef struct {
    char pad[0x108];
    int f108;
    char pad2[0x28];
    float f134;
    float f138;
} H;

extern struct { H *p; } D_0010696C;

extern void func_067008(void *a0);
extern int func_0672F8(void *a0);
extern int func_067098(float a, float b);

int func_0671C8(void *a0, void *a1)
{
    int r;

    func_067008(a1);
    if (func_0672F8(a0))
        r = D_0010696C.p->f108 | func_067098(D_0010696C.p->f134,
                                              D_0010696C.p->f138);
    else
        r = 0;
    return r;
}
