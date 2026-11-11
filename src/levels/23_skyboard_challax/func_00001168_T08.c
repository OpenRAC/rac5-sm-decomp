/* Add a 3-vector to the sub-record at +0x30 of the current global record. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern void *D_001C2648;

void func_00001168(const float *delta) {
    Vec3 *pos = (Vec3 *)((char *)D_001C2648 + 0x30);

    pos->x += delta[0];
    pos->y += delta[1];
    pos->z += delta[2];
}
