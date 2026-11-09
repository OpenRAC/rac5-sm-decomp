/* LEVEL_10.REL:0x18FA88: reviewed 664-byte candidate, held for ABI review.
 * Spawns a batch of particles with randomized position, direction and life.
 * gnu-ee-trial-divpad C with r5900-mfc1 links 664/664 bytes and is byte-exact
 * at this USA placement, but the prototypes disagree.
 * It declares func_097AF0 returning pointer with (pointer, pointer, int), but
 * the accepted LEVEL_10_097AF0.c defines it returning void with (pointer, int,
 * long long).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    float x0;
    float x1;
    float y0;
    float y1;
    float z0;
    float z1;
    float scale;
    int tag;
} Cfg;

typedef struct {
    float pos[3];
    float vel[3];
    int zero;
    float invLife;
    int tag;
    float zv;
    float param;
} Particle;

extern int rand(void);
extern float fabsf(float);
extern Particle *func_097AF0(int *n, void *a, int count);
extern void func_11FBB0(float *out, float a, float b);

static inline float RandRange(float lo, float hi)
{
    float span = hi - lo;

    return lo + span * ((float)rand() * 4.656612873077393e-10f);
}

static inline float RandStep(float x)
{
    float q = (float)(int)(x * 7.826379260222893e-06f);

    return fabsf((x - q * 127773.0f) * 16807.0f - q * 2836.0f);
}

void func_18FA88(void *a, float *center, Cfg *cfg, int count, float param)
{
    Particle *recs;
    Particle *r;
    Particle *end;
    int n;
    float v[4];
    float *q;
    float x;
    float y;
    float z;
    float s;
    float x5;
    float dx;
    float dy;
    float dz;

    while (count > 0) {
        recs = func_097AF0(&n, a, count);
        if (n == 0)
            break;
        end = recs + n;
        for (r = recs; r != end; r++) {
            x = RandRange(cfg->x0, cfg->x1);
            y = RandRange(cfg->y0, cfg->y1);
            z = RandRange(cfg->z0, cfg->z1);
            s = (float)rand() * 4.6566123179658803e-10f * cfg->scale;
            x5 = (float)rand();
            func_11FBB0(v, x5, RandStep(x5));
            q = r->vel;
            q[3] = 0;
            q[4] = 1.0f / y;
            q[-3] = center[0] + v[0] * s;
            q[-2] = center[1] + v[1] * s;
            q[-1] = center[2] + v[2] * s;
            q[0] = x * v[0];
            q[1] = x * v[1];
            q[2] = x * v[2];
            *(int *)&q[5] = cfg->tag;
            q[6] = z;
            q[7] = param;
        }
        count -= n;
    }
}
