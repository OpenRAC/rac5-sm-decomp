/* LEVEL_01:0x13E7A8 -- runs the handler for the object's state (0, 1 or 2). */
typedef struct {
    char pad00[0x45];
    unsigned char state;
} Obj;

extern void func_13EC58(Obj *o);
extern void func_13EEF0(Obj *o);
extern void func_13F9A8(Obj *o);

void func_13E7A8(Obj *o)
{
    switch (o->state) {
    case 0:
        func_13EC58(o);
        break;
    case 1:
        func_13EEF0(o);
        break;
    case 2:
        func_13F9A8(o);
        break;
    }
}
