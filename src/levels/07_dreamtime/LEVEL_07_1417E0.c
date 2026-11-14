/* LEVEL_07:0x1417E0 -- placement copy of LEVEL_01_13E7A8.c: runs the handler for the object's state (0, 1 or 2). */
typedef struct {
    char pad00[0x45];
    unsigned char state;
} Obj;

extern void func_141C90(Obj *o);
extern void func_141F28(Obj *o);
extern void func_1429E0(Obj *o);

void func_1417E0(Obj *o)
{
    switch (o->state) {
    case 0:
        func_141C90(o);
        break;
    case 1:
        func_141F28(o);
        break;
    case 2:
        func_1429E0(o);
        break;
    }
}
