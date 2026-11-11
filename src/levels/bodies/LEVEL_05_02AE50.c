/* LEVEL_05:0x02AE50 -- placement copy of LEVEL_01_02C198.c: opens the sound test menu: resets its state, positions the preview sound and runs the per-slot setup. */
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

extern Menu D_0021D6B0;
extern Set D_001FC250[];
extern unsigned char D_001E38DC;
extern unsigned char D_001E38DD;
extern void *D_001E38E0[1];
extern unsigned int D_001E3338;
extern int D_00220F38;
extern char g_RENDEREFFECT_SWIRLY_Active;

extern int func_024270(int a, int b);
extern void func_0261C0(int a, int b, int c);
extern int func_02B7B0(Menu *m, int a, int b);
extern void func_0227D0(void *p, int a, int b, int c);
extern void func_02B368(unsigned int a, int b, int c);
extern void func_019DC0(int a, int b);
extern void SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");

void func_02AE50(int a)
{
    Menu *m;
    int n;
    unsigned int i;
    float v;
    float sc;

    n = func_024270(a, -1);
    D_001E38DD = 2 < (unsigned int)(n - 1);
    func_0261C0(0x90, 0, 0xFF);
    m = &D_0021D6B0;
    D_001E38DC = 0;
    m->w108 = 0;
    m->snd = 0;
    if (func_02B7B0(m, a, n - 1)) {
        func_0227D0(m->sub, m->w100, D_00220F38, n - 1);
        v = D_001FC250[m->w104].row[D_001E38DD].v;
        sc = 1.0f;
        if (v != 0.0f) {
            sc = v;
        }
        m->scale = sc;
        if (D_001E38E0[0] != 0) {
            SND_PlayPositionalSound(D_001E38E0[0], m->pos, 0.0f, &m->snd, D_001E3338);
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
            func_02B368(i, n - 1, 0);
            i++;
        } while (i < 16);
    } else {
        func_019DC0(4, 0);
    }
}
