/* LEVEL_03:0x1B8720 -- placement copy of LEVEL_01_1A5618.c: rebases the object record's first word (and, when set and valid, the word at +0x1C) onto a global base address, scales the float at +0x28 by 0.5 * 60 * (1/30) and returns 1; returns 0 when the first word is zero. */
typedef struct {
    int w0;
    char pad04[0x1C - 4];
    int w1C;
    char pad20[0x28 - 0x20];
    float f28;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Obj;

extern int D_0021F414;

int func_1B8720(Obj *o)
{
    Rec *r;
    int v;
    int ok;
    int t;

    r = o->rec;
    v = r->w0;
    if (v == 0) {
        ok = 0;
    } else {
        r->w0 = D_0021F414 + v;
        ok = 1;
    }
    if (!ok)
        return 0;
    if (r->w1C != 0) {
        t = D_0021F414 + r->w1C;
        if (*(int *)(t + 0x40) == 0)
            r->w1C = 0;
        else
            r->w1C = t;
    }
    r->f28 = r->f28 * 0.5f * 60.0f * 0.033333335f;
    return 1;
}
