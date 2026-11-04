/* USA LEVEL_01.REL:0x0694A0. Private C reconstruction, not a match. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    float m[16];
} Mat4;

extern float sqrtf(float);
extern void func_127598(Vec3 *, Vec3 *, Vec3 *);
extern void func_1257D0(Mat4 *, Mat4 *, Mat4 *);
extern void func_125E78(Vec3 *, Mat4 *, Vec3 *);
extern float func_01D880(float, float, Vec3 *, Vec3 *, int, int);
extern float D_00239230;

void func_0694A0(char *state, Mat4 *out, Vec3 *point)
{
    Vec3 base;
    Vec3 height;
    Vec3 raw;
    Mat4 local;
    Vec3 origin;
    Vec3 endpoint;
    Vec3 delta;
    Vec3 normal;
    float inverse;
    float distance;
    float hit;
    float correction;
    float residual;
    float velocity;
    float impulse;
    float position;
    Vec3 *state_forward;
    Vec3 *state_origin;
    Vec3 *out_translation;

#define S(off) (*(float *)(state + (off)))
    base.x = S(0xF64) - S(0xF84);
    base.y = S(0xF68) + S(0xF7C);
    base.z = S(0xF6C) - S(0xF80);
    height.x = 0.0f;
    height.y = 0.0f;
    height.z = S(0xF98);
    raw.x = height.x - base.x;
    raw.y = height.y - base.y;
    raw.z = height.z - base.z;
    inverse = 1.0f / sqrtf(raw.x * raw.x + raw.y * raw.y
                           + raw.z * raw.z);
    local.m[8] = inverse * raw.x;
    local.m[9] = inverse * raw.y;
    local.m[10] = inverse * raw.z;

    state_forward = (Vec3 *)(state + 0xE38);
    state_origin = (Vec3 *)(state + 0xE48);
    out_translation = (Vec3 *)&out->m[12];
    func_127598((Vec3 *)&local.m[0], (Vec3 *)&local.m[4],
                (Vec3 *)&local.m[8]);
    local.m[12] = S(0xF64);
    local.m[13] = S(0xF68);
    local.m[14] = S(0xF6C);
    func_1257D0((Mat4 *)(state + 0xE18), &local,
                 (Mat4 *)(state + 0xDD8));

    out->m[0] = S(0xE28);
    out->m[1] = S(0xE2C);
    out->m[2] = S(0xE30);
    out->m[4] = -state_forward->x;
    out->m[5] = -state_forward->y;
    out->m[6] = -state_forward->z;
    out->m[8] = -S(0xE18);
    out->m[9] = -S(0xE1C);
    out->m[10] = -S(0xE20);
    out_translation->x = state_origin->x;
    out_translation->y = state_origin->y;
    out_translation->z = state_origin->z;
    func_125E78(out_translation, out, point);

    origin = *state_origin;
    distance = S(0xF88);
    endpoint.x = out_translation->x + state_forward->x * distance;
    endpoint.y = out_translation->y + state_forward->y * distance;
    endpoint.z = out_translation->z + state_forward->z * distance;
    delta.x = endpoint.x - origin.x;
    delta.y = endpoint.y - origin.y;
    delta.z = endpoint.z - origin.z;
    distance = sqrtf(delta.x * delta.x + delta.y * delta.y
                     + delta.z * delta.z);
    inverse = 1.0f / distance;
    normal.x = inverse * delta.x;
    normal.y = inverse * delta.y;
    normal.z = inverse * delta.z;
    hit = func_01D880(distance, S(0xF94), &origin, &normal, 0x60, 0);
    if (hit < 0.0f)
        hit = 0.0f;

    correction = delta.x * state_forward->x + delta.y * state_forward->y
               + delta.z * state_forward->z;
    correction -= (normal.x * state_forward->x + normal.y * state_forward->y
                   + normal.z * state_forward->z) * hit;
    residual = S(0xF8C) - correction;
    velocity = (S(0xF90) + residual * 0.5f) * D_00239230;
    impulse = velocity + residual * D_00239230;
    position = impulse + correction;
    S(0xF8C) = position;
    S(0xF90) = velocity - impulse * 0.5f;
    out_translation->x -= state_forward->x * position;
    out_translation->y -= state_forward->y * position;
    out_translation->z -= state_forward->z * position;
#undef S
}
