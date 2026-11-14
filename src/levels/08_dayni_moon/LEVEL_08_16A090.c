/* LEVEL_08:0x16A090 -- state handler: when not already in state 4 and the map entry is missing or a type 1 or 9 entry, switches to state 4, flags the linked record and starts the animation 3; returns the new state. */
typedef struct Rec { char pad00[4]; char pad04[8]; unsigned short h0C; } Rec;
typedef struct Cfg { char pad00[0x3F]; unsigned char b3F; } Cfg;
typedef struct Map { char pad00[0x40]; Cfg *f40; } Map;
typedef struct Obj { char pad00[0x45]; unsigned char b45; char pad46[0x12]; Rec *f58; } Obj;
extern void func_084AC8(Obj *o, float t, unsigned idx);
int func_16A090(Obj *o, int a1, int a2, int a3, int a4, Map *m)
{
    Rec *r;
    if (o->b45 == 4) return 1;
    if (m == 0 || m->f40->b3F == 9 || m->f40->b3F == 1) {
        o->b45 = 4;
        r = (Rec *)((char *)o->f58 + 4);
        r->h0C |= 0x1008;
        func_084AC8(o, 0.0f, 3);
        return 3;
    }
    return 1;
}
