/* LEVEL_15:0x100B78 -- offsets the object along its two basis vectors by a random angle on a circle scaled by five times the given radius and hands the resulting vector to the apply helper. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad_00[0x60];
    Vec3 u;
    Vec3 v;
    char pad_78[0x404];
    char tail[4];
} Obj;

extern void func_0EBEC0(Vec3 *a, Vec3 *b, Vec3 *c);
extern void func_0FDC00(char *t, float *v);
extern int rand(void);
extern float cosf(float x);
extern float sqrtf(float x);

static __inline__ void CopyVec(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_100B78(Obj *o, Vec3 *c, float radius)
{
    Vec3 v[3];
    float out[3];
    float *cp;
    float k;
    float ang;
    float cs;
    float sn;

    func_0EBEC0(&v[0], &v[1], c);
    cp = &v[2].x;
    CopyVec(cp, &c->x);
    k = radius * 5.0f;
    ang = (float)rand() * 2.925836239953128e-09f + -3.1415927410125732f;
    cs = cosf(ang);
    sn = sqrtf(1.0f - cs * cs);
    if (ang < 0.0f) {
        sn = -sn;
    }
    out[0] = o->u.x * (cs * k) + o->v.x * (sn * k);
    out[1] = o->u.y * (cs * k) + o->v.y * (sn * k);
    out[2] = o->u.z * (cs * k) + o->v.z * (sn * k);
    func_0FDC00(o->tail, out);
}
