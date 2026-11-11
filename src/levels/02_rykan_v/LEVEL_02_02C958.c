/* LEVEL_02:0x02C958 -- placement copy of LEVEL_01_02C198.c: opens the sound test menu: resets its state, positions the preview sound and runs the per-slot setup. */
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

extern Menu D_00248EB0;
extern Set D_002222D0[];
extern unsigned char D_002091DC;
extern unsigned char D_002091DD;
extern void *D_002091E0[1];
extern unsigned int D_00208C38;
extern int D_0024C748;
extern char g_RENDEREFFECT_SWIRLY_Active;

extern int func_025C38(int a, int b);
extern void func_027C68(int a, int b, int c);
extern int func_02D2B8(Menu *m, int a, int b);
extern void func_024198(void *p, int a, int b, int c);
extern void func_02CE70(unsigned int a, int b, int c);
extern void func_01B188(int a, int b);
extern void SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");

void func_02C958(int a)
{
    Menu *m;
    int n;
    unsigned int i;
    float v;
    float sc;

    n = func_025C38(a, -1);
    D_002091DD = 2 < (unsigned int)(n - 1);
    func_027C68(0x90, 0, 0xFF);
    m = &D_00248EB0;
    D_002091DC = 0;
    m->w108 = 0;
    m->snd = 0;
    if (func_02D2B8(m, a, n - 1)) {
        func_024198(m->sub, m->w100, D_0024C748, n - 1);
        v = D_002222D0[m->w104].row[D_002091DD].v;
        sc = 1.0f;
        if (v != 0.0f) {
            sc = v;
        }
        m->scale = sc;
        if (D_002091E0[0] != 0) {
            SND_PlayPositionalSound(D_002091E0[0], m->pos, 0.0f, &m->snd, D_00208C38);
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
            func_02CE70(i, n - 1, 0);
            i++;
        } while (i < 16);
    } else {
        func_01B188(4, 0);
    }
}
