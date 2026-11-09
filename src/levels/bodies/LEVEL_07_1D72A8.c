/* LEVEL_07:0x1D72A8 -- placement copy of LEVEL_03_1DB8E8.c: advances a motion state and reports the distance moved. */
struct State {
    int result;
    float vel;
    float limit;
    float pos;
};
struct Obj {
    char pad0[0x34];
    float dist;
    char pad38[0xD];
    unsigned char mode;
    unsigned char kind;
    char pad47[0xD];
    struct State *state;
};
extern void func_1D7640(struct Obj *o);
extern int func_1D6BF8(struct Obj *o);
extern void func_1D73C8(struct Obj *o);

void func_1D72A8(struct Obj *o, float *out)
{
    struct State *s = o->state;
    float prev;

    if (out)
        *out = 0;
    if (s->limit == 0.0f) {
        func_1D7640(o);
        return;
    }
    prev = o->dist;
    s->pos -= s->vel;
    o->dist += s->vel;
    s->vel += -0.04000000283122063f;
    if (s->pos >= s->limit) {
        o->dist += s->pos - s->limit;
        if (o->kind == 1) {
            s->result = func_1D6BF8(o);
            if (s->result)
                o->mode = 1;
            else
                o->mode = 3;
        } else {
            o->mode = 1;
        }
        func_1D73C8(o);
    }
    if (out)
        *out = o->dist - prev;
}
