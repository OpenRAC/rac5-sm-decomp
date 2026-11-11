/* LEVEL_16:0x0757E0 -- placement copy of LEVEL_01_083A50.c: builds the centre and half-extent of a bounding box, runs the placement helper on two points, then moves both points by the object's offset. */

struct Q {
    char pad_00[0x34];
    float lo_34[3];
    float hi_40[3];
};

struct P {
    char pad_00[8];
    struct Q *q_08;
};

struct W {
    float m[12];
    float t_30[3];
    char pad_3C[4];
    struct P *p_40;
};

extern void func_0FB830(float *a, float *b, float *c, float *h, float *r0, float *r1, float *r2);

static __inline__ void Mid(float *d, float *a, float *b)
{
    float x;
    float y;
    float z;

    x = (a[0] + b[0]) * 0.5f;
    y = (a[1] + b[1]) * 0.5f;
    z = (a[2] + b[2]) * 0.5f;
    d[0] = x;
    d[1] = y;
    d[2] = z;
}

static __inline__ void Sub(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

static __inline__ void Add(float *d, float *t)
{
    d[0] += t[0];
    d[1] += t[1];
    d[2] += t[2];
}

int func_0757E0(float *a, float *b, struct W *w)
{
    struct Q *q;
    float c[3];
    float h[3];

    if (w->p_40 == 0) {
        return 0;
    }
    q = w->p_40->q_08;
    if (q == 0) {
        return 0;
    }
    Mid(c, q->lo_34, q->hi_40);
    Sub(h, c, q->lo_34);
    func_0FB830(a, b, c, h, w->m, w->m + 4, w->m + 8);
    Add(a, w->t_30);
    Add(b, w->t_30);
    return 1;
}
