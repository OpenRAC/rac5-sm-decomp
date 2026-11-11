/* LEVEL_20:0x01E398 -- placement copy of LEVEL_01_023BC8.c: changes the object's state: ignores a repeated state, remembers the previous/new pair unless either is state 1 or 20, resets the timers and mirrors the state triple into the global record before the follow-up call. */
typedef struct Obj {
    char pad_000[0x9A0];
    int state;
    int w9A4;
    int newState;
    int prevState;
    char pad_9B0[0x9C4 - 0x9B0];
    int w9C4;
    char pad_9C8[5];
    unsigned char b9CD;
} Obj;

typedef struct Hud {
    char pad_00[0x13720];
    int state;
    int newState;
    int prevState;
} Hud;

typedef struct HudRef {
    Hud *hud;
} HudRef;

extern HudRef D_00104194;
extern void func_01D8F0(Obj *obj, float t);

void func_01E398(Obj *o, int state)
{
    int old;

    old = o->state;
    if (old == state) {
        return;
    }
    o->w9C4 = 2;
    if (old != 1 && state != 1 && old != 20 && state != 20) {
        o->prevState = old;
        o->newState = state;
    }
    o->state = state;
    o->w9A4 = 0;
    o->b9CD = 0;
    D_00104194.hud->state = state;
    D_00104194.hud->newState = o->newState;
    D_00104194.hud->prevState = o->prevState;
    func_01D8F0(o, 0.0f);
}
