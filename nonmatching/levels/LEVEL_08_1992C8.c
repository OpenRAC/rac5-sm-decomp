/* USA LEVEL_08.REL:0x1992C8, 500-byte candidate (22 November 2026).
 * Measured gnu-ee-trial: 3 differing words; first difference at 0x160.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { char pad00[0xC]; float f0C; } Sub;

typedef struct {
    char pad00[0x2C];
    int w2C;
} Hdr;

typedef struct {
    char pad00[0x24];
    Sub sub24;
    char pad34[0xC];
    float timer;
    char pad44[2];
    unsigned char b46;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0xE];
    Hdr *hdr;
    Rec *rec;
} Obj;

extern void func_017980(Obj *o, int on, int w, int b);
extern void func_014EB8(Sub *sub, Obj *o, int a, int b, int c);
extern void func_20A188(float f0, float f1, void *sub, Obj *o, int a, int b, int c);
extern void func_199AB0(Obj *o, int state, int to);
extern void func_21D820(Obj *o, float scale);
extern void func_21D890(float scale);
extern void func_0845F8(Obj *o, int on);

int func_1992C8(float dt, Obj *o, int st, int go, int a, int b, int c)
{
    Rec *rec;
    Hdr *hdr;
    float t;

    rec = o->rec;
    hdr = o->hdr;
    if ((unsigned char)(o->state - 10) < 3 && st != 7) {
        return 1;
    }
    if (st == 10) {
    hit:
        func_21D820(o, 0.1f);
        func_21D890(0.1f);
        func_0845F8(o, 1);
        return 3;
    }
    if (st == 6 && rec->timer > 0.0f) {
        func_017980(o, 1, hdr->w2C, rec->b46);
    } else if (st == 7) {
        func_017980(o, 0, hdr->w2C, rec->b46);
    }
    t = rec->timer - dt;
    rec->timer = t;
    if (t <= 0.0f) {
        func_017980(o, 0, hdr->w2C, rec->b46);
        if (st == 11) {
            goto hit;
        }
        func_20A188(0.26666668f, 0.23333334922790527f, &rec->sub24, o, a, b, c);
        func_199AB0(o, o->state, 11);
        return 3;
    }
    if (go != 0) {
        Sub *sub = &rec->sub24;
        func_014EB8(sub, o, a, b, c);
        sub->f0C = 0.0f;
        func_199AB0(o, o->state, 9);
    }
    return 2;
}
