/* LEVEL_15:0x1305B0 -- copies the global 12-byte vector into the destination. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern Vec3 D_002F3DEC;

void func_1305B0(Vec3 *dst)
{
    *dst = D_002F3DEC;
}
