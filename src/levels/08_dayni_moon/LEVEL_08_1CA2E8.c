/* LEVEL_08:0x1CA2E8 -- placement copy of LEVEL_04_1A4250.c: copies the global 64-byte matrix into the destination, then copies the position triple of the source. */
typedef struct {
    float f[16];
} Mat;

typedef struct {
    char pad0[0x30];
    float pos[3];
} Pose;

extern Mat D_00261A40;

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

void func_1CA2E8(Pose *src, Pose *dst)
{
    *(Mat *)dst = D_00261A40;
    Copy3(dst->pos, src->pos);
}
