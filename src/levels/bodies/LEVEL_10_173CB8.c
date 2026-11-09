/* LEVEL_10:0x173CB8 -- packs a two-float vector into a 12-byte block and passes it on. */
extern void *memset(void *s, int c, unsigned int n);
extern float func_173C48(void *o, void *v);

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

static __inline__ Vec3 make_vec(float *s)
{
    Vec3 v;

    memset(&v, 0, sizeof(v));
    v.z = s[1];
    v.x = s[0];
    return v;
}

void func_173CB8(char *a0, float *a1)
{
    Vec3 u;
    Vec3 t;

    t = make_vec(a1);
    u = t;
    func_173C48(a0, &u);
}
