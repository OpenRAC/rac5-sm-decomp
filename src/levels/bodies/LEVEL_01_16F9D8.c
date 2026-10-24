typedef struct {
    char pad0[0xC];
    float f0C;
    float f10;
} Rec;

typedef struct {
    char pad0[0x45];
    unsigned char b45;
    char pad1[0x54 - 0x46];
    Rec *p54;
} Obj;

extern int func_000000();

void func_16F9D8(Obj *a0)
{
    Rec *p = a0->p54;
    float f;

    a0->b45 = 2;
    f = p->f10;
    p->f0C = f * ((float)func_000000() * 4.6566128730773926e-10f);
}
