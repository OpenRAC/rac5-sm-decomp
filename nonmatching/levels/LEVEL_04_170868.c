/* LEVEL_04.REL:0x170868: reviewed 344-byte candidate, held for ABI review.
 * On first use registers the object's two colour words with the update
 * helpers, then advances the pulse phase and recomputes both colours.
 * gnu-ee-trial C with gnu-ee-trial links 344/344 bytes and is byte-exact at
 * this and 1 other USA placement, but the prototypes disagree.
 * It declares func_1F31F0 returning void with (pointer, pointer, int), but the
 * accepted LEVEL_04_1F31F0.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Reg1 {
    unsigned int *c0;
    unsigned int *c1;
    char *q;
    void *o;
    char *r;
};

struct Reg2 {
    char *a;
    char *b;
    char *c;
    void *o;
};

struct St {
    char pad_00[0x34];
    unsigned int w_34;
    unsigned int w_38;
    unsigned char b_3C;
    char pad_3D[0x50 - 0x3D];
    float f_50;
};

struct Obj {
    char pad_00[0x58];
    struct St *s_58;
};

extern char D_00239828[];
extern char D_00220DB0[];
extern char D_00239850[];
extern char D_00220E10[];
extern char D_00220DC0[];

extern float fmodf(float a, float b);
extern float sinf(float a);
extern void func_1F30E0(struct Reg1 *r);
extern void func_1F31F0(struct St *s, struct Reg2 *r, int n);
extern int func_204438(float f);

static __inline__ float WrapAngle(float x)
{
    x = fmodf(x, 6.2831855f);
    if (x < 0.0f) {
        x += 6.2831855f;
    }
    return x;
}

void func_170868(struct Obj *o)
{
    struct St *s;
    struct Reg1 r1;
    struct Reg2 r2;
    float a;
    float v;

    s = o->s_58;
    if (s->b_3C == 0) {
        r1.r = D_00239828;
        r1.q = D_00220DB0;
        r1.c0 = &s->w_34;
        r1.c1 = &s->w_38;
        r1.o = o;
        func_1F30E0(&r1);
        r2.b = D_00220E10;
        r2.a = D_00239850;
        r2.o = o;
        r2.c = D_00220DC0;
        func_1F31F0(s, &r2, 5);
        s->b_3C = 1;
    }
    a = WrapAngle(s->f_50 + 0.017000001f);
    s->f_50 = a;
    v = sinf(a) * 110.0f + 145.0f;
    s->w_34 = (func_204438(v) << 24) | 0xFF8080;
    s->w_38 = (func_204438(v) << 24) | 0xFF8080;
}
