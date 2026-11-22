/* USA LEVEL_02.REL:0x17AD18, 272-byte candidate (21 November 2026).
 * Measured pinned: 27 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int handle;
} Hold;

typedef struct {
    char pad00[0x58];
    Hold *hold;
    char pad5C[0xC];
    unsigned int color;
    char pad6C[4];
    float timer;
} Obj;

extern int D_0020B358;
extern void func_09DF10(int handle);
extern int func_1FFF10(float v);
extern void func_082F58(Obj *o, int a);

void func_17AD18(Obj *o)
{
    Hold *h = o->hold;
    unsigned int w;
    float f;

    if (h->handle != 0) {
        if (h->handle == D_0020B358) {
            D_0020B358 = 0;
        } else {
            func_09DF10(h->handle);
        }
        h->handle = 0;
    }
    w = o->color;
    f = (float)(w >> 24);
    f = f + f;
    f = f - 11.333333015441895f;
    if (f >= 0.0f) {
        o->color = ((unsigned int)func_1FFF10(f) << 24) | (w & 0xFFFFFF);
    }
    o->timer = o->timer + 1.0f;
    if (o->timer >= 22.5f) {
        func_082F58(o, 1);
    }
}
