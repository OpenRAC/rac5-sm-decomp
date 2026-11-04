typedef struct {
    int i00, i04, i08, i0C;
    int i10, i14, i18, i1C;
    char pad[0x48 - 0x20];
    int i48, i4C;
} Ctx;

extern Ctx *D_001A2C34;
extern int D_001A2C60;
extern void func_000000(float f);

void func_0252E8(float s)
{
    Ctx *p;

    p = D_001A2C34;
    if (p->i48 < 0)
        p->i48 = p->i1C;
    func_000000((float)D_001A2C34->i1C / 255.0f * s);

    p = D_001A2C34;
    if (p->i4C < 0)
        p->i4C = p->i18;
    func_000000((float)D_001A2C34->i18 / 255.0f * s);

    D_001A2C60 = 5;
}
