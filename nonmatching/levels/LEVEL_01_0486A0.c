/* USA LEVEL_01.REL:0x0486A0, 372-byte candidate (21 November 2026).
 * Measured pinned: 30 differing words; first difference at 0x64.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Spring_0486A0 {
    char pad0[0x23C];
    float pos;
    float target;
    float vel;
    float gain;
    float damp;
    float limit;
};

extern float D_001EF29C;
extern float func_048948(struct Spring_0486A0 *obj);

static __inline__ int *MinRef(int *a, int *b)
{
    return *a < *b ? a : b;
}

static __inline__ void StepSpring(float *pos, float *vel, float target, float gain, float damp, float limit, int count)
{
    float accel;
    int i;

    for (i = 0; i < count; i++) {
        accel = (target - *pos) * gain - *vel * damp;
        *vel = accel;
        if (accel > limit) {
            *vel = limit;
        } else if (accel < -limit) {
            *vel = -limit;
        }
        *pos = *pos + *vel;
    }
}

void func_0486A0(struct Spring_0486A0 *obj)
{
    float dt;
    float gain;
    int two;
    int n;

    dt = func_048948(obj);
    gain = obj->gain;
    if (dt > 3.1415927f / 9.0f && obj->target > 0.0030000003f) {
        gain = 0.02f;
    } else if (obj->target == 0.0f) {
        gain = gain * 2.0f;
    } else if (obj->target < obj->pos) {
        gain = gain * 1.5f;
    }
    two = 2;
    n = (int)(D_001EF29C * (1.0f / 0.016667f));
    StepSpring(&obj->pos, &obj->vel, obj->target, gain, obj->damp, obj->limit, *MinRef(&n, &two));
}
