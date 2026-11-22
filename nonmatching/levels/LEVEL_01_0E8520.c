/* USA LEVEL_01.REL:0x0E8520, 224-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 5 differing words; first difference at 0x88.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int rand(void);

typedef struct {
    int w0;
    int w4;
    float f8;
    float fC;
    float f10;
    int w14;
    int w18;
    int w1C;
} Cfg;

typedef struct {
    char pad00[4];
    float f4;
} Obj;

typedef struct {
    char pad00[0xC];
    char *table;
} Pool;

extern Pool *D_00206D9C;
extern int func_111600(Obj *o, float *out);
extern void func_0E8600(int a, Obj *o, char *e, int b, int c, int d, int f, float f0, float f1, float f2);

void func_0E8520(Obj *o, Cfg *c)
{
    float v[4];
    int idx;
    char *e;
    float dx;
    float h;
    float lo;

    idx = func_111600(o, v);
    if (idx != -1) {
        e = D_00206D9C->table + idx * 0x4C + 8;
        lo = c->f8;
        dx = o->f4 - v[0];
        h = c->fC - lo;
        h = h * ((float)rand() * 4.656612873077393e-10f);
        func_0E8600(c->w4, o, e, c->w0, c->w14, c->w18, c->w1C, dx, c->f10, lo + h);
    }
}
