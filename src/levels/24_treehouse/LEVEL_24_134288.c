/* LEVEL_24:0x134288 -- placement copy of LEVEL_01_13E7A8.c: runs the handler for the object's state (0, 1 or 2). */
typedef struct {
    char pad00[0x45];
    unsigned char state;
} Obj;

extern void func_134738(Obj *o);
extern void func_1349D0(Obj *o);
extern void func_135488(Obj *o);

void func_134288(Obj *o)
{
    switch (o->state) {
    case 0:
        func_134738(o);
        break;
    case 1:
        func_1349D0(o);
        break;
    case 2:
        func_135488(o);
        break;
    }
}
