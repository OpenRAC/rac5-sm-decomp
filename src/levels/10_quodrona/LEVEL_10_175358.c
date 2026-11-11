/* LEVEL_10:0x175358 -- probes the ground along the probe's axis: on a hit inside the skin it pushes the probe and its body out, removes the velocity component into the surface and flags a contact. */
extern float fabsf(float x);

typedef struct Body {
    char pad_00[0x30];
    float pos[3];
} Body;

typedef struct Probe {
    Body *body;
    char pad_04[0x10];
    float dir[3];
    char pad_20[0x20];
    unsigned char flag;
    char pad_41[0x7F];
    float vel[3];
    float pos2[3];
    char pad_D8[8];
    float dist;
} Probe;

extern int func_01FD70(float radius, float *hit, char *buf, float *start, int mask, int flag);
extern int func_0204E0(float radius, float *hit, char *buf, float *start, float *dir, int mask, int a, int b);

static __inline__ void Set3(float *out, float x, float y, float z)
{
    out[0] = x;
    out[1] = y;
    out[2] = z;
}

static __inline__ void MulAdd3(float *out, float *a, float *b, float t)
{
    out[0] = a[0] + b[0] * t;
    out[1] = a[1] + b[1] * t;
    out[2] = a[2] + b[2] * t;
}

static __inline__ void Neg3(float *out, float *a)
{
    out[0] = -a[0];
    out[1] = -a[1];
    out[2] = -a[2];
}

static __inline__ void Scale3(float *out, float *a, float s)
{
    out[0] = s * a[0];
    out[1] = s * a[1];
    out[2] = s * a[2];
}

static __inline__ void Add3(float *a, float *b)
{
    a[0] = a[0] + b[0];
    a[1] = a[1] + b[1];
    a[2] = a[2] + b[2];
}

static __inline__ float Dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

static __inline__ void SubScaled3(float *v, float *d, float s)
{
    v[0] = v[0] - d[0] * s;
    v[1] = v[1] - d[1] * s;
    v[2] = v[2] - d[2] * s;
}

static __inline__ float Min(float a, float b)
{
    return (a + b - fabsf(b - a)) * 0.5f;
}

void func_175358(Probe *o)
{
    float start[4];
    char buf[32];
    float n[4];
    float hit[4];
    int r;
    float *pos;
    float d;
    float t;

    pos = o->body->pos;
    if (0.99f < o->dir[1]) {
        Set3(start, pos[0], pos[1] + 3.0f, pos[2]);
        r = func_01FD70(13.0f, hit, buf, start, 0x78, 0);
    } else {
        MulAdd3(start, pos, o->dir, 3.0f);
        Neg3(n, o->dir);
        r = func_0204E0(13.0f, hit, buf, start, n, 0x78, 0, 0);
    }
    if (r != 0) {
        d = hit[0] - 3.0f;
        o->dist = d;
        if (d < 0.0f) {
            t = -d;
            Scale3(n, o->dir, t);
            Add3(o->pos2, n);
            Add3(o->body->pos, n);
            SubScaled3(o->vel, o->dir, Min(Dot3(o->dir, o->vel), 0.0f));
            o->dist = 0.0f;
            o->flag = 1;
        } else {
            o->flag = 0;
        }
    } else {
        o->flag = 0;
        o->dist = 1000.0f;
    }
}
