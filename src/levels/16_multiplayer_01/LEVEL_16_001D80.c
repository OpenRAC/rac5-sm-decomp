/* LEVEL_16.REL:0x001D80 -- transforms an angle-derived vector and adds a base. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern void func_001B98(float angle_a, float angle_b, float length, Vec3 *out);
extern void func_1043B8(Vec3 *out, float *matrix, Vec3 *in);

void func_001D80(float angle_a, float angle_b, float length,
                 Vec3 *out, float *matrix, Vec3 *base)
{
    Vec3 direction;
    Vec3 transformed;

    func_001B98(angle_a, angle_b, length, &direction);
    func_1043B8(&transformed, matrix, &direction);
    out->x = base->x + transformed.x;
    out->y = base->y + transformed.y;
    out->z = base->z + transformed.z;
}
