/* USA LEVEL_08.REL:0x19AD90, 328-byte candidate (21 November 2026).
 * Measured pinned --as: 3 differing words; first difference at 0x74.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Table Table;
typedef struct List List;
struct Obj;

typedef struct Ent {
    char pad00[0x40];
    struct Vt *vt;
} Ent;

typedef struct Vt {
    char pad00[0x20];
    void (*fn20)(float f, Ent *self, int a, int b, int c, int d, struct Obj *o);
} Vt;

typedef struct {
    float f0;
    char pad04[0x18 - 4];
    char x18[0x60 - 0x18];
    int w60;
} R58;

typedef struct {
    int w0;
} R54;

typedef struct Obj {
    char pad00[0x30];
    char sub30[0x45 - 0x30];
    unsigned char state;
    char pad46[0x54 - 0x46];
    R54 *r54;
    R58 *r58;
    char pad5C[0x70 - 0x5C];
    float f70;
} Obj;

extern int func_220198(Table *table, int id, int value);
extern void func_2201E8(List *list, void *item, int kind);
extern int *func_1FA3F0(float a, float b, float c, float d, int e, Obj *o, char *p, int g, int h);

void func_19AD90(Obj *o, Ent *e)
{
    R58 *r58;
    R54 *r54;
    int *hit;
    int v;
    float f;

    r58 = o->r58;
    r54 = o->r54;
    if (0.16666667f <= r58->f0) {
        if (func_220198((Table *)r58->x18, (int)o, 0x16) == 0) {
            func_2201E8((List *)r58->x18, e, 0x16);
            e->vt->fn20(1.5f, e, 2, 1, 0, 0, o);
        }
    }
    if (o->state != 3) {
        o->state = 1;
        hit = func_1FA3F0(25.0f, 1.0e30f, -1.0f, 0.8660254f, r54->w0, o, o->sub30, 0, 0);
        v = 0;
        if (hit != 0)
            v = *hit;
        if (v != 0) {
            f = 60.0f;
            r58->w60 = v;
        } else {
            f = 90.0f;
        }
        o->f70 = f;
    }
}
