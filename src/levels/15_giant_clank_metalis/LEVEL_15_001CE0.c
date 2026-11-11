/* LEVEL_15.REL:0x001CE0 -- transforms an angle-derived vector and adds a base. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern void func_001AF8(float angle_a, float angle_b, float length, Vec3 *out);
extern void func_0EA9E0(Vec3 *out, float *matrix, Vec3 *in);

void func_001CE0(float angle_a, float angle_b, float length,
                 Vec3 *out, float *matrix, Vec3 *base)
{
    Vec3 direction;
    Vec3 transformed;

    func_001AF8(angle_a, angle_b, length, &direction);
    func_0EA9E0(&transformed, matrix, &direction);
    out->x = base->x + transformed.x;
    out->y = base->y + transformed.y;
    out->z = base->z + transformed.z;
}
