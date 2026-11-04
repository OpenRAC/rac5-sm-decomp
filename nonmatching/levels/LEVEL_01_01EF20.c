/* USA LEVEL_01.REL:0x01EF20. Retained C hypothesis, not a match.
 * The gnu-ee-trial-divpad profile links 1168 bytes against the 1168-byte
 * candidate body, first differing at body byte 340 (extra sqrt padding). */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct { float m[16]; } Mat4;
typedef union { Vec3 vector; float floats[9]; int words[9]; } RecordPayload;

extern Vec3 D_00217E88;
extern float sqrtf(float);
extern void func_125E78(Vec3 *, Mat4 *, Vec3 *);
extern int func_11DB30(float, float, float, float *, Vec3 *, Vec3 *,
                       Vec3 *, Vec3 *);
extern float func_11D330(Vec3 *, const Vec3 *, const float *, const float *,
                         const float *, const float *, const Vec3 *);

int func_01EF20(float radius, float *radius_out, Vec3 *position_out,
                Vec3 *normal_out, const Vec3 *point, int *records,
                int count, Mat4 *transform)
{
    float *out = radius_out;
    float current_radius = radius;
    Vec3 local;
    Vec3 delta;
    Vec3 normal;
    Vec3 offset;
    int *end = records + count * 10;
    float direction_sq = transform->m[0] * transform->m[0]
                       + transform->m[1] * transform->m[1]
                       + transform->m[2] * transform->m[2];
    const float epsilon = 2.3841858e-7f;
    int hit = 0;

    if (records != end) {
        do {
            switch (*records) {
            case 0: {
                    float distance, bound, shape_radius;
                    float radius_scale;
                    RecordPayload *payload = (RecordPayload *)(records + 1);
                    radius_scale = sqrtf(direction_sq);
                    shape_radius = payload->floats[4] * radius_scale;
                    func_125E78(&local, transform, &payload->vector);
                    delta.x = point->x - local.x;
                    delta.y = point->y - local.y;
                    delta.z = point->z - local.z;
                    distance = sqrtf(delta.x * delta.x
                                   + delta.y * delta.y
                                   + delta.z * delta.z);
                    bound = current_radius + shape_radius;
                    if (distance < bound * bound) {
                        if (distance < epsilon) {
                            current_radius = 0.0f;
                            normal_out->x = D_00217E88.x;
                            normal_out->y = D_00217E88.y;
                            normal_out->z = D_00217E88.z;
                            position_out->x = point->x;
                            position_out->y = point->y;
                            position_out->z = point->z;
                        } else {
                            float root = sqrtf(distance);
                            float penetration = root - shape_radius;
                            float inv = 1.0f / root;
                            normal.x = inv * delta.x;
                            normal.y = inv * delta.y;
                            normal.z = inv * delta.z;
                            current_radius = (penetration + __builtin_fabsf(penetration)) * 0.5f;
                            position_out->x = point->x - normal.x * current_radius;
                            position_out->y = point->y - normal.y * current_radius;
                            position_out->z = point->z - normal.z * current_radius;
                            normal_out->x = normal.x;
                            normal_out->y = normal.y;
                            normal_out->z = normal.z;
                        }
                        hit = 1;
                    }
                            } break;
            case 4: {
                float distance, bound, shape_radius;
                RecordPayload *payload = (RecordPayload *)(records + 1);
                distance = sqrtf(direction_sq);
                shape_radius = payload->floats[4] * distance;
                bound = payload->floats[5] * distance;
                func_125E78(&local, transform, &payload->vector);
                if (func_11DB30(current_radius, shape_radius, bound,
                                &current_radius, position_out, normal_out,
                                (Vec3 *)point, &local) != 0)
                    hit = 1;
                        } break;
            case 5: {
                float distance, bound;
                RecordPayload *payload = (RecordPayload *)(records + 1);
                func_125E78(&local, transform, &payload->vector);
                distance = func_11D330(&delta, &local, &payload->floats[4],
                                       transform->m, transform->m + 4,
                                       transform->m + 8, point);
                if (distance < current_radius * current_radius) {
                    if (distance < epsilon) {
                        current_radius = 0.0f;
                        position_out->x = point->x;
                        position_out->y = point->y;
                        position_out->z = point->z;
                        normal_out->x = D_00217E88.x;
                        normal_out->y = D_00217E88.y;
                        normal_out->z = D_00217E88.z;
                    } else {
                        current_radius = sqrtf(distance);
                        bound = -1.0f / current_radius;
                        offset.x = delta.x - point->x;
                        offset.y = delta.y - point->y;
                        offset.z = delta.z - point->z;
                        position_out->x = delta.x;
                        position_out->y = delta.y;
                        position_out->z = delta.z;
                        normal_out->x = bound * offset.x;
                        normal_out->y = bound * offset.y;
                        normal_out->z = bound * offset.z;
                    }
                    hit = 1;
                }
                        } break;
            default: break;
            }
            records += 10;
            if (records == end)
                break;
        } while (1);
    }
    *out = current_radius;
    return hit;
}
