/* LEVEL_08:0x1E3AA8 -- placement copy of LEVEL_04_1BCD10.c: per-frame timer handler: while the step is positive counts the record's timer down (faster when the owner's kind byte is 1) and, when it runs out, clears it, queues the end effect, sets the state byte and reports 3; with a non-positive step it caps the timer at 35; otherwise reports 2. */
typedef struct {
    char pad00[0x3F];
    unsigned char b3F;
} Kind;

typedef struct {
    char pad00[0x40];
    Kind *kind;
} Owner;

typedef struct {
    char pad00[0x28];
    float f28;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0x58 - 0x46];
    Rec *rec;
} Obj;

typedef struct {
    int w[4];
} Buf;

extern float D_002576A8;
extern char D_00274C48[];
extern void func_137108(Buf *b, Obj *o, char *p);
extern void func_0FB378(int a, Buf *b);

int func_1E3AA8(Obj *o, float dt, int a1, int a2, int a3, int a4, Owner *owner)
{
    Rec *rec;
    Buf buf;
    float v;
    float cur;

    rec = o->rec;
    if (dt > 0.0f) {
        cur = rec->f28;
        if (owner != 0 && owner->kind->b3F == 1)
            v = cur - dt * D_002576A8;
        else
            v = cur - dt;
        rec->f28 = v;
        if (v <= 0.0f) {
            rec->f28 = 0.0f;
            func_137108(&buf, o, D_00274C48);
            func_0FB378(0, &buf);
            o->b45 = 6;
            return 3;
        }
    } else {
        v = rec->f28 - dt;
        rec->f28 = v;
        if (v > 35.0f)
            rec->f28 = 35.0f;
    }
    return 2;
}
