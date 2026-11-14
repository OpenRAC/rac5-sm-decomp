/* LEVEL_02:0x144B20 -- placement copy of LEVEL_01_13E7A8.c: runs the handler for the object's state (0, 1 or 2). */
typedef struct {
    char pad00[0x45];
    unsigned char state;
} Obj;

extern void func_144FD0(Obj *o);
extern void func_145268(Obj *o);
extern void func_145D20(Obj *o);

void func_144B20(Obj *o)
{
    switch (o->state) {
    case 0:
        func_144FD0(o);
        break;
    case 1:
        func_145268(o);
        break;
    case 2:
        func_145D20(o);
        break;
    }
}
