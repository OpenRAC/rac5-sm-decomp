/* USA LEVEL_01.REL:0x01C818, 428-byte candidate (22 November 2026).
 * Measured gnu-ee-trial: 4 differing words; first difference at 0x28.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    char pad00[0x3F];
    unsigned char cat;
} Kind;

typedef struct {
    char pad00[0x30];
    Vec3 pos;
    char pad3C[4];
    Kind *kind;
} Obj;

typedef struct {
    int pad;
    Obj *obj;
} Rec;

typedef struct {
    char pad[0x68];
} Entry;

typedef struct {
    float mn[4];
    float mx[4];
    float spare[4];
} Box;

extern Entry D_0022F6F8[2];
extern Rec **D_0022F7C8;
extern int func_095AA0(Rec **dst, Entry *e, float *mn, float *mx, int a, int b);

Obj *func_01C818(float *c, int a, int b, int mask, float r)
{
    Box box;
    Entry *e;
    Rec **cur;
    Rec **p;
    Rec **end;
    Obj *best;
    Obj *o;
    Vec3 *q;
    float best2;
    float d2;
    float dx;
    float dy;
    float dz;

    best = 0;
    best2 = r * r;
    box.mn[0] = c[0] - r;
    box.mn[1] = c[1] - r;
    box.mn[2] = c[2] - r;
    box.mx[0] = c[0] + r;
    box.mx[1] = c[1] + r;
    box.mx[2] = c[2] + r;
    cur = D_0022F7C8;
    e = D_0022F6F8;
    do {
        cur += func_095AA0(cur, e, box.mn, box.mx, a, b);
        e++;
    } while (e < D_0022F6F8 + 2);
    end = D_0022F7C8 + (cur - D_0022F7C8);
    p = D_0022F7C8;
    if (p != end) {
        do {
            o = (*p)->obj;
            p++;
            if ((((mask >> o->kind->cat) ^ 1) & 1) == 0) {
                q = &o->pos;
                dx = q->x - c[0];
                dy = q->y - c[1];
                dz = q->z - c[2];
                d2 = dx * dx + dy * dy + dz * dz;
                if (d2 < best2) {
                    best = o;
                    best2 = d2;
                }
            }
        } while (p != end);
    }
    return best;
}
