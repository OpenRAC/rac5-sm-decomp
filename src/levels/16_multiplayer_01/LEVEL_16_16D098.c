/* LEVEL_16:0x16D098 -- starts the burst state: randomises the child's spin and drift, then drops the marker to the floor. */

typedef struct Child16D098 {
    char pad_00[0x44];
    float f_44;
    float f_48;
    float f_4C;
    int w_50;
    char pad_54[0x60 - 0x54];
    float f_60;
} Child16D098;

typedef struct Obj16D098 {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x45 - 0x3C];
    unsigned char b_45;
    char pad_46[0x58 - 0x46];
    Child16D098 *p_58;
    char pad_5C[0x70 - 0x5C];
    float f_70;
} Obj16D098;

extern int rand(void);
int func_0F2218(float *from, float *to);

static inline void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

void func_16D098(Obj16D098 *o)
{
    float tmp[4];
    Child16D098 *c;
    int k;
    float t3;
    float t2;

    k = 2;
    t3 = 3.0f;
    t2 = 2.0f;
    c = o->p_58;
    c->f_48 = (float)rand() * 4.6566129e-10f * t3 + t2;
    c->f_44 = (float)rand() * 4.6566129e-10f * 0.5f + 0.5f;
    c->f_4C = (float)rand() * 4.6566129e-10f * 0.5f + 0.5f;
    if (rand() % k != 0) {
        c->f_44 = -c->f_44;
    }
    if (rand() % k != 0) {
        c->f_4C = -c->f_4C;
    }
    c->w_50 = 0;
    Copy3(tmp, o->pos);
    tmp[1] = tmp[1] + 0.15f;
    if (func_0F2218(tmp, &c->f_60) >= 0) {
        c->f_60 = c->f_60 - 0.15f;
    } else {
        c->f_60 = 0.0f;
    }
    o->f_70 = 0.0f;
    o->b_45 = 1;
}
