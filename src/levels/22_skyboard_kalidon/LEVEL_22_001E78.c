/* LEVEL_22.REL:0x001E78 -- transforms an angle-derived vector and adds a base. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern void func_001D10(float angle_a, float angle_b, float length, Vec3 *out);
extern void func_0FDE50(Vec3 *out, float *matrix, Vec3 *in);

void func_001E78(float angle_a, float angle_b, float length,
                 Vec3 *out, float *matrix, Vec3 *base)
{
    Vec3 direction;
    Vec3 transformed;

    func_001D10(angle_a, angle_b, length, &direction);
    func_0FDE50(&transformed, matrix, &direction);
    out->x = base->x + transformed.x;
    out->y = base->y + transformed.y;
    out->z = base->z + transformed.z;
}
