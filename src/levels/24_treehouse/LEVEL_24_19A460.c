/* LEVEL_24:0x19A460 -- two-state prompt step: state 0 waits until the player is within one unit of the spot and the help flag is set, then opens the prompt; state 1 formats the prompt text and closes it on a confirm or cancel result. */

typedef struct {
    char pad_00[0x30];
    float x;
    float y;
    float z;
} Pos;

typedef struct {
    char pad_00[0x30];
    float x;
    float y;
    float z;
    char pad_3C[0x924];
    long long flags_960;
} Game;

typedef struct {
    char pad_00[0x18];
    unsigned int mask_18;
} Sub;

typedef struct {
    char pad_00[0x45];
    unsigned char idx_45;
    char pad_46[0xE];
    int *state_54;
} Obj;

extern Game D_00201040;
extern int D_001F5D28[];
extern char D_00362358[];

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_127FB0(int id);
extern void func_0AED38(int a, void *b, void *c, int d);
extern int func_0AE8C8(void);
extern void func_081088(int a);
extern void func_0D08A8(int a, char *b, char *c, int d);
extern int func_0D03B0(void);

void func_19A460(Obj *o)
{
    int *st;
    Game *g;
    float *pa;
    float *pb;
    float dx;
    float dy;
    float dz;
    Sub *sub;
    int r;

    g = &D_00201040;
    st = o->state_54;
    switch (*st) {
    case 0:
        pb = (float *)((char *)g + 0x30);
        pa = (float *)((char *)o + 0x30);
        dx = pa[0] - pb[0];
        dy = pa[1] - pb[1];
        dz = pa[2] - pb[2];
        if (dx * dx + dy * dy + dz * dz < 1.0f) {
            if (g->flags_960 & 0x200000000LL) {
                func_0AED38(1, func_127FB0(0x1C9), 0, 0);
                r = func_0AE8C8();
                if (r == 1) {
                    *st = r;
                }
            }
        }
        break;
    case 1:
        func_081088(0x400);
        sprintf(D_00362358, func_127FB0(D_001F5D28[o->idx_45]));
        func_0D08A8(2, D_00362358, func_127FB0(0x218), 0);
        r = func_0D03B0();
        if ((unsigned int)(r - 1) < 2) {
            sub = (Sub *)((char *)g + 0xC0);
            sub->mask_18 &= ~1;
            *st = 0;
            func_081088(2);
        }
        break;
    }
}
