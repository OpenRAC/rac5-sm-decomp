/* LEVEL_09:0x003170 -- placement copy of LEVEL_01_003170.c: records a new target vector in the shared state, either snapping to it or starting a timed blend. */
typedef unsigned long u64;
typedef struct {
    float x, y, z;
} Vec3;
static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

typedef struct {
    unsigned char pad00[0x40];
    u64 flags;
    unsigned char pad48[0x16C - 0x48];
    Vec3 v16C;
    Vec3 v178;
    Vec3 v184;
    float f190;
    float f194;
    Vec3 v198;
} State;
extern State *D_001D9054[1];

void func_003170(float rate, Vec3 *pos, int snap)
{
    State *s;

    if (snap != 0 || ((unsigned char)(D_001D9054[0]->flags >> 14) & 1) != 0) {
        s = D_001D9054[0];
        s->v198 = *pos;
        s->v184 = D_001D9054[0]->v198;
        s->v16C = D_001D9054[0]->v184;
        D_001D9054[0]->f190 = 1.0f;
        if ((unsigned char)(D_001D9054[0]->flags >> 14) & 1) {
            D_001D9054[0]->flags |= 0x100;
        }
        D_001D9054[0]->flags &= ~0x20000ULL;
        return;
    }
    if (rate > 0.0f) {
        D_001D9054[0]->v178 = D_001D9054[0]->v16C;
        D_001D9054[0]->v184 = *pos;
        D_001D9054[0]->f190 = 0.0f;
        D_001D9054[0]->f194 = rate;
        D_001D9054[0]->flags |= 0x20000;
        return;
    }
    D_001D9054[0]->v184 = *pos;
    if ((unsigned char)(D_001D9054[0]->flags >> 17) & 1) {
        Copy3(&D_001D9054[0]->v178.x, &D_001D9054[0]->v16C.x);
        D_001D9054[0]->f190 = 0.0f;
        D_001D9054[0]->f194 = 0.033333335f;
        D_001D9054[0]->flags &= ~0x20000ULL;
    }
}
