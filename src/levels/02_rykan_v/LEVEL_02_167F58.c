/* LEVEL_02:0x167F58 -- selects a valid spaced ring position around a center by sorting candidate angular offsets and testing placement clearance. */
extern float fmodf(float, float);
extern float cosf(float);
extern float sinf(float);
extern float fabsf(float);
extern void qsort(void *base, unsigned int nmemb, unsigned int size, int (*compar)(const void *, const void *));

typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct OutPos {
    float x;
    float z;
} OutPos;

typedef struct Obj167F58 {
    int pad00;
    OutPos *p04;
} Obj167F58;

extern int func_168988(const void *a, const void *b);
extern int func_031128(OutPos *p04, Vec3 *pos, int a2, float f12);

static __inline__ float WrapAngle(float a)
{
    float r = fmodf(a, 6.2831854820251465f);
    if (r < -3.1415927410125732f) {
        r += 6.2831854820251465f;
    } else if (r >= 3.1415927410125732f) {
        r -= 6.2831854820251465f;
    }
    return r;
}

int func_167F58(Obj167F58 *o, float *angles, unsigned int count, unsigned int selfIdx, Vec3 *center, float radius)
{
    float cand[16];
    float used[8];
    Vec3 testPos;
    float selfAng = angles[selfIdx];
    unsigned int numUsed = 0;
    unsigned int numCand;
    unsigned int i;
    unsigned int j;

    for (i = 0; i < count; i++) {
        if (i != selfIdx) {
            float diff = angles[i] - selfAng;
            cand[numUsed * 2] = WrapAngle(diff + 0.7853981852531433f);
            cand[numUsed * 2 + 1] = WrapAngle(diff - 0.7853981852531433f);
            used[numUsed] = WrapAngle(diff);
            numUsed++;
        }
    }

    numCand = numUsed * 2;
    qsort(cand, numCand, 4, func_168988);

    for (j = 0; j < numCand; j++) {
        int ok = 1;
        unsigned int k;

        for (k = 0; k < numUsed; k++) {
            if (fabsf(used[k] - cand[j]) < 0.7853981852531433f) {
                ok = 0;
                break;
            }
        }

        if (ok != 0) {
            float ang = cand[j] + selfAng;
            testPos.x = center->x + radius * cosf(ang);
            testPos.y = center->y;
            testPos.z = center->z + radius * sinf(ang);
            if (func_031128(o->p04, &testPos, 1, 0.75f) != 0) {
                angles[selfIdx] = ang;
                o->p04->x = testPos.x;
                o->p04->z = testPos.z;
                return 1;
            }
        }
    }

    return 0;
}
