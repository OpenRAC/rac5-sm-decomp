/* LEVEL_15:0x0E5DC0 -- placement copy of LEVEL_01_1210A0.c: eases a direction toward a reference axis with a spring-damped angle: builds the cross and dot, reflects through a blended candidate when the dot is negative, and rotates the axis by the eased angle. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern float sqrtf(float);
extern float atan2f(float, float);
extern float cosf(float);
extern void func_0ED2D0(Vec3 *out, Vec3 *v, const Vec3 *n, float sine, float cosine);

void func_0E5DC0(float scale, float step, Vec3 *axis, float *remaining,
                 const Vec3 *from, const Vec3 *blend_target)
{
    Vec3 cross;
    Vec3 candidate;
    Vec3 blended;
    float dot;
    float len2;

    cross.x = from->y * axis->z - from->z * axis->y;
    cross.y = from->z * axis->x - from->x * axis->z;
    cross.z = from->x * axis->y - from->y * axis->x;
    dot = from->x * axis->x + from->y * axis->y + from->z * axis->z;
    len2 = cross.x * cross.x + cross.y * cross.y + cross.z * cross.z;
    if (dot < 0.0f) {
        float weight;
        float positive_dot = -dot;
        weight = 1.0f - positive_dot;
        blended.x = cross.x * weight + blend_target->x * positive_dot;
        blended.y = cross.y * weight + blend_target->y * positive_dot;
        blended.z = cross.z * weight + blend_target->z * positive_dot;
        candidate.x = axis->y * blended.z - axis->z * blended.y;
        candidate.y = axis->z * blended.x - axis->x * blended.z;
        candidate.z = axis->x * blended.y - axis->y * blended.x;
        len2 = candidate.x * candidate.x
             + candidate.y * candidate.y
             + candidate.z * candidate.z;
        if (len2 < 2.3841858e-7f) {
            candidate.x = from->x;
            candidate.y = from->y;
            candidate.z = from->z;
        } else {
            float inv = 1.0f / sqrtf(len2);
            candidate.x = inv * candidate.x;
            candidate.y = inv * candidate.y;
            candidate.z = inv * candidate.z;
        }
        if (candidate.x * from->x + candidate.y * from->y + candidate.z * from->z < 0.0f) {
            candidate.x = -candidate.x;
            candidate.y = -candidate.y;
            candidate.z = -candidate.z;
        }
        cross.x = candidate.y * axis->z - candidate.z * axis->y;
        cross.y = candidate.z * axis->x - candidate.x * axis->z;
        cross.z = candidate.x * axis->y - candidate.y * axis->x;
        dot = candidate.x * axis->x + candidate.y * axis->y + candidate.z * axis->z;
        len2 = cross.x * cross.x + cross.y * cross.y + cross.z * cross.z;
    } else {
        candidate = *from;
    }

    if (len2 < 2.3841858e-7f) {
        *remaining = 0.0f;
        *axis = candidate;
    } else {
        float length = sqrtf(len2);
        float angle = atan2f(length, dot);
        float traveled = (*remaining + angle * scale) * step;
        float new_angle = traveled + angle * step;
        *remaining = traveled - new_angle * scale;
        if (new_angle < 0.0f) {
            *remaining = 0.0f;
            *axis = candidate;
        } else {
            float inv = 1.0f / length;
            float cosine;
            float sine;
            blended.x = inv * cross.x;
            blended.y = inv * cross.y;
            blended.z = inv * cross.z;
            cosine = cosf(new_angle - angle);
            sine = sqrtf(1.0f - cosine * cosine);
            if (new_angle - angle < 0.0f)
                sine = -sine;
            func_0ED2D0(axis, axis, &blended, sine, cosine);
        }
    }
}
