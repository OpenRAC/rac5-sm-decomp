typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    float f[4];
} Vec4;

typedef struct {
    float m[16];
} Matrix;

typedef struct {
    float v[4];
} Vector;

extern float sqrtf(float value);
extern void func_0DBC08(Matrix *out, float x, float y, float z, float angle);
extern void func_0DCBC0(Vec4 *out, Matrix *matrix, Vector *vector);

void func_03E410(Vec4 *out, Vector *vector, const Vec3 *other,
                 float angle)
{
    Matrix rotation;
    Vec3 axis;
    float length_squared;

    axis.x = vector->v[1] * other->z - vector->v[2] * other->y;
    axis.y = vector->v[2] * other->x - vector->v[0] * other->z;
    axis.z = vector->v[0] * other->y - vector->v[1] * other->x;
    length_squared = axis.x * axis.x + axis.y * axis.y + axis.z * axis.z;
    if (length_squared < 2.3841858e-7f)
        goto axis_ready;
    {
        float inverse_length = 1.0f / sqrtf(length_squared);
        axis.x *= inverse_length;
        axis.y *= inverse_length;
        axis.z *= inverse_length;
    }
axis_ready:
    func_0DBC08(&rotation, axis.x, axis.y, axis.z, angle);
    func_0DCBC0(out, &rotation, vector);
}
