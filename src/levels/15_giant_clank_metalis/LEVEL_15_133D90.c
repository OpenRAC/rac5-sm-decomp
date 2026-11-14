/* LEVEL_15:0x133D90 -- placement copy of LEVEL_15_1305B0.c: copies the global 12-byte vector into the destination. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern Vec3 D_0016C5D8;

void func_133D90(Vec3 *dst)
{
    *dst = D_0016C5D8;
}
