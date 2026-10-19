/* Add a 3-vector to the sub-record at +0x1A4 of the selected level record. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern void *D_0014E5D4;

void func_000030B0(const float *delta) {
    Vec3 *pos = (Vec3 *)((char *)D_0014E5D4 + 0x1A4);

    pos->x += delta[0];
    pos->y += delta[1];
    pos->z += delta[2];
}
