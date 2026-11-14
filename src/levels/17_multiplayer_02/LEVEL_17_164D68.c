/* LEVEL_17:0x164D68 -- placement copy of LEVEL_16_16E5C8.c: advances the object's timer; in state 0 it runs the idle update and switches to state 2 after 0.3; in state 2 it runs the step, then either hands the linked target to the follow-up or falls back to the idle update. */
typedef struct Link {
    struct Link *target;
} Link;


typedef struct Obj2 {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x58 - 0x46];
    Link *link;
    char pad5C[0x70 - 0x5C];
    float timer;
} Obj2;

extern void func_1651C0(Obj2 *o);
extern void func_164E38(char *record);
extern int func_164E70(Obj2 *o, Link *t);
extern void func_1650E0(Obj2 *o, Link *t);

void func_164D68(Obj2 *o, float dt)
{
    Link *link;

    o->timer = o->timer + dt;
    link = o->link;
    if (o->state == 0) {
        func_1651C0(o);
        if (o->timer > 0.30000001192092896f) {
            o->state = 2;
        }
    } else if (o->state == 2) {
        func_164E38((char *)o);
        link = link->target;
        if (link != 0 && func_164E70(o, link) != 0) {
            func_1650E0(o, link);
        } else {
            func_1651C0(o);
        }
    }
}
