/* LEVEL_01:0x1C3630 -- three object helpers: picks a reaction code from a probe result, forwards the state vector to a manager, and refreshes the state flags. */

struct Info_1C3630 {
    char pad0[0x10];
    int f10;
    char pad1[0x1C];
    void *f30;
};

struct State_1C3630 {
    char pad0[0xC];
    float f0C;
    char pad1[0x74];
    unsigned char b84;
    unsigned char b85;
    char pad2[2];
    unsigned char b88;
    unsigned char b89;
};

struct Obj_1C3630 {
    char pad[0x54];
    struct Info_1C3630 *info;
    struct State_1C3630 *state;
};

extern int func_01A490(int a0);
extern int func_0311D0(struct Info_1C3630 *a0, struct Obj_1C3630 *a1, void * a2, int a3, int a4, float f12, float f13);
extern void func_08C610(void *a0, struct Obj_1C3630 *a1);
extern void func_07D098(struct Obj_1C3630 *a0, struct State_1C3630 *a1, int a2);
extern void func_08C788(void *a0, struct Obj_1C3630 *a1);
extern void func_1C42A8(struct Obj_1C3630 *a0);
extern void func_1C43A8(struct Obj_1C3630 *a0, int a1);

int func_1C3630(struct Obj_1C3630 *obj)
{
    struct Info_1C3630 *info;
    struct State_1C3630 *state;
    int r;

    info = obj->info;
    state = obj->state;
    if (func_01A490(info->f10) == 0) {
        return 0;
    }
    r = func_0311D0(info, obj, info->f30, state->b84, 0, 0.9f, 1.85f);
    if (r == 2) {
        return 8;
    }
    if (r == 0) {
        return 6;
    }
    return 9;
}

void func_1C36D0(struct Obj_1C3630 *obj)
{
    func_08C610((char *)obj->state + 0x50, obj);
}

void func_1C36F8(struct Obj_1C3630 *obj)
{
    struct State_1C3630 *state;
    int flag;

    state = obj->state;
    if (state->b85 != 0xFF) {
        func_07D098(obj, state, state->b85);
        state->f0C = 1.0f;
    }
    func_08C788((char *)state + 0x50, obj);
    flag = state->b89;
    if (flag == 1) {
        func_1C42A8(obj);
        state->b89 = 2;
    } else if (state->b88 != 0) {
        func_1C43A8(obj, flag != 0);
    }
}
