/* LEVEL_10.REL:0x001EB8 -- transforms an angle-derived vector and adds a base. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern void func_001D50(float angle_a, float angle_b, float length, Vec3 *out);
extern void func_123AF8(Vec3 *out, float *matrix, Vec3 *in);

void func_001EB8(float angle_a, float angle_b, float length,
                 Vec3 *out, float *matrix, Vec3 *base)
{
    Vec3 direction;
    Vec3 transformed;

    func_001D50(angle_a, angle_b, length, &direction);
    func_123AF8(&transformed, matrix, &direction);
    out->x = base->x + transformed.x;
    out->y = base->y + transformed.y;
    out->z = base->z + transformed.z;
}
