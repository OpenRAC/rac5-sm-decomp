/* LEVEL_21:0x048570 -- placement copy of LEVEL_01_0572E0.c: resets the object's five-float tracks from its current track, asks the helper for a new target and, when one is found, latches it with zero velocity. */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Target {
    Vec3 pos;
    float vel[3];
} Target;

typedef struct Obj {
    char pad_000[0xCFC];
    float cur[5];
    float t1[5];
    float t2[5];
    float t3[5];
    float t4[5];
    Target tgt;
    Vec3 cand;
    unsigned char found;
} Obj;

typedef struct Args {
    char pad_00[0x10];
    int key;
} Args;

extern void func_0484C8(float *track, Args *a);
extern int func_048390(Vec3 *cand, int a, int key, float x, float y, float z);

void func_048570(Obj *o, Args *a)
{
    int i;
    int j;
    int k;
    int m;
    float *p;
    Target *t;

    p = o->cur;
    func_0484C8(p, a);
    for (i = 0; i < 5; i++) {
        o->t4[i] = p[i];
    }
    for (j = 0; j < 5; j++) {
        o->t2[j] = o->cur[j];
    }
    for (k = 0; k < 5; k++) {
        o->t1[k] = o->cur[k];
    }
    for (m = 0; m < 5; m++) {
        o->t3[m] = 0.0f;
    }
    if (func_048390(&o->cand, 0, a->key, o->cur[0], 0.0f, 0.0f)) {
        t = &o->tgt;
        o->tgt.pos = o->cand;
        t->vel[2] = 0.0f;
        t->vel[1] = 0.0f;
        t->vel[0] = 0.0f;
        o->found = 1;
    } else {
        o->found = 0;
    }
}
