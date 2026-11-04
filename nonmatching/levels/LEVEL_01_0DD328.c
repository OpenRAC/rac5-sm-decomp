/* Candidate for LEVEL_01.REL:0x0DD328. Field names and allocation contract are provisional. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    Vec3 position;
    int kind;
    float random_sin;
    float random_cos;
    float scalar_14;
    float scalar_16;
    int extra;
    int id;
    float scalar_12;
    float scalar_15;
    float cosine;
    float sine;
} Particle;

extern Particle *func_097658(int *, void *, int);
extern int rand(void);
extern float cosf(float);
extern float sqrtf(float);

void func_0DD328(void *pool, int id, int kind, const Vec3 *position, int extra,
                 float scalar_12, float angle, float scalar_14,
                 float scalar_15, float scalar_16)
{
    int allocation_state[4];
    Particle *particle;
    float random_angle;
    float random_cos;
    float random_sin;
    float cosine;
    float sine;

    allocation_state[0] = -1;
    particle = func_097658(allocation_state, pool, 1);
    if (particle == 0)
        return;

    particle->scalar_14 = scalar_14;
    particle->scalar_16 = scalar_16;
    particle->scalar_15 = scalar_15;
    particle->id = id;
    particle->scalar_12 = scalar_12;
    particle->kind = kind;
    particle->extra = extra;

    random_angle = (float)rand() * 0x1p-31f * 6.2831855f + -3.1415927f;
    random_cos = cosf(random_angle);
    random_sin = sqrtf(1.0f - random_cos * random_cos);
    if (random_angle < 0.0f)
        random_sin = -random_sin;
    particle->random_cos = random_cos;
    particle->random_sin = random_sin;

    cosine = cosf(angle);
    sine = sqrtf(1.0f - cosine * cosine);
    if (angle < 0.0f)
        sine = -sine;
    particle->sine = sine;
    particle->cosine = cosine;

    particle->position.x = position->x;
    particle->position.y = position->y;
    particle->position.z = position->z;
}
