/* LEVEL_03:0x18FDB8 -- initialises an object from its template record: relocates the record's two offsets (failing when the first is missing), copies the template's 16-float pose, clears the counter, sets the randomised rate and the scaled tag byte, then registers the template. */
typedef struct Tpl {
    float m[16];
    char pad40[0x10];
    unsigned char tag;
} Tpl;

typedef struct Rec {
    Tpl *tpl;
    int w4;
    float rate;
} Rec;

typedef struct Obj {
    float m[16];
    char pad40[0x14];
    Rec *rec;
    char pad58[0x18];
    int w70;
    char pad74[2];
    unsigned char tag;
} Obj;

extern int D_0021F414;
extern int rand(void);
extern void func_083BE8(Tpl *t);

int func_18FDB8(Obj *o)
{
    Rec *r;
    Tpl *t;
    int ok;
    int v;
    float five;

    r = o->rec;
    v = (int)r->tpl;
    if (v == 0) {
        ok = 0;
    } else {
        r->tpl = (Tpl *)(D_0021F414 + v);
        ok = 1;
    }
    if (!ok)
        return 0;
    if (r->w4 != 0)
        r->w4 = D_0021F414 + r->w4;
    t = r->tpl;
    five = 5.0f;
    o->m[8] = t->m[8];
    o->m[9] = t->m[9];
    o->m[10] = t->m[10];
    o->m[11] = t->m[11];
    o->m[0] = t->m[0];
    o->m[1] = t->m[1];
    o->m[2] = t->m[2];
    o->m[3] = t->m[3];
    o->m[4] = t->m[4];
    o->m[5] = t->m[5];
    o->m[6] = t->m[6];
    o->m[7] = t->m[7];
    o->m[12] = t->m[12];
    o->m[13] = t->m[13];
    o->m[14] = t->m[14];
    o->m[15] = t->m[15];
    o->w70 = 0;
    r->rate = 0.033333335f / ((float)rand() * 4.656613e-10f + five);
    o->tag = (int)((float)r->tpl->tag * 0.75f);
    func_083BE8(r->tpl);
    return 1;
}
