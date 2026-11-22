/* USA LEVEL_09.REL:0x1A3338, 248-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 8 differing words; first difference at 0x94.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float limit;
    float base;
    int kind;
} Rec;

typedef struct {
    char pad00[0x14];
    float a;
    float b;
    float c;
    float d;
} Listener;

typedef struct {
    char pad00[0x30];
    float pos[4];
    char pad40[0x14];
    Rec *rec;
    char pad58[0x18];
    float timer;
} Obj;

typedef struct {
    char pad00[0x3C];
} Fx;

extern Fx D_0020FE70[];
extern Listener *D_001F2A5C;

extern void func_0D9AD8(float *pos, Fx *fx, int a);
extern int rand(void);
extern void func_07D450(Obj *o, Listener *l, int a2, int a3, int t0, int t1, int t2, int t3, float f12, float f13, float f14, float f15);

void func_1A3338(Obj *o)
{
    Rec *r;
    float t;

    r = o->rec;
    o->timer = o->timer + 0.03333333507180214f;
    if (r->limit <= o->timer) {
        func_0D9AD8(o->pos, &D_0020FE70[r->kind], 1);
        t = r->base - 0.0f;
        o->timer = t * ((float)rand() * 4.656612873077393e-10f) + 0.0f;
        if (D_001F2A5C != 0) {
            func_07D450(o, D_001F2A5C, 0, 0, 0, 0, 0, 1, D_001F2A5C->a, D_001F2A5C->b, D_001F2A5C->c, D_001F2A5C->d);
        }
    }
}
