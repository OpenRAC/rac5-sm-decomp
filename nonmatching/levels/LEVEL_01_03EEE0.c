/* LEVEL_01.REL:0x03EEE0 -- updates a direction and its horizontal length. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern float D_00231930;
extern float sqrtf(float);

void func_03EEE0(char *body)
{
    Vec3 *current = (Vec3 *)(body + 0x30);
    Vec3 *previous = (Vec3 *)(body + 0x278);
    Vec3 *difference = (Vec3 *)(body + 0x288);
    Vec3 *normalized = (Vec3 *)(body + 0x298);
    Vec3 delta;

    delta.x = current->x - previous->x;
    delta.y = current->y - previous->y;
    delta.z = current->z - previous->z;
    difference->x = delta.x;
    difference->y = delta.y;
    difference->z = delta.z;
    if (D_00231930 > 0.0f) {
        float inverse = 1.0f / D_00231930;
        normalized->x = inverse * delta.x;
        normalized->y = inverse * delta.y;
        normalized->z = inverse * delta.z;
    }
    *(float *)(body + 0x270) = sqrtf(delta.x * delta.x + delta.z * delta.z);
}
