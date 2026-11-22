/* LEVEL_19:0x14A338 -- casts a 1000-unit ray from the transformed origin along the object's direction; on a hit stores the endpoint and sets the hit flag in the attached record, otherwise clears the flag. */
typedef struct {
    char pad_00[0x10];
    float end[3];
    char pad_1C;
} Hit;

typedef struct {
    char pad_00[0x20];
    float dir[3];
    char pad_2C[0x28];
    int *ctx;
    Hit *hit;
} Obj;

extern char D_001D4878[];

extern void func_104E88(float *out, Obj *o, void *v);
extern int func_01F500(float dist, float *pd, float *hit, float *from, float *dir, int m1, int m2, int ctx);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void AddScaled(float *d, float *a, float *b, float k)
{
    d[0] = a[0] + b[0] * k;
    d[1] = a[1] + b[1] * k;
    d[2] = a[2] + b[2] * k;
}

void func_14A338(Obj *o)
{
    float hitbuf[8];
    float origin[4];
    float dir[3];
    float len;
    Hit *h;
    int *ctx;

    h = o->hit;
    len = 1000.0f;
    ctx = o->ctx;
    func_104E88(origin, o, D_001D4878);
    Copy3(dir, o->dir);
    if (func_01F500(len, &len, hitbuf, origin, dir, 0x129, 0x101, *ctx) != 0) {
        AddScaled(h->end, origin, dir, len);
        h->pad_1C = 1;
    } else {
        h->pad_1C = 0;
    }
}
