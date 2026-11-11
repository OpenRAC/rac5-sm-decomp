/* LEVEL_02:0x1D1BF0 */
typedef struct {
    char pad_00[0x30];
    float f30;
    float f34;
    float f38;
    char pad_3C[0x09];
    unsigned char b45;
    char pad_46[0x1E];
    int w64;
} Obj;
typedef struct { float x, y, z; } Vec;
extern float fabsf(float x);

int func_1D1BF0(Obj *a0, Vec *a1)
{
    int m = a0->w64 & 7;
    float dy, dx, dz;

    if (m != 1 || a0->b45 != m)
        return 0;
    dy = a0->f34 - a1->y;
    if (fabsf(dy) > 0.8f)
        return 0;
    dx = a1->x - a0->f30;
    dz = a1->z - a0->f38;
    return dx * dx + dz * dz < 9.0f;
}
