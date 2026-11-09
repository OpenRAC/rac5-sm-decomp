/* LEVEL_17:0x14EAF0 -- picks a random unit direction for the object's state and clears two of its fields. */

struct Sub {
    char pad_00[0x14];
    float v_14[3];
    char pad_20[0x2C - 0x20];
    float f_2C;
    float f_30;
};

struct Obj {
    char pad_00[0x58];
    struct Sub *p_58;
};

extern int rand(void);
extern float cosf(float x);
extern float sqrtf(float x);

void func_14EAF0(struct Obj *o)
{
    struct Sub *s;
    float theta;
    float c;
    float sn;
    float rho;
    float *v;

    s = o->p_58;
    v = s->v_14;
    v[2] = (float) rand() * 9.3132257e-10f - 1.0f;
    theta = (float) rand() * 2.9258362e-09f - 3.14159274f;
    c = cosf(theta);
    sn = sqrtf(1.0f - c * c);
    if (theta < 0.0f) {
        sn = -sn;
    }
    rho = sqrtf(1.0f - v[2] * v[2]);
    v[0] = c * rho;
    v[1] = sn * rho;
    s->f_2C = 0.0f;
    s->f_30 = 0.0f;
}
