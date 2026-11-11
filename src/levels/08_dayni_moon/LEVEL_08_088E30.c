/* LEVEL_08:0x088E30 -- placement copy of LEVEL_01_080E90.c: fills two vectors with the negative and positive extent of a shape, from the length of its vector plus its radius fields. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    int type_00;
    Vec3 v_04;
    char pad_10[4];
    float f_14;
    float f_18;
} Shape;

extern float sqrtf(float x);
extern void func_088D70(Vec3 *lo, Vec3 *hi, Vec3 *v, float *f);

static __inline__ float Len2(Vec3 *v)
{
    return v->x * v->x + v->y * v->y + v->z * v->z;
}

void func_088E30(Vec3 *lo, Vec3 *hi, Shape *s)
{
    switch (s->type_00) {
    case 5:
        func_088D70(lo, hi, &s->v_04, &s->f_14);
        break;
    case 0: {
        float a;
        float r;

        a = s->f_14;
        r = sqrtf(Len2(&s->v_04)) + a;
        lo->x = -r;
        lo->y = -r;
        lo->z = -r;
        hi->x = r;
        hi->y = r;
        hi->z = r;
        break;
    }
    case 4: {
        float a;
        float b;
        float r;
        float r2;

        a = s->f_14;
        b = s->f_18;
        r = sqrtf(Len2(&s->v_04)) + a;
        r2 = r + b;
        lo->x = -r;
        lo->y = -r;
        lo->z = -r;
        hi->x = r;
        hi->y = r2;
        hi->z = r;
        break;
    }
    }
}
