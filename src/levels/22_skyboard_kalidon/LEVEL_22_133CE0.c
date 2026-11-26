/* LEVEL_22:0x133CE0 -- placement copy of LEVEL_03_1C1EC0.c: per-state update: runs the shared pre-step, then the handler for the object's state (state 0 resolves the link handle once and starts the mode), and finishes with the common step. */
typedef struct {
    char pad0[4];
    int link;
} Owner;

typedef struct {
    char pad0[0x7C];
    int handle;
} Part;

typedef struct {
    char pad0[0x45];
    unsigned char state;
    char pad46[0x54 - 0x46];
    Owner *owner;
    Part *part;
} Obj;

extern int D_002E80AC;
extern void func_1369E8(Obj *o);
extern void func_136738(Obj *o);
extern void func_136798(Obj *o);
extern int func_130CF8(int, Obj *, int);
extern void func_1373D8(Obj *o, int mode);
extern void func_134BC0(Obj *o);

void func_133CE0(Obj *o)
{
    Owner *own = o->owner;
    Part *part = o->part;

    func_1369E8(o);
    switch (o->state) {
    case 2:
        func_136798(o);
        break;
    case 0:
        if (part->handle < 0)
            part->handle = func_130CF8(own->link, o, 0);
        func_1373D8(o, D_002E80AC);
        break;
    case 1:
        func_136738(o);
        break;
    }
    func_134BC0(o);
}
