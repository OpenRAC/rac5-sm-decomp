/* USA LEVEL_03.REL:0x1F5660, 408-byte candidate (22 November 2026).
 * Measured gnu-ee-trial: 2 differing words; first difference at 0xF0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct N0973E8;

typedef struct {
    unsigned int n;
    int w04;
    int w08;
    float x0;
    float x1;
    char pad14[0x24 - 0x14];
    float y0;
    float y1;
    char pad2C[0x34 - 0x2C];
    float len0;
    float len1;
} Cfg;

typedef struct {
    char pad00[0x14];
    int i14;
    int i18;
    float v1C;
    float v20;
    float v24;
    float f28;
    int w2C;
    int w30;
    float f34;
    Cfg *cfg;
    char b3C;
} Rec;

extern int rand(void);
extern void func_097200(Rec *r, int a, int b);
extern char *func_0973E8(char *a0, struct N0973E8 *a1, int a2);
extern void func_097378(char *record);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ float Lerp(float lo, float hi)
{
    float d = hi - lo;
    return lo + d * ((float)rand() * 4.656613e-10f);
}

int func_1F5660(float f, Rec *r, Cfg *cfg, int a2, int a3, float *v, int t1)
{
    unsigned int n;
    unsigned int i;
    float *p;
    float *q;

    Copy3(&r->v1C, v);
    r->i14 = a3;
    r->f28 = f;
    r->i18 = t1;
    r->cfg = cfg;
    r->w2C = 0;
    r->w30 = 0;
    r->f34 = Lerp(cfg->len0, cfg->len1);
    r->b3C = 0;
    func_097200(r, a2, 1);
    n = cfg->n;
    q = (float *)func_0973E8((char *)&n, (struct N0973E8 *)r, n);
    if (n != cfg->n) {
        func_097378((char *)r);
        return 0;
    }
    i = 0;
    if (n != 0) {
        p = q;
        do {
            i++;
            p[0] = Lerp(cfg->y0, cfg->y1);
            p[1] = Lerp(cfg->x0, cfg->x1);
            *(int *)(p + 2) = cfg->w08;
            p += 4;
        } while (i < cfg->n);
    }
    return 1;
}
