typedef struct {
    char pad[0x10C];
    float f10C;
    float f110;
} S;

typedef struct {
    S *p;
} Holder;

extern Holder D_0014E5C8;

void func_000F80(float f12, float f13)
{
    D_0014E5C8.p->f10C = f12;
    D_0014E5C8.p->f110 = f13;
}
