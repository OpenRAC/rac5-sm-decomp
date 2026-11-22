/* USA LEVEL_01.REL:0x078008, 348-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 29 differing words; first difference at 0x58.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad00[4];
    float f04;
    float f08;
    char pad0C[4];
    float f10;
} Src;

typedef struct {
    char pad00[0x30];
    float pos[3];
} Obj;

typedef struct {
    Obj *owner;
    Src *src;
    float pos[3];
    Vec3 dir;
    float ext[3];
    float e2C;
    int e30;
    int e34;
    float e38;
    char pad3C[4];
    unsigned char b40;
    unsigned char b41;
    unsigned char b42;
} Rec;

extern int D_001F60D8;
extern void *func_097658(char *record, int index, int extra);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_078008(Obj *o, Src *src, int a2, int a3, Vec3 *dir, float *ext)
{
    int id = -1;
    Rec *e;

    e = func_097658((char *)&id, D_001F60D8, 1);
    if (e != 0) {
        e->b41 = a2;
        e->b40 = a3 ^ 1;
        e->e30 = 0;
        e->e34 = 0;
        e->b42 = a3;
        e->src = src;
        e->owner = o;
        e->dir = *dir;
        Copy3(e->pos, o->pos);
        if (a3 != 0) {
            Copy3(e->ext, ext);
            e->e2C = (1.0f / 30.0f) / src->f04;
            e->e38 = src->f10 * 0.5f;
        } else {
            e->e2C = (1.0f / 30.0f) / src->f08;
            e->e38 = 0.01f;
        }
    }
}
