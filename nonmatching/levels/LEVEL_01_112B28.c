/* USA LEVEL_01.REL:0x112B28. Candidate local-space projection and
 * iterative face response. The fourth components of the local vectors
 * are not yet identified. */
typedef struct { float x, y, z; } Vec3;
typedef struct { float m[16]; } Mat4;
typedef struct { float x, y, z, w; } Vec4;
typedef struct { Vec4 difference, projected, nearest, separation, dots; } Work;

extern float sqrtf(float value);
extern int func_110D70(Vec3 *out, const void *face, const Vec3 *vertices,
                       const Vec3 *point, float radius);
extern void func_125E78(Vec3 *out, const Mat4 *matrix, const Vec3 *point);

int func_112B28(Vec3 *point, const char *shape, const Mat4 *matrix, float radius)
{
    Work work;
    float inverse_length;
    float inverse_length_squared;
    float radius_in_local_space;
    const char *face;
    const char *end;
    const Vec3 *vertices;
    int found;
    const Vec3 *column1;
    const Vec3 *column2;
    const Vec3 *translation;

    inverse_length = 1.0f / sqrtf(matrix->m[0] * matrix->m[0]
                                  + matrix->m[1] * matrix->m[1]
                                  + matrix->m[2] * matrix->m[2]);
    inverse_length_squared = inverse_length * inverse_length;
    radius_in_local_space = radius * inverse_length;

    column1 = (const Vec3 *)&matrix->m[4];
    column2 = (const Vec3 *)&matrix->m[8];
    translation = (const Vec3 *)&matrix->m[12];

    work.difference.x = point->x - translation->x;
    work.difference.y = point->y - translation->y;
    work.difference.z = point->z - translation->z;
    work.projected.x = (work.difference.x * matrix->m[0]
                   + work.difference.y * matrix->m[1]
                   + work.difference.z * matrix->m[2]) * inverse_length_squared;
    work.projected.y = (work.difference.x * column1->x
                   + work.difference.y * column1->y
                   + work.difference.z * column1->z) * inverse_length_squared;
    work.projected.z = (work.difference.x * column2->x
                   + work.difference.y * column2->y
                   + work.difference.z * column2->z) * inverse_length_squared;

    if (work.projected.x + radius_in_local_space < *(const float *)(shape + 0x34)
        || work.projected.y + radius_in_local_space < *(const float *)(shape + 0x38)
        || work.projected.z + radius_in_local_space < *(const float *)(shape + 0x3C)
        || *(const float *)(shape + 0x40) < work.projected.x - radius_in_local_space
        || *(const float *)(shape + 0x44) < work.projected.y - radius_in_local_space
        || *(const float *)(shape + 0x48) < work.projected.z - radius_in_local_space)
        return 0;

    face = *(const char * const *)(shape + 0x0C);
    end = face + *(const int *)(shape + 4) * 0x4C;
    vertices = *(const Vec3 * const *)(shape + 8);
    found = 0;
    while (face != end) {
        if (func_110D70((Vec3 *)&work.nearest, face, vertices, (Vec3 *)&work.projected,
                        radius_in_local_space)) {
            float distance_squared;
            float scale;
            found = 1;
            work.separation.x = work.nearest.x - work.projected.x;
            work.separation.y = work.nearest.y - work.projected.y;
            work.separation.z = work.nearest.z - work.projected.z;
            distance_squared = work.separation.x * work.separation.x
                               + work.separation.y * work.separation.y
                               + work.separation.z * work.separation.z;
            if (0.0000010000001111620804f < distance_squared) {
                scale = 1.0f - radius_in_local_space
                        * (1.0f / sqrtf(distance_squared));
                work.projected.x += work.separation.x * scale;
                work.projected.y += work.separation.y * scale;
                work.projected.z += work.separation.z * scale;
            } else {
                const Vec3 *normal = (const Vec3 *)(face + 8);
                scale = radius_in_local_space * inverse_length_squared;
                work.dots.x = normal->x * matrix->m[0]
                            + normal->y * matrix->m[1]
                            + normal->z * matrix->m[2];
                work.projected.x += work.dots.x * scale;
                work.dots.y = normal->x * column1->x
                            + normal->y * column1->y
                            + normal->z * column1->z;
                work.projected.y += work.dots.y * scale;
                work.dots.z = normal->x * column2->x
                            + normal->y * column2->y
                            + normal->z * column2->z;
                work.projected.z += work.dots.z * scale;
            }
        }
        face += 0x4C;
    }

    if (found) {
        func_125E78(point, matrix, (Vec3 *)&work.projected);
        return 1;
    }
    return 0;
}
