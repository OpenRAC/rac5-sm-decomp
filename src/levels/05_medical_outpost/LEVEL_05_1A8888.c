/* LEVEL_05:0x1A8888 -- placement copy of LEVEL_01_1AE318.c: initializes beam/arc effects or advances their phase angles and color pulse. */
typedef struct {
    char a00[0x1C];
    float f1C;
    float f20;
    char pad24[0x34 - 0x24];
    int w34;
    char a38[0x54 - 0x38];
    float f54;
    float f58;
    char pad5C[0x6C - 0x5C];
    int w6C;
    char a70[0x90 - 0x70];
    float f90;
    unsigned int col94;
    void *p98;
    void *p9C;
    void *pA0;
} State;

typedef struct {
    char pad0[0x45];
    unsigned char mode45;
    unsigned char init46;
    char pad47[0x58 - 0x47];
    State *state58;
} Obj;

extern void *D_001F7DD0;
extern char D_001F7DB0[];

extern int rand(void);
extern void func_1D91D0(void *mgr, void *slot, void *cfg, void *p1, void *p2, unsigned int color, float scale);
extern void func_1AA2D8(void *slot, void *p1, void *p2, unsigned int color, float scale);
extern void func_1A98C8(void *slot, void *p1, void *p2, unsigned int color, void *p3, float scale, int z);

void func_1A8888(Obj *a0)
{
    State *st = a0->state58;

    if (a0->init46 != 0) {
        st->f1C -= 0.5817764401435852f;
        if (st->f1C < -3.1415927410125732f) {
            st->f1C += 6.2831854820251465f;
        }
        st->f20 -= 0.5817764401435852f;
        if (st->f20 < -3.1415927410125732f) {
            st->f20 += 6.2831854820251465f;
        }
        st->f54 = st->f1C + 3.1415927410125732f;
        if (st->f54 > 3.1415927410125732f) {
            st->f54 -= 6.2831854820251465f;
        }
        st->f58 = st->f20;
        if (a0->mode45 != 1) {
            float t = (float)rand() * 4.65661231796588e-10f;
            float inv = 1.0f - t;
            unsigned int col;
            col = ((unsigned int)(int)(inv * 255.0f + t * 64.0f) << 24);
            col |= ((unsigned int)(int)(inv * 128.0f + t * 128.0f) << 16);
            col |= ((unsigned int)(int)(inv * 255.0f + t * 255.0f) << 8);
            col |= (unsigned int)(int)(inv * 255.0f + t * 255.0f);
            st->col94 = col;
            st->f90 += 0.10000001f;
            if (st->f90 > 1.0f) {
                st->f90 -= 1.0f;
            }
        }
        return;
    }

    switch (a0->mode45) {
    case 0:
        func_1D91D0(D_001F7DD0, &st->a00, D_001F7DB0, st->p98, st->p9C, 0x8000FFFFu, 0.075f);
        func_1D91D0(D_001F7DD0, &st->a38, D_001F7DB0, st->p98, st->p9C, 0x80FFFFFFu, 0.075f);
        func_1AA2D8(&st->a70, st->p98, st->p9C, 0xFF80FFFFu, 0.2f);
        break;
    case 1:
        st->w6C = 0;
        st->w34 = 0;
        func_1A98C8(&st->a00, st->p98, st->p9C, 0x8000FFFFu, st->pA0, 0.075f, 0);
        func_1A98C8(&st->a38, st->p98, st->p9C, 0x80FFFFFFu, st->pA0, 0.075f, 0);
        break;
    }
    a0->init46 = 1;
}
