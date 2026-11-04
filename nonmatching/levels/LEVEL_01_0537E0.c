/* Candidate for LEVEL_01.REL:0x0537E0.
 * This updates a damped movement value and its state transitions. Field names
 * and helper signatures are provisional and need caller/callee review.
 */

typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef struct { float x, y, z; } Vec3;

typedef struct {
    unsigned char pad[0x48];
    int status;
} Attached;

typedef struct {
    unsigned char pad0[0x30];
    Vec3 location;
    unsigned char pad1[0xD8 - 0x3C];
    u32 flags;
    unsigned char pad2[0x102 - 0xDC];
    u16 action;
    unsigned char pad3[4];
    u16 state;
    u16 state_copy;
    unsigned char pad4[0x128 - 0x10C];
    int reset_a;
    int reset_b;
    unsigned char pad5[0x140 - 0x130];
    float initial_height;
    unsigned char pad6[0x168 - 0x144];
    int active;
    unsigned char pad7[0x1B8 - 0x16C];
    float response;
    unsigned char pad8[0x240 - 0x1BC];
    float trigger;
    unsigned char pad9[0x2DC - 0x244];
    float position;
    float desired;
    float velocity;
    unsigned char pad10[4];
    float damping;
    float velocity_limit;
    unsigned char pad11[0x59C - 0x2F4];
    Attached *attached;
    unsigned char pad12[0x960 - 0x5A0];
    u64 extended_flags;
    unsigned char pad13[0xA98 - 0x968];
    float timer;
} Player;

typedef struct {
    unsigned char pad[0x24];
    int mode;
} Settings;

extern float D_001EF29C;
extern Settings *D_001F3FAC;
extern int D_001F3FB8;
extern void *D_001F47CC;
extern void *D_001F47D0;
extern unsigned char D_00238E30;
extern unsigned char D_00238E80;
extern float D_0020DE58;

extern void func_053698(void);
extern void func_053718(Player *);
extern u32 func_1EB278(float);
extern void func_04DA70(float, Player *, int, int, int);
extern void func_048F48(Player *);
extern void func_10A370(float, float, void *, Vec3 *, void *);
extern int func_049C28(float, float, Player *, float *, float *, int *, int);
extern int func_088BA8(int);
extern float func_07CA90(Attached *);

typedef struct {
    unsigned int count_values[2];
    float ground_a;
    float ground_b;
    int result[4];
} Scratch;
void func_0537E0(Player *player)
{
    float scale = 0.01f;
    float *position = &player->position;
    float *velocity = &player->velocity;
    float target;
    float damping;
    float velocity_limit;
    float next_velocity;
    unsigned int count;
    unsigned int *selected_count;
    unsigned int i;
    unsigned int old_flags;
    unsigned int *flags_base = (unsigned int *)((char *)player + 0xC0);
    Scratch scratch;
    int found;
    u16 state;

    player->extended_flags |= 1ULL << 40;
    func_053698();
    old_flags = flags_base[6];
    func_053718(player);
    target = player->desired;
    damping = player->damping;
    velocity_limit = player->velocity_limit;
    scratch.count_values[0] = func_1EB278(D_001EF29C * 59.998802f);
    scratch.count_values[1] = 2;
    selected_count = &scratch.count_values[0];
    if (scratch.count_values[0] >= 2)
        selected_count = &scratch.count_values[1];

    count = *selected_count;
    for (i = 0; i < count; ++i) {
        next_velocity = *velocity + ((target - *position) * scale - *velocity * damping);
        *velocity = next_velocity;
        if (velocity_limit < next_velocity)
            *velocity = velocity_limit;
        else if (next_velocity < -velocity_limit)
            *velocity = -velocity_limit;
        *position += *velocity;
    }

    player->location.y = player->position;
    if (((D_001F3FAC->mode == 2) ? (old_flags & 0x4100) : (old_flags & 0x4000)) != 0) {
        if (player->timer == 0.0f && player->state < 2) {
            player->state_copy = 2;
            player->state = 2;
            func_04DA70(0.2f, player, 0x25, 0, 1);
        }
    }

    state = player->state;
    if (state == 0 && player->trigger != 0.0f) {
        player->state_copy = 1;
        player->state = 1;
        func_04DA70(0.3f, player, 0x26, 0, 1);
    }
    state = player->state;
    if (state == 1) {
        func_048F48(player);
        func_10A370(0.5235987902f, 1.0471975803f, D_001F47CC,
                     &player->location, &D_00238E30);
        if ((D_001F3FB8 & 3) == 0)
            func_10A370(1.0471975803f, 1.4835298061f, D_001F47D0,
                         &player->location, &D_00238E80);
        if (player->trigger == 0.0f) {
            player->state = 0;
            player->state_copy = 0;
            func_04DA70(0.4f, player, 0x24, 0, 1);
        } else {
            scratch.ground_a = 0.0f;
            scratch.ground_b = 0.0f;
            found = func_049C28(1000.0f, 2.0f, player,
                                &scratch.ground_a, &scratch.ground_b, scratch.result, 0);
            if (scratch.result[0] == 2) {
                player->desired = scratch.ground_b;
                if (found == 0 && scratch.ground_b - scratch.ground_a < D_0020DE58)
                    player->action = 0;
            } else if (found == 0) {
                player->action = 0;
            }
        }
    }

    if (player->state == 2 &&
        func_088BA8(player->attached->status) == 0 &&
        func_07CA90(player->attached) > 0.2f) {
        player->timer = 4.00007963f;
        player->response = 0.17f;
        player->action = 0x1D;
        player->initial_height = 1000.0f;
        player->active = 1;
        player->reset_a = 0;
        player->reset_b = 0;
    }
}
