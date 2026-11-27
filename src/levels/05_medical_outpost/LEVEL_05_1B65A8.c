/* LEVEL_05:0x1B65A8 -- callback: when the object's timer is running, advances it by the global step and points the facing angle opposite to the direction vector. */
typedef struct State {
    int time;
    char pad4[0xC];
    float angle;
} State;

typedef struct Obj {
    char pad0[0x20];
    float dx;
    char pad24[4];
    float dz;
    char pad2C[0x54 - 0x2C];
    State *state;
} Obj;

extern int D_001F5E14;
extern float atan2f(float y, float x);

static __inline__ int Advance(State *s)
{
    int t = s->time;

    if (t == 0) {
        return 0;
    }
    s->time = D_001F5E14 + t;
    return 1;
}

int func_1B65A8(Obj *o)
{
    State *s = o->state;

    if (!Advance(s)) {
        return 0;
    }
    s->angle = atan2f(-o->dz, -o->dx);
    return 1;
}
