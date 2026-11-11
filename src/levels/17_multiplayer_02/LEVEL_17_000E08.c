typedef struct {
    char pad[0x10C];
    float f10C;
    float f110;
} S;

typedef struct {
    S *p;
} Holder;

extern Holder D_0018E2CC;

void func_000E08(float f12, float f13)
{
    D_0018E2CC.p->f10C = f12;
    D_0018E2CC.p->f110 = f13;
}
