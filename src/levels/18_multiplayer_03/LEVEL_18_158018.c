/* LEVEL_18:0x158018 -- dispatches an object's update by its mode byte, then latches the pending value. */
typedef struct {
    int pending;
    int latched;
    char pad8[0x3A];
    unsigned char flag;
} Aux;

typedef struct {
    char pad0[0x45];
    unsigned char mode;
    char pad46[0x12];
    Aux *aux;
    char pad5C[0x14];
    float timer;
} Obj;

extern int func_158100(Obj *o);
extern void func_158500(Obj *o);
extern void func_158518(Obj *o, float dt);
extern void func_1586A8(Obj *o, float dt);
extern void func_1581C8(Obj *o);

void func_158018(Obj *o, float dt)
{
    Aux *a;
    unsigned int m;

    a = o->aux;
    m = o->mode;
    if (m == 1) {
        if (a->flag == 0) {
            if (func_158100(o) == 0)
                func_158500(o);
            else
                func_158518(o, dt);
        } else {
            func_158518(o, dt);
        }
    } else if (m == 2) {
        func_1586A8(o, dt);
    } else if (m == 0) {
        if (o->timer > 2.0f) {
            if (func_158100(o))
                func_1581C8(o);
        }
    }
    if (a->pending)
        a->latched = a->pending;
}
