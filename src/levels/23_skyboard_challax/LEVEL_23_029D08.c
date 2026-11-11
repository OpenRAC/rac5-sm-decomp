/* LEVEL_23:0x029D08 -- placement copy of LEVEL_01_02C198.c: opens the sound test menu: resets its state, positions the preview sound and runs the per-slot setup. */
typedef struct {
    char pad0[0x14];
    float f14;
    float f18;
    char pad1C[4];
    char b20;
    char pad21;
    char b22;
} Snd;

typedef struct {
    char pad0[0x30];
    float pos[3];
    char pad3C[0x64];
    float scale;
    char sub[0x58];
    Snd *snd;
    int w100;
    int w104;
    int w108;
} Menu;

typedef struct {
    char pad0[8];
    float v;
    char pad0C[8];
} Row;

typedef struct {
    Row row[2];
} Set;

extern Menu D_001FEE30;
extern Set D_001E04D0[];
extern unsigned char D_001C795C;
extern unsigned char D_001C795D;
extern void *D_001C7960[1];
extern unsigned int D_001C73B8;
extern int D_002026B8;
extern char g_RENDEREFFECT_SWIRLY_Active;

extern int func_023320(int a, int b);
extern void func_0251D8(int a, int b, int c);
extern int func_02A668(Menu *m, int a, int b);
extern void func_0219E0(void *p, int a, int b, int c);
extern void func_02A220(unsigned int a, int b, int c);
extern void func_019338(int a, int b);
extern void SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");

void func_029D08(int a)
{
    Menu *m;
    int n;
    unsigned int i;
    float v;
    float sc;

    n = func_023320(a, -1);
    D_001C795D = 2 < (unsigned int)(n - 1);
    func_0251D8(0x90, 0, 0xFF);
    m = &D_001FEE30;
    D_001C795C = 0;
    m->w108 = 0;
    m->snd = 0;
    if (func_02A668(m, a, n - 1)) {
        func_0219E0(m->sub, m->w100, D_002026B8, n - 1);
        v = D_001E04D0[m->w104].row[D_001C795D].v;
        sc = 1.0f;
        if (v != 0.0f) {
            sc = v;
        }
        m->scale = sc;
        if (D_001C7960[0] != 0) {
            SND_PlayPositionalSound(D_001C7960[0], m->pos, 0.0f, &m->snd, D_001C73B8);
            if (m->snd != 0) {
                m->snd->f14 = 1.0f;
                m->snd->f18 = 1.0f;
                m->snd->b20 = 0;
                m->snd->b22 = 1;
            }
        }
        g_RENDEREFFECT_SWIRLY_Active = 0;
        i = 0;
        do {
            func_02A220(i, n - 1, 0);
            i++;
        } while (i < 16);
    } else {
        func_019338(4, 0);
    }
}
