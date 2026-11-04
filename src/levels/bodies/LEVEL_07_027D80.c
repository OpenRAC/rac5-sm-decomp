typedef struct {
    int i00, i04, i08, i0C;
    int i10, i14, i18, i1C;
    char pad[0x48 - 0x20];
    int i48, i4C;
} Ctx;

extern Ctx *D_002082AC;
extern int D_002082B4;
extern void func_000000(float f);

void func_027D80(float s)
{
    Ctx *p;

    p = D_002082AC;
    if (p->i48 < 0)
        p->i48 = p->i1C;
    func_000000((float)D_002082AC->i1C / 255.0f * s);

    p = D_002082AC;
    if (p->i4C < 0)
        p->i4C = p->i18;
    func_000000((float)D_002082AC->i18 / 255.0f * s);

    D_002082B4 = 5;
}
