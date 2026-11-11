/* LEVEL_18:0x029140 -- placement copy of LEVEL_16_029B90.c: opens the sound test menu: resets its state, positions the preview sound and runs the per-slot setup. */
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

extern Menu D_001E0A30;
extern Set D_001C3898[];
extern unsigned char D_001A350C;
extern unsigned char D_001A350D;
extern void *D_001A3510[1];
extern unsigned int D_001A2F64;
extern int D_001E4508;
extern char g_RENDEREFFECT_SWIRLY_Active;

extern int func_022270(int a, int b);
extern void func_0244D0(int index, unsigned char set, unsigned char clear);
extern int func_029AA0(Menu *m, int a, int b);
extern void func_020830(void *p, int a, int b, int c);
extern void func_029658(unsigned int a, int b, int c);
extern void func_0181E0(int a, int b);
extern void SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");

void func_029140(int a)
{
    Menu *m;
    int n;
    unsigned int i;
    float v;
    float sc;

    n = func_022270(a, -1);
    D_001A350D = 1 < (unsigned int)(n - 1);
    func_0244D0(0x90, 0, 0xFF);
    m = &D_001E0A30;
    D_001A350C = 0;
    m->w108 = 0;
    m->snd = 0;
    if (func_029AA0(m, a, n - 1)) {
        func_020830(m->sub, m->w100, D_001E4508, n - 1);
        v = D_001C3898[m->w104].row[D_001A350D].v;
        sc = 1.0f;
        if (v != 0.0f) {
            sc = v;
        }
        m->scale = sc;
        if (D_001A3510[0] != 0) {
            SND_PlayPositionalSound(D_001A3510[0], m->pos, 0.0f, &m->snd, D_001A2F64);
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
            func_029658(i, n - 1, 0);
            i++;
        } while (i < 16);
    } else {
        func_0181E0(4, 0);
    }
}
