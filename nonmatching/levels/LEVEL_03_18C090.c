/* USA LEVEL_03.REL:0x18C090, 256-byte candidate (21 November 2026).
 * Measured pinned: 16 differing words; first difference at 0x28.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[8];
    int w08;
    char pad0C[0x26 - 0xC];
    unsigned char near[5];
    unsigned char far[5];
} Rec;

typedef struct {
    char pad00[0x30];
    float x;
    float y;
    float z;
    char pad3C[0x18];
    Rec *rec;
} Obj;

extern void func_01A0B0(float *out);
extern int func_084588(int a, float *p);
extern void func_0180C0(int id, int a);

void func_18C090(Obj *o)
{
    float v[4];
    float w[3];
    float *p;
    Rec *r;
    unsigned char *q;
    unsigned char *end;

    r = o->rec;
    p = &o->x;
    func_01A0B0(v);
    w[0] = v[0] - o->x;
    w[1] = v[1] - p[1];
    w[2] = v[2] - p[2];
    if (r->w08 != 0) {
        if (func_084588(r->w08, v) == 0) {
            return;
        }
    }
    q = (w[0] * o->x + w[1] * p[1] + w[2] * p[2] < 0.0f) ? r->near : r->far;
    end = q + 5;
    do {
        if (*q != 0xFF) {
            func_0180C0(*q, 0);
        }
        q++;
    } while (q < end);
}
