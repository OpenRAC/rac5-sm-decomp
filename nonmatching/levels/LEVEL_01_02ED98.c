/* LEVEL_01.REL:0x02ED98 -- updates a moving body's collision response. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    unsigned char flags;
    char pad_01[3];
    float velocity_x;
    float velocity_y;
    float velocity_z;
    char pad_10[0x14];
    float elapsed;
    Vec3 normal;
    float remaining;
} Body;

typedef struct {
    float acceleration;
    char pad_04[0x30];
    float p34;
    float p38;
    char pad_3C[4];
    float p40;
    float p44;
    float p48;
    float p4C;
    float p50;
} Motion;

extern float sqrtf(float);
extern float fabsf(float);
extern int func_021D90(float input_time, float travel_time, float *hit_time,
                       Vec3 *hit_point, const Vec3 *fallback,
                       const Vec3 *start, const Vec3 *velocity,
                       const Vec3 *acceleration, float limit_a, float limit_b);

void func_02ED98(float input_time, float duration, Body *body,
                 const Vec3 *position, const Vec3 *fallback, Motion *motion)
{
    Vec3 start;
    Vec3 velocity;
    Vec3 acceleration;
    Vec3 hit_point;
    Vec3 delta;
    float hit_time;
    float lead;
    float remaining;
    float travel;
    float horizontal;
    float root;
    float gravity;
    float vertical_velocity;
    Vec3 *normal_out;
    int hit;

    gravity = motion->acceleration;
    lead = (body->elapsed + fabsf(body->elapsed)) * 0.5f;
    remaining = duration - lead;
    horizontal = body->velocity_x * body->velocity_x
               + body->velocity_z * body->velocity_z;
    start.x = position->x + body->velocity_x * lead;
    start.y = position->y + body->velocity_y * lead
            + gravity * 0.5f * lead * lead;
    start.z = position->z + body->velocity_z * lead;
    velocity.x = body->velocity_x;
    vertical_velocity = body->velocity_y + gravity * lead;
    velocity.y = vertical_velocity;
    velocity.z = body->velocity_z;
    acceleration.x = 0.0f;
    acceleration.y = gravity;
    acceleration.z = 0.0f;

    travel = remaining;
    if (motion->p48 < remaining * remaining * horizontal)
        travel = motion->p38 * (1.0f / sqrtf(horizontal));
    root = sqrtf(velocity.y * velocity.y
                 - gravity * motion->p4C);
    root = (velocity.y + root) * motion->p50;
    if (root < travel)
        travel = root;

    hit = func_021D90(input_time, travel, &hit_time, &hit_point,
                       fallback, &start, &velocity, &acceleration,
                       motion->p40, motion->p44);
    if (hit == 0) {
        if (travel == remaining) {
            body->flags |= 1;
        } else {
            body->flags &= 0xF7;
            body->elapsed = lead + travel;
        }
    } else {
        float length_squared;
        float inverse;
        float after_collision;

        normal_out = &body->normal;
        delta.x = start.x + velocity.x * hit_time - hit_point.x;
        delta.y = start.y + vertical_velocity * hit_time
                + gravity * 0.5f * hit_time * hit_time
                - hit_point.y;
        delta.z = start.z + velocity.z * hit_time - hit_point.z;
        length_squared = delta.x * delta.x + delta.y * delta.y
                       + delta.z * delta.z;
        if (length_squared < 2.3841858e-7f) {
            *normal_out = *fallback;
        } else {
            inverse = 1.0f / sqrtf(length_squared);
            normal_out->x = inverse * delta.x;
            normal_out->y = inverse * delta.y;
            normal_out->z = inverse * delta.z;
        }
        after_collision = (lead + hit_time) - motion->p34;
        body->flags |= 0x10;
        body->remaining = (after_collision + fabsf(after_collision)) * 0.5f;
    }
}
