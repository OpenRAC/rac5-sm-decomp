/* LEVEL_16:0x08F2C8 -- placement copy of LEVEL_01_0A0008.c: advances two particle groups, culling expired particles and tracking the peak value. */
typedef struct Part { float a, b, c, d; } Part;
typedef struct Group {
    char pad0[0x14];
    float peak;
    Part parts[16];
    int count;
} Group;
extern Group D_002541D0[];

void func_08F2C8(float dt)
{
    unsigned int i;
    float peak;
    Group *g;
    Part *p;
    Part *end;
    float *q;
    float t;
    for (i = 0; i < 2; i++) {
        peak = 0.0f;
        g = &D_002541D0[i];
        p = g->parts;
        end = &g->parts[g->count];
        while (p != end) {
            t = p->c;
            p->a = p->a - p->b * t * dt;
            p->c = t + p->d * dt;
            if (p->a <= 0.5f || 1.0f <= t) {
                end--;
                *p = *end;
            } else {
                q = &p->a;
                if (p->a < peak)
                    q = &peak;
                peak = *q;
                p++;
            }
        }
        g->count = end - g->parts;
        g->peak = peak;
    }
}
