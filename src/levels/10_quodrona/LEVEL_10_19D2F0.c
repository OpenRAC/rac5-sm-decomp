/* LEVEL_10:0x19D2F0 -- per-frame step of a timed state: ages both timers by dt, forwards the extra arguments to the shared update and switches the object's state when the first timer ends or the second one elapses; returns 2. */
typedef struct {
    char pad00[0x78];
    unsigned char b78;
    char pad79[0x13];
    float t8C;
    float t90;
    char pad94[8];
    char f9C[0x1C];
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x12];
    Rec *rec;
} Obj;

extern void func_014810(char *rec, Obj *o, int a, int b, int c);
extern void func_19D5E8(Obj *o, int state);

int func_19D2F0(Obj *o, int unused, int mode, int a, int b, int c, float dt)
{
    Rec *r = o->rec;

    r->t8C = r->t8C - dt;
    r->t90 = r->t90 - dt;
    func_014810(r->f9C, o, a, b, c);
    if (r->t8C <= 0.0f) {
        func_19D5E8(o, 0xD);
    } else if (r->t90 <= 0.0f) {
        if (r->b78 != 0) {
            func_19D5E8(o, 0xA);
        } else {
            func_19D5E8(o, 0xB);
        }
        r->t90 = 10.0f;
    } else if (r->b78 != 0) {
        if (mode >= 3) {
            func_19D5E8(o, 9);
        } else if (mode >= 2) {
            if (o->state != 4) {
                func_19D5E8(o, 4);
            }
        }
    }
    return 2;
}
