/* LEVEL_02:0x16F310 -- per-frame state machine of a spark emitter: state 0 spawns, state 1 waits 30 frames, state 2 keeps emitting; the frame timer advances every call. */
typedef struct Obj {
    char pad0[0x45];
    unsigned char state;
    char pad46[0x70 - 0x46];
    float timer;
} Obj;

extern void func_16F3B8(Obj *o);
extern void func_16F5F0(Obj *o);
extern void func_16F8A8(Obj *o);

void func_16F310(Obj *o)
{
    if (o->state == 0) {
        func_16F3B8(o);
    } else if (o->state == 1) {
        if (o->timer >= 30.0f) {
            o->timer = 0.0f;
            o->state = 2;
        }
        func_16F5F0(o);
    } else if (o->state == 2) {
        func_16F5F0(o);
        func_16F8A8(o);
    }
    o->timer = o->timer + 1.0f;
}
