/* LEVEL_16:0x136218 -- state step: in state 1 looks the owner up among two candidates and flags a change of ownership, in states 2 and 3 runs the matching handler while the timer is positive. */
typedef struct State {
    void *owner;
    char pad_04[0x28 - 4];
    int mode;
} State;

typedef struct Obj {
    char pad_00[0x45];
    unsigned char state;
    char pad_46[0x58 - 0x46];
    State *st;
    char pad_5C[0x70 - 0x5C];
    float timer;
} Obj;

extern void func_1368D8(Obj *o);
extern void *func_112CE8(unsigned i);
extern int func_037C60(char *record);
extern void func_136410(Obj *o);
extern void func_1365E8(Obj *o);

void func_136218(Obj *o)
{
    State *s;
    void *had;
    void *h;
    unsigned int i;
    int changed;

    s = o->st;
    func_1368D8(o);
    if (o->state == 1) {
        had = s->owner;
        s->owner = 0;
        changed = had != 0;
        for (i = 0; i < 2; i++) {
            h = func_112CE8(i);
            if (h == 0) {
                continue;
            }
            if (func_037C60((char *)h) != (int)o) {
                continue;
            }
            s->owner = h;
            break;
        }
        if ((changed && s->owner == 0) || (!changed && s->owner != 0)) {
            s->mode = 2;
        }
    } else if (o->state == 2 && o->timer > 0.0f) {
        func_136410(o);
    } else if (o->state == 3 && o->timer > 0.0f) {
        func_1365E8(o);
    }
}
