/* LEVEL_16:0x029B90 -- opens the sound test menu: resets its state, positions the preview sound and runs the per-slot setup. */
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

extern Menu D_001E06B0;
extern Set D_001C2318[];
extern unsigned char D_001A208C;
extern unsigned char D_001A208D;
extern void *D_001A2090[1];
extern unsigned int D_001A1AE4;
extern int D_001E4188;
extern char g_RENDEREFFECT_SWIRLY_Active;

extern int func_022C28(int a, int b);
extern void func_024F20(int index, unsigned char set, unsigned char clear);
extern int func_02A4F0(Menu *m, int a, int b);
extern void func_0211E8(void *p, int a, int b, int c);
extern void func_02A0A8(unsigned int a, int b, int c);
extern void func_018B98(int a, int b);
extern void SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");

void func_029B90(int a)
{
    Menu *m;
    int n;
    unsigned int i;
    float v;
    float sc;

    n = func_022C28(a, -1);
    D_001A208D = 1 < (unsigned int)(n - 1);
    func_024F20(0x90, 0, 0xFF);
    m = &D_001E06B0;
    D_001A208C = 0;
    m->w108 = 0;
    m->snd = 0;
    if (func_02A4F0(m, a, n - 1)) {
        func_0211E8(m->sub, m->w100, D_001E4188, n - 1);
        v = D_001C2318[m->w104].row[D_001A208D].v;
        sc = 1.0f;
        if (v != 0.0f) {
            sc = v;
        }
        m->scale = sc;
        if (D_001A2090[0] != 0) {
            SND_PlayPositionalSound(D_001A2090[0], m->pos, 0.0f, &m->snd, D_001A1AE4);
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
            func_02A0A8(i, n - 1, 0);
            i++;
        } while (i < 16);
    } else {
        func_018B98(4, 0);
    }
}
