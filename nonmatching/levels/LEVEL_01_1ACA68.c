/* USA LEVEL_01.REL:0x1ACA68, 316-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 2 differing words; first difference at 0x34.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Obj {
    char pad_00[0x30];
    float p[3];
} Obj;

typedef struct Rec {
    char pad_00[0x10];
    Obj *owner;
    int mode;
    float pos[3];
    float step;
} Rec;

extern int func_021F00(void *a, char *scratch, void *b, void *c, int d, int e, int f);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void AddScaled(float *d, float *base, float *dir, float k)
{
    d[0] = base[0] + dir[0] * k;
    d[1] = base[1] + dir[1] * k;
    d[2] = base[2] + dir[2] * k;
}

int func_1ACA68(Obj *self, Rec *r, float *dir, Obj *other, float scale)
{
    float v[3];

    Copy3(v, self->p);
    if ((func_021F00(&r->step, (char *)r, v, dir, 0x28, 0, 0) & 0xFF) != 0) {
        if (r->mode != 2 || (r->owner != self && r->owner != other)) {
            AddScaled(r->pos, v, dir, r->step);
            return 1;
        }
    }
    AddScaled(self->p, v, dir, scale);
    return 0;
}
