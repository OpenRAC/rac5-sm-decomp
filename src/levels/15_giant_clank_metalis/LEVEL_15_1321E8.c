/* LEVEL_15:0x1321E8 -- initialises the work area: buffers, light setup and slot tables. */
typedef struct { float f0; float f4; float f8; char padC[4]; unsigned w10; float f14; float f18; float f1C; char pad20[4]; unsigned w24; } Light;
typedef struct { char pad0[0xC]; Light *pC; int w10; } Env;
typedef struct {
    char padE8[1];
} Dummy;
typedef struct {
    char pad0[0xE8]; int wE8; char padEC[0xC]; int wF8; char *pFC; char pad100[0x40];
    int w140; float f144; char pad148[0x28]; unsigned *p170; char *p174; char pad178[4];
    char *p17C; int w180; int w184; char *a[2]; char *b[2];
} Work;
extern Work D_002F3D20;
extern struct { Env *env; } D_0015B710;
extern char D_00171590[];
extern void func_131740(void);
extern char *func_0D4FE0(int size, int a, char *file, int line);

void func_1321E8(int n)
{
    int i;
    unsigned *p;
    unsigned *end;
    unsigned v;

    D_002F3D20.wF8 = 0;
    func_131740();
    D_002F3D20.pFC = (char *)&D_002F3D20 + 0x78;
    D_002F3D20.f144 = 0.7853982f;
    D_002F3D20.w140 = 0;
    D_002F3D20.p170 = (unsigned *)func_0D4FE0(0x400, 0, D_00171590, 0x271);
    D_002F3D20.p17C = func_0D4FE0(n << 2, 0, D_00171590, 0x272);
    D_002F3D20.w180 = n;
    if (D_0015B710.env->w10 == 1) {
        D_0015B710.env->pC->w10 = 0xFF8F7861;
        D_0015B710.env->pC->f0 = -0.3665879964828491f;
        D_0015B710.env->pC->f4 = 0.6989539861679077f;
        D_0015B710.env->pC->f8 = 0.6140660047531128f;
    }
    if (D_0015B710.env->w10 == 2) {
        D_0015B710.env->pC->w10 = 0xFF9F7851;
        D_0015B710.env->pC->w24 = 0xFF5F7891;
        D_0015B710.env->pC->f14 = 0.3665879964828491f;
        D_0015B710.env->pC->f18 = -0.6989539861679077f;
        D_0015B710.env->pC->f1C = 0.6140660047531128f;
    }
    v = (unsigned)func_0D4FE0(0x31800, 0, D_00171590, 0x28F);
    D_002F3D20.p174 = (char *)v;
    p = D_002F3D20.p170;
    end = p + 0x100;
    v += 0x1800;
    for (; p != end; p += 2) {
        *p = v;
        v += 0x600;
    }
    D_002F3D20.w184 = 0;
    for (i = 0; i < 2; i++) {
        D_002F3D20.a[i] = func_0D4FE0(D_002F3D20.wE8 * 0x90, 0, D_00171590, 0x2A2);
        D_002F3D20.b[i] = func_0D4FE0(D_002F3D20.wE8 * 0x90, 0, D_00171590, 0x2A3);
    }
}
