/* LEVEL_16:0x142ED0 -- counts down the timers of an object in mode 1 or 3 and, on expiry, switches state or re-rolls a random value between two table bounds. */

struct State_142ED0 {
    char pad[0x14];
    float timer;
};

struct Obj_142ED0 {
    char pad0[0x45];
    unsigned char mode;
    unsigned char side;
    char pad1[0x11];
    struct State_142ED0 *state;
    char pad2[0xC];
    int value;
    char pad3[4];
    float timer;
};

extern int rand(void);
extern void func_143020(struct Obj_142ED0 *a0, int a1);

extern int D_001D3688[2];
extern float D_001D3690[2];
extern float D_001D3698[2];

void func_142ED0(struct Obj_142ED0 *obj, float dt)
{
    struct State_142ED0 *state;
    float lo;
    float hi;
    float range;

    switch (obj->mode) {
    case 1:
        obj->timer -= dt;
        if (obj->timer <= 0.0f) {
            func_143020(obj, 3);
        }
        break;
    case 3:
        obj->timer -= dt;
        if (obj->timer <= 0.0f) {
            func_143020(obj, 1);
        } else {
            state = obj->state;
            state->timer -= dt;
            if (state->timer <= 0.0f) {
                obj->side = 1 - obj->side;
                obj->value = D_001D3688[obj->side];
                lo = D_001D3690[obj->side];
                hi = D_001D3698[obj->side];
                range = hi - lo;
                state->timer = lo + range * ((float)rand() * (1.0f / 2147483648.0f));
            }
        }
        break;
    }
}
