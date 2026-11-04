/* Camera-distance adjustment candidate for LEVEL_01.REL:0x006300.
 * The field meanings and helper prototypes are provisional. The data flow
 * follows the measured float operations and local call relocations.
 */

typedef struct { float x, y, z; } Vec3;
typedef struct { float x, y, z, w; } Vec4;

typedef struct {
    unsigned char pad0[8];
    float x;
    float y;
    float distance;
    unsigned char pad1[4];
    unsigned char adjusted;
} CameraInput;

typedef struct {
    unsigned char pad0[0x40];
    unsigned long long flags;
    unsigned char pad1[0xD0 - 0x48];
    float duration;
    unsigned char pad2[0x290 - 0xD4];
    float current;
    float total;
    unsigned char pad3[0x2B4 - 0x298];
    float minimum;
} CameraSettings;

extern CameraSettings *D_001EF254;
extern void func_0025C8(float, float, float, Vec4 *, Vec4 *, Vec3 *);
extern void func_005B98(float, Vec3 *, Vec3 *, Vec3 *, Vec4 *, Vec4 *);
extern float func_005D30(float, float, float, float, Vec3 *, Vec3 *);
extern void func_005AC8(float, Vec3 *, Vec3 *, Vec4 *);
extern float sqrtf(float);
extern float fabsf(float);

void func_006300(CameraInput *input, Vec3 *origin)
{
    Vec4 first_a;
    Vec4 first_b;
    Vec3 first_p;
    Vec3 first_q;
    Vec3 direction;
    Vec4 second_a;
    Vec4 second_b;
    Vec3 second_p;
    Vec3 second_q;
    Vec3 moved;
    CameraSettings *settings;
    float base_ratio;
    float blend;
    float first_length;
    float second_length;
    float normalized;
    float lower_bound;
    float allowance;
    float threshold;
    float corrected;
    float bias;
    float near_limit;
    float far_limit;

    settings = D_001EF254;
    base_ratio = settings->current / settings->total;
    blend = base_ratio + (1.0f - base_ratio) * (input->distance / settings->duration);
    func_0025C8(input->x, input->y, input->distance, &first_a, &first_b, origin);
    func_005B98(blend, &first_p, &first_q, origin, &first_a, &first_b);

    direction.x = first_q.x - first_p.x;
    direction.y = first_q.y - first_p.y;
    direction.z = first_q.z - first_p.z;
    first_length = sqrtf(direction.x * direction.x + direction.y * direction.y +
                         direction.z * direction.z);
    normalized = 1.0f / first_length;
    direction.x *= normalized;
    direction.y *= normalized;
    direction.z *= normalized;

    settings = D_001EF254;
    base_ratio = settings->current / settings->total;
    lower_bound = (first_length + settings->minimum +
                   fabsf(settings->minimum - first_length)) * 0.5f;
    blend = base_ratio + (1.0f - base_ratio) * (settings->duration / settings->duration);
    func_0025C8(input->x, input->y, settings->duration, &second_a, &second_b, origin);
    func_005B98(blend, &second_p, &second_q, origin, &second_a, &second_b);

    second_length = sqrtf((second_q.x - second_p.x) * (second_q.x - second_p.x) +
                          (second_q.y - second_p.y) * (second_q.y - second_p.y) +
                          (second_q.z - second_p.z) * (second_q.z - second_p.z));
    settings = D_001EF254;
    near_limit = settings->current * 1.03f;
    far_limit = blend * settings->total * 1.03f;
    if ((((unsigned char)(settings->flags >> 2)) & 1) == 0 ||
        (((unsigned char)(settings->flags >> 6)) & 1) != 0) {
        allowance = 1.0f;
        bias = 1.5f;
    } else {
        allowance = 0.75000006f;
        bias = 0.75000006f;
    }
    threshold = (lower_bound - bias) + settings->minimum +
                fabsf(settings->minimum - (lower_bound - bias));
    corrected = func_005D30(second_length,
                            ((threshold + second_length + second_length) -
                             fabsf((second_length + second_length) - threshold)) * 0.25f - 0.1f,
                            near_limit,
                            far_limit,
                            &first_p, &direction);
    if (corrected < second_length) {
        /* This state flag changes even when the correction below is skipped. */
        input->adjusted = 1;
        if (corrected < lower_bound) {
            if (allowance < lower_bound - corrected)
                corrected = lower_bound - allowance;
            settings = D_001EF254;
            if (corrected < settings->minimum)
                corrected = settings->minimum;
            first_q.x = first_p.x + direction.x * corrected;
            first_q.y = first_p.y + direction.y * corrected;
            first_q.z = first_p.z + direction.z * corrected;
            moved.x = first_q.x - origin->x;
            moved.y = first_q.y - origin->y;
            moved.z = first_q.z - origin->z;
            func_005AC8(blend, &moved, &moved, &first_b);
            first_length = sqrtf(moved.x * moved.x + moved.y * moved.y + moved.z * moved.z);
            settings = D_001EF254;
            threshold = first_length + settings->minimum +
                        fabsf(settings->minimum - first_length);
            lower_bound = settings->duration + settings->duration;
            input->distance = ((threshold + lower_bound) - fabsf(lower_bound - threshold)) * 0.25f;
        }
    }
}
