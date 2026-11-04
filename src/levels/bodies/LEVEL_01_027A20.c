typedef struct {
    int i00, i04, i08, i0C;
    int i10, i14, i18, i1C;
    char pad[0x48 - 0x20];
    int i48, i4C;
} Ctx;

extern Ctx *D_001F3FAC;
extern int D_001F3FB4;
extern void func_000000(float f);

void func_027A20(float s)
{
    Ctx *p;

    p = D_001F3FAC;
    if (p->i48 < 0)
        p->i48 = p->i1C;
    func_000000((float)D_001F3FAC->i1C / 255.0f * s);

    p = D_001F3FAC;
    if (p->i4C < 0)
        p->i4C = p->i18;
    func_000000((float)D_001F3FAC->i18 / 255.0f * s);

    D_001F3FB4 = 5;
}
