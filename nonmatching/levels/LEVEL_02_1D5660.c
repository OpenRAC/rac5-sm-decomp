/* USA LEVEL_02.REL:0x1D5660, 196-byte candidate (14 November 2026).
 * Measured pinned: 3 differing words; first difference at 0x2C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Tgt { char pad00[0x30]; float pos[4]; char pad40[0x24]; unsigned int w64; } Tgt;
typedef struct Hold { char pad00[0x54]; Tgt **f54; } Hold;
typedef struct Rec { char pad00[0x2C]; void *w2C; Hold *f30; } Rec;
typedef struct Obj { char pad00[0x30]; float x; float y; float z; char pad3C[0x18]; Rec *f54; } Obj;
extern int func_08B060(void *a, float *p);
static __inline__ void Copy4(float *d, float *s) { d[0] = s[0]; d[1] = s[1]; d[2] = s[2]; d[3] = s[3]; }
int func_1D5660(Obj *o)
{
    Rec *r = o->f54;
    Tgt *t = *r->f30->f54;
    int ok = 0;
    float v[4];
    float dx, dz;
    if (t != 0) ok = (t->w64 & 0x20) < 1;
    if ((ok & 0xFF) != 0) {
        Copy4(v, t->pos);
        if (func_08B060(r->w2C, v) != 0) {
            dx = o->x - v[0];
            dz = o->z - v[2];
            if (dx * dx + dz * dz <= 100.0f) return 1;
        }
    }
    return 0;
}
