/* LEVEL_01:0x02C198 -- opens the sound test menu: resets its state, positions the preview sound and runs the per-slot setup. */
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

extern Menu D_002319B0;
extern Set D_0020D350[];
extern unsigned char D_001F455C;
extern unsigned char D_001F455D;
extern void *D_001F4560[1];
extern unsigned int D_001F3FB8;
extern int D_00235238;
extern char g_RENDEREFFECT_SWIRLY_Active;

extern int func_0252D8(int a, int b);
extern void func_027480(int a, int b, int c);
extern int func_02CAF8(Menu *m, int a, int b);
extern void func_023838(void *p, int a, int b, int c);
extern void func_02C6B0(unsigned int a, int b, int c);
extern void func_01A828(int a, int b);
extern void SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");

void func_02C198(int a)
{
    Menu *m;
    int n;
    unsigned int i;
    float v;
    float sc;

    n = func_0252D8(a, -1);
    D_001F455D = 2 < (unsigned int)(n - 1);
    func_027480(0x90, 0, 0xFF);
    m = &D_002319B0;
    D_001F455C = 0;
    m->w108 = 0;
    m->snd = 0;
    if (func_02CAF8(m, a, n - 1)) {
        func_023838(m->sub, m->w100, D_00235238, n - 1);
        v = D_0020D350[m->w104].row[D_001F455D].v;
        sc = 1.0f;
        if (v != 0.0f) {
            sc = v;
        }
        m->scale = sc;
        if (D_001F4560[0] != 0) {
            SND_PlayPositionalSound(D_001F4560[0], m->pos, 0.0f, &m->snd, D_001F3FB8);
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
            func_02C6B0(i, n - 1, 0);
            i++;
        } while (i < 16);
    } else {
        func_01A828(4, 0);
    }
}
