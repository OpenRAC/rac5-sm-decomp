/* USA LEVEL_01.REL:0x00A320. Position and angle spring update.
 * Nonmatching with gnu-ee-trial-divpad: 876/928 linked bytes; first difference
 * at body byte 18 (global pointer register selection). */
typedef unsigned long long u64;
typedef struct { float x, y, z; } Vec3;
typedef struct { float m[9]; } Mat3;
typedef struct { float x, y, z, w; } Quat;
typedef struct { float current, velocity, target; } AngleSpring;
typedef struct {
    unsigned char pad00[0x40];
    u64 flags;
    unsigned char pad48[0xE8 - 0x48];
    Mat3 setup;
    Vec3 position;
    float position_velocity;
    Vec3 target_position;
    AngleSpring angle[3];
    unsigned char pad14C[0x380 - 0x14C];
    Quat setup_target;
    Vec3 next_position;
    float next_angle[3];
} State;

extern State *D_001EF254;
extern float D_0022BB34, D_0022BB38, D_0022BB3C, D_0022BB40;
extern void func_122F30(Mat3 *, const Quat *);
extern float sqrtf(float);

void func_00A320(void)
{
    State *state;
    float dx, dy, dz, distance;
    float tx, ty, tz, position_scale;
    float damping;
    float interim, next, ratio;
    float angular_delta, angular_interim, angular_next, updated;
    float delta1, interim1, next1;
    float delta2, interim2, next2;

    state = D_001EF254;
    func_122F30(&state->setup, &state->setup_target);
    damping = 1.6666667f;
    D_001EF254->target_position = D_001EF254->next_position;
    D_001EF254->angle[0].target = D_001EF254->next_angle[0];
    D_001EF254->angle[1].target = D_001EF254->next_angle[1];
    D_001EF254->angle[2].target = D_001EF254->next_angle[2];

    state = D_001EF254;
    position_scale = D_0022BB34;
    tx = state->target_position.x;
    ty = state->target_position.y;
    tz = state->target_position.z;
    dx = state->position.x - tx;
    dy = state->position.y - ty;
    dz = state->position.z - tz;
    distance = sqrtf(dx * dx + dy * dy + dz * dz);
    interim = (state->position_velocity + distance * damping) * position_scale;
    next = interim + distance * position_scale;
    state->position_velocity = interim - next * damping;
    if (next <= 0.0f) {
        state->position.x = tx;
        state->position.y = ty;
        state->position.z = tz;
        state->position_velocity = 0.0f;
    } else {
        ratio = next / distance;
        state->position.x = tx + dx * ratio;
        state->position.y = ty + dy * ratio;
        state->position.z = tz + dz * ratio;
    }

    if ((D_001EF254->flags & 0x200) != 0) {
        D_001EF254->angle[0].current = D_001EF254->angle[0].target;
        D_001EF254->angle[0].velocity = 0.0f;
        D_001EF254->angle[1].current = D_001EF254->angle[1].target;
        D_001EF254->angle[1].velocity = 0.0f;
        D_001EF254->angle[2].current = D_001EF254->angle[2].target;
        D_001EF254->angle[2].velocity = 0.0f;
        return;
    }

    state = D_001EF254;
    angular_delta = state->angle[0].current - state->angle[0].target;
    if (angular_delta > 3.1415927f)
        angular_delta -= 6.2831855f;
    else if (angular_delta < -3.1415927f)
        angular_delta += 6.2831855f;
    angular_interim = (state->angle[0].velocity + angular_delta * 1.1666667f) * D_0022BB38;
    angular_next = angular_interim + angular_delta * D_0022BB38;
    updated = angular_next + state->angle[0].target;
    state->angle[0].velocity = angular_interim - angular_next * 1.1666667f;
    if (updated > 3.1415927f)
        updated -= 6.2831855f;
    else if (updated < -3.1415927f)
        updated += 6.2831855f;
    state->angle[0].current = updated;

    delta1 = state->angle[1].current - state->angle[1].target;
    interim1 = (state->angle[1].velocity + delta1 + delta1) * D_0022BB3C;
    next1 = interim1 + delta1 * D_0022BB3C;
    state->angle[1].current = next1 + state->angle[1].target;
    state->angle[1].velocity = interim1 - (next1 + next1);

    delta2 = state->angle[2].current - state->angle[2].target;
    interim2 = (state->angle[2].velocity + delta2) * D_0022BB40;
    next2 = interim2 + delta2 * D_0022BB40;
    state->angle[2].current = next2 + state->angle[2].target;
    state->angle[2].velocity = interim2 - next2;
}
