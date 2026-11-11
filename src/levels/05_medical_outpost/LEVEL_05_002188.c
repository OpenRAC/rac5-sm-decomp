/* LEVEL_05.REL:0x002188 -- transforms an angle-derived vector and adds a base. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern void func_001FA0(float angle_a, float angle_b, float length, Vec3 *out);
extern void func_1217E8(Vec3 *out, float *matrix, Vec3 *in);

void func_002188(float angle_a, float angle_b, float length,
                 Vec3 *out, float *matrix, Vec3 *base)
{
    Vec3 direction;
    Vec3 transformed;

    func_001FA0(angle_a, angle_b, length, &direction);
    func_1217E8(&transformed, matrix, &direction);
    out->x = base->x + transformed.x;
    out->y = base->y + transformed.y;
    out->z = base->z + transformed.z;
}
