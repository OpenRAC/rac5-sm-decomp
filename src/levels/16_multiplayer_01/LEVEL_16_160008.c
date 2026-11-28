/* LEVEL_16:0x160008 -- event handler of the timed object: the timer in the state block runs down by the frame time; event 10 hands over to the next phase, otherwise an expired timer ends the object (result 3) and a live one arms a flag and moves on to phase 8 once the secondary timer is above 4. */
typedef struct {
    char pad00[0x9C];
    float timer;
    char padA0[0x14];
    float timer2;
    char padB8[0x15];
    unsigned char armed;
} State;

typedef struct {
    char pad00[0x45];
    unsigned char phase;
    char pad46[0x12];
    State *state;
} Obj;

extern void func_160758(Obj *object, int kind, int code);
extern void func_06F940(Obj *object);

int func_160008(Obj *object, int event, float dt)
{
    State *state = object->state;
    float t;

    t = state->timer - dt;
    state->timer = t;
    if (event == 10) {
        func_160758(object, object->phase, 0xB);
        return 0;
    }
    if (t <= 0.0f) {
        ((void (*)(Obj *object, int flag))func_06F940)(object, 1);
        return 3;
    }
    state->armed = 1;
    if (4.0f < state->timer2) {
        func_160758(object, object->phase, 8);
    }
    return 0;
}
