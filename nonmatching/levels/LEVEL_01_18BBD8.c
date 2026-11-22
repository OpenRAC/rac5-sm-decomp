/* USA LEVEL_01.REL:0x18BBD8, 304-byte candidate (21 November 2026).
 * Measured pinned: 6 differing words; first difference at 0x7C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Fx {
    char pad0[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Fx;

typedef struct Rec {
    float f0;
    Fx *off;
    Fx *on;
    float vec[3];
} Rec;

typedef struct Obj {
    char pad0[0x45];
    unsigned char state;
    unsigned char flag;
    char pad1[0x58 - 0x47];
    Rec *rec;
} Obj;

extern void func_0809D0(Obj *o, Fx *fx, float *vec, int a, int b, int c, int d, int e, float x, float y, float z, float w);

void func_18BBD8(Obj *o, int want)
{
    Rec *r;
    Fx *fx;
    float *vec;
    int cur;

    cur = o->flag != 0;
    r = o->rec;
    if (want == cur) {
        switch (o->state) {
        case 4:
            o->flag = o->flag == 0;
            if (o->flag == 0) {
                fx = r->off;
            } else {
                fx = r->on;
            }
            if (fx != 0) {
                func_0809D0(o, fx, r->vec, 1, 0, 1, 0, 1, fx->f14, fx->f18, fx->f1C, fx->f20);
            }
            o->state = 1;
            break;
        case 1:
        case 3:
            o->state = 2;
            break;
        default:
            break;
        }
    } else {
        switch (o->state) {
        case 2:
            o->state = 1;
            break;
        case 0:
            vec = r->vec;
            r->f0 = 1.0f;
            fx = r->off;
            if (fx != 0) {
                func_0809D0(o, fx, vec, 1, 0, 1, 0, 1, fx->f14, fx->f18, fx->f1C, fx->f20);
            }
            o->state = 3;
            break;
        default:
            break;
        }
    }
}
