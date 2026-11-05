/* LEVEL_19.REL:0x002C38 -- projects a nearby point onto a horizontal radius. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern char *D_0019BE5C;
extern float sqrtf(float);

int func_002C38(float radius, Vec3 *out, const Vec3 *point)
{
    char *center = D_0019BE5C;
    float point_x = point->x;
    float center_x = *(float *)(center + 0x30);
    float center_z = *(float *)(center + 0x38);
    float point_z = point->z;
    float dx = point_x - center_x;
    float dz = point_z - center_z;
    float limit = radius + *(float *)(center + 0x294);
    float length_squared = dx * dx + dz * dz;

    if (length_squared < limit * limit) {
        if (length_squared < 2.3841858e-7f) {
            out->x = point_x;
            out->z = point_z + limit;
        } else {
            float factor = limit * (1.0f / sqrtf(length_squared));
            out->x = center_x + dx * factor;
            out->z = center_z + dz * factor;
        }
        out->y = point->y;
        return 1;
    }
    return 0;
}
