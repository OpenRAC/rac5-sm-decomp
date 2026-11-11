/* LEVEL_08:0x17B180 -- placement copy of LEVEL_04_16FDD8.c: sets up or settles the actor's drift vector: on start it picks a random direction mirrored by the pattern word, then probes the floor height and reports whether it landed. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    char pad_00[0x30];
    Vec3 pos;
    char pad_3C[9];
    unsigned char landed;
    char pad_46[0x12];
    float *state;
} Actor;

extern unsigned int D_00250884[1];
extern int rand(void);
extern int func_121DA0(Vec3 *pos, float *out);

static __inline__ void Copy(Vec3 *dst, Vec3 *src)
{
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}

int func_17B180(Actor *a, int mode)
{
    float *p;
    float k;
    Vec3 pos;
    unsigned int t;

    p = a->state;
    if (mode != 0) {
        p[1] = -((float)rand() * 4.656613e-10f) + 2.0f;
        p[0] = (float)rand() * 4.656613e-10f * 0.75f + 0.5f;
        p[2] = (float)rand() * 4.656613e-10f * 0.75f + 0.5f;
        t = D_00250884[0] & 3;
        if (t == 1 || t == 2)
            p[0] = -p[0];
        if (t == 2 || t == 3)
            p[2] = -p[2];
    } else {
        k = p[3];
        p[0] = p[0] * k;
        p[1] = p[1] * k;
        p[2] = p[2] * k;
    }
    p[3] = 0;
    p[4] = 0;
    Copy(&pos, &a->pos);
    pos.y = pos.y + 0.2f;
    if (func_121DA0(&pos, &p[4]) >= 0 && p[4] < 3.5f) {
        p[4] = p[4] - 0.2f;
        a->landed = 1;
        return 1;
    }
    return 0;
}
