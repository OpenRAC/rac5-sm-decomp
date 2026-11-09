/* LEVEL_04:0x034638 -- tests whether a target lies ahead of and within range of a facing point and reports its squared distance. */
typedef struct { char pad[0x20]; float dx; char pad24[4]; float dz; char pad2C[4]; float x; char pad34[4]; float z; } A;
typedef struct { char pad[0x30]; float x; char pad34[4]; float z; char pad3C[0x28]; unsigned flags; } B;
extern float sqrtf(float x);

int func_034638(A *a, B *b, float *out, float range, float thr)
{
    float v[2];
    float dot, len2, s;
    int ok;

    v[0] = b->x - a->x;
    v[1] = b->z - a->z;
    dot = a->dx * v[0] + a->dz * v[1];
    if (dot <= 0.0f)
        return 0;
    len2 = v[0] * v[0] + v[1] * v[1];
    if (range < len2)
        return 0;
    s = dot / sqrtf(len2);
    ok = thr <= s;
    if (ok != 0 && out != 0)
        *out = len2;
    return ok != 0 && (b->flags & 0x20) == 0;
}
