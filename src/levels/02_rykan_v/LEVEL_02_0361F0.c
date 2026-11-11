/* LEVEL_02:0x0361F0 -- stores a direction vector and rebuilds the per-slot handles. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    char pad0[4];
    unsigned obj[2];
    Vec3 w[6];
    Vec3 v[2];
    char pad2[0x90 - 0x6C];
    unsigned h[6];
    int fA8;
} Rec;

extern char D_00209250[];
extern void func_073880(unsigned h);
extern void func_073348(unsigned h);
extern unsigned func_073308(void);
extern int func_1611A0(unsigned o);
extern void func_073358(unsigned a, int b, void *c, int d, void *e);

void func_0361F0(Vec3 *in)
{
    Rec *r;
    unsigned i, j, k;
    Vec3 *p0;
    Vec3 *p1;

    r = *(Rec **)((char *)in + 0x58);
    p1 = &r->v[1];
    r->v[1].x = in->x;
    p1->y = in->y;
    p1->z = in->z;
    p0 = &r->v[0];
    p0->x = -in->x;
    p0->y = -in->y;
    p0->z = -in->z;
    if (r->fA8 == 0)
        r->fA8 = (int)(D_00209250 + *(unsigned char *)(r->obj[0] + 0x47) * 0xCC);
    for (i = 0; i < 2; i++) {
        if (r->obj[i]) {
            for (j = 0; j < 3; j++) {
                k = i * 3 + j;

                if (r->h[k]) {
                    func_073880(r->h[k]);
                func_073348(r->h[k]);
                }
                r->h[k] = func_073308();
                func_073358(r->h[k], r->fA8, &r->w[k], func_1611A0(r->obj[i]), &r->v[i]);
            }
        }
    }
}
