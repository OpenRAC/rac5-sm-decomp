/* LEVEL_08:0x02C910 -- placement copy of LEVEL_01_02C198.c: opens the sound test menu: resets its state, positions the preview sound and runs the per-slot setup. */
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

extern Menu D_00280C30;
extern Set D_00256FD0[];
extern unsigned char D_0023D0DC;
extern unsigned char D_0023D0DD;
extern void *D_0023D0E0[1];
extern unsigned int D_0023CB38;
extern int D_002844C8;
extern char g_RENDEREFFECT_SWIRLY_Active;

extern int func_025B58(int a, int b);
extern void func_027AA8(int a, int b, int c);
extern int func_02D270(Menu *m, int a, int b);
extern void func_023F50(void *p, int a, int b, int c);
extern void func_02CE28(unsigned int a, int b, int c);
extern void func_01B1A0(int a, int b);
extern void SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");

void func_02C910(int a)
{
    Menu *m;
    int n;
    unsigned int i;
    float v;
    float sc;

    n = func_025B58(a, -1);
    D_0023D0DD = 2 < (unsigned int)(n - 1);
    func_027AA8(0x90, 0, 0xFF);
    m = &D_00280C30;
    D_0023D0DC = 0;
    m->w108 = 0;
    m->snd = 0;
    if (func_02D270(m, a, n - 1)) {
        func_023F50(m->sub, m->w100, D_002844C8, n - 1);
        v = D_00256FD0[m->w104].row[D_0023D0DD].v;
        sc = 1.0f;
        if (v != 0.0f) {
            sc = v;
        }
        m->scale = sc;
        if (D_0023D0E0[0] != 0) {
            SND_PlayPositionalSound(D_0023D0E0[0], m->pos, 0.0f, &m->snd, D_0023CB38);
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
            func_02CE28(i, n - 1, 0);
            i++;
        } while (i < 16);
    } else {
        func_01B1A0(4, 0);
    }
}
