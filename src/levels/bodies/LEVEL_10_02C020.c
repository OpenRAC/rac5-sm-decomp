/* LEVEL_10:0x02C020 -- placement copy of LEVEL_01_02C198.c: opens the sound test menu: resets its state, positions the preview sound and runs the per-slot setup. */
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

extern Menu D_0023ADB0;
extern Set D_002162D0[];
extern unsigned char D_001FD55C;
extern unsigned char D_001FD55D;
extern void *D_001FD560[1];
extern unsigned int D_001FCFB8;
extern int D_0023E638;
extern char g_RENDEREFFECT_SWIRLY_Active;

extern int func_024C40(int a, int b);
extern void func_026D60(int a, int b, int c);
extern int func_02C980(Menu *m, int a, int b);
extern void func_023038(void *p, int a, int b, int c);
extern void func_02C538(unsigned int a, int b, int c);
extern void func_019EA8(int a, int b);
extern void SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");

void func_02C020(int a)
{
    Menu *m;
    int n;
    unsigned int i;
    float v;
    float sc;

    n = func_024C40(a, -1);
    D_001FD55D = 2 < (unsigned int)(n - 1);
    func_026D60(0x90, 0, 0xFF);
    m = &D_0023ADB0;
    D_001FD55C = 0;
    m->w108 = 0;
    m->snd = 0;
    if (func_02C980(m, a, n - 1)) {
        func_023038(m->sub, m->w100, D_0023E638, n - 1);
        v = D_002162D0[m->w104].row[D_001FD55D].v;
        sc = 1.0f;
        if (v != 0.0f) {
            sc = v;
        }
        m->scale = sc;
        if (D_001FD560[0] != 0) {
            SND_PlayPositionalSound(D_001FD560[0], m->pos, 0.0f, &m->snd, D_001FCFB8);
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
            func_02C538(i, n - 1, 0);
            i++;
        } while (i < 16);
    } else {
        func_019EA8(4, 0);
    }
}
