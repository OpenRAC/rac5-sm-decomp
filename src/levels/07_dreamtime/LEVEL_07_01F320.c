/* LEVEL_07:0x01F320 -- placement copy of LEVEL_01_01EC60.c: pushes a point out of every primitive in a list, using the transform in V. */
extern float sqrtf(float x);
extern void func_128E80(float *out, float *m, float *src);
extern int func_120AA8(float *p, float r, float a, float b, float *c);
extern void func_120618(float *p, float r, float *c, float *s, float *m0, float *m1, float *m2, float k);

typedef struct {
    int type;
    float f[9];
} Prim;

void func_01F320(float *P, Prim *prims, int n, float *V, float r)
{
    Prim *e;
    Prim *end;
    float k = V[0] * V[0] + V[1] * V[1] + V[2] * V[2];
    float c[3];
    float *s;
    float rt;
    float t;
    float sq;
    float dx;
    float dy;
    float dz;
    float d2;
    float inv;
    float a;
    float b;
    float cx;
    float cy;
    float cz;
    float px;
    float py;
    float pz;

    e = prims;
    end = e + n;
    for (; e != end; e++) {
        switch (e->type) {
        case 0:
            s = e->f;
            t = s[4] * sqrtf(k);
            func_128E80(c, V, s);
            rt = r + t;
            px = P[0];
            py = P[1];
            pz = P[2];
            cx = c[0];
            cy = c[1];
            cz = c[2];
            dx = px - cx;
            dy = py - cy;
            dz = pz - cz;
            d2 = dx * dx + dy * dy + dz * dz;
            if (rt * rt <= d2)
                continue;
            if (d2 < 1.0000001e-06f) {
                P[1] = P[1] + rt;
                continue;
            }
            inv = rt * (1.0f / sqrtf(d2));
            P[0] = cx + dx * inv;
            P[1] = cy + dy * inv;
            P[2] = cz + dz * inv;
            break;
        case 4:
            s = e->f;
            sq = sqrtf(k);
            a = s[4] * sq;
            b = s[5] * sq;
            func_128E80(c, V, s);
            func_120AA8(P, r, a, b, c);
            break;
        case 5:
            func_128E80(c, V, e->f);
            func_120618(P, r, c, e->f + 4, V, V + 4, V + 8, k);
            break;
        }
    }
}
