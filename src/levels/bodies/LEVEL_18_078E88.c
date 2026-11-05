typedef struct {
    char pad[0x108];
    int f108;
    char pad2[0x28];
    float f134;
    float f138;
} H;

extern struct { H *p; } D_001A570C;

extern int func_079008(int value);
extern int func_078DA8(float a, float b);

int func_078E88(int value)
{
    int r;

    if (func_079008(value))
        r = D_001A570C.p->f108 | func_078DA8(D_001A570C.p->f134,
                                              D_001A570C.p->f138);
    else
        r = 0;
    return r;
}
