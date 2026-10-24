typedef struct {
    char pad_00[0x10C];
    float f_10C;
    float f_110;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_001D9048;

void func_001210(float a, float b)
{
    D_001D9048.p->f_10C = a;
    D_001D9048.p->f_110 = b;
}
