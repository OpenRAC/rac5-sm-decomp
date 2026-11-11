/* LEVEL_17:0x013200 -- placement copy of LEVEL_02_013860.c: steps two damped spring axes of a heading toward a target and re-normalises the resulting direction. */
extern float sqrtf(float x);
extern float D_0018E324;

typedef struct Head {
    float x;
    float y;
    float z;
    float pad_0C[5];
    float ax;
    float ay;
    float az;
} Head;

static __inline__ int *MinP(int *a, int *b)
{
    return (*a < *b) ? a : b;
}

static __inline__ void Spring(float *pos, float *vel, float target, float k0, float k1, float limit, int steps)
{
    float acc;

    if (steps > 0) {
        do {
            acc = (target - *pos) * k0 - *vel * k1;
            *vel = acc;
            if (limit < acc) {
                *vel = limit;
            } else if (acc < -limit) {
                *vel = -limit;
            }
            steps--;
            *pos = *pos + *vel;
        } while (steps != 0);
    }
}

static __inline__ void Norm2(float *v)
{
    float len;

    len = v[0] * v[0] + v[2] * v[2];
    if (len < 2.3841858e-07f) {
        return;
    }
    len = 1.0f / sqrtf(len);
    v[0] = len * v[0];
    v[2] = len * v[2];
}

void func_013200(Head *h, float *vx, float *vz, float *target, float *k)
{
    int n1;
    int two1;
    int n2;
    int two2;

    two1 = 2;
    n1 = (int)(D_0018E324 * 59.998802f);
    Spring(&h->ax, vx, target[0], k[0], k[1], k[2], *MinP(&n1, &two1));
    *(float *)((char *)h + 0x24) = 0.0f;
    two2 = 2;
    n2 = (int)(D_0018E324 * 59.998802f);
    Spring(&h->az, vz, target[2], k[0], k[1], k[2], *MinP(&n2, &two2));
    Norm2(&h->ax);
    h->y = 0.0f;
    h->x = h->az;
    h->z = -h->ax;
}
