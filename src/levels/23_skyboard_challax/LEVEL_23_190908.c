/* LEVEL_23:0x190908 -- placement copy of LEVEL_03_1C1EC0.c: per-state update: runs the shared pre-step, then the handler for the object's state (state 0 resolves the link handle once and starts the mode), and finishes with the common step. */
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

extern int D_00366394;
extern void func_193610(Obj *o);
extern void func_193360(Obj *o);
extern void func_1933C0(Obj *o);
extern int func_17D9D8(int, Obj *, int);
extern void func_194000(Obj *o, int mode);
extern void func_1917E8(Obj *o);

void func_190908(Obj *o)
{
    Owner *own = o->owner;
    Part *part = o->part;

    func_193610(o);
    switch (o->state) {
    case 2:
        func_1933C0(o);
        break;
    case 0:
        if (part->handle < 0)
            part->handle = func_17D9D8(own->link, o, 0);
        func_194000(o, D_00366394);
        break;
    case 1:
        func_193360(o);
        break;
    }
    func_1917E8(o);
}
