/* LEVEL_03:0x13CBB8 -- placement copy of LEVEL_01_13E7A8.c: runs the handler for the object's state (0, 1 or 2). */
typedef struct {
    char pad00[0x45];
    unsigned char state;
} Obj;

extern void func_13D068(Obj *o);
extern void func_13D300(Obj *o);
extern void func_13DDB8(Obj *o);

void func_13CBB8(Obj *o)
{
    switch (o->state) {
    case 0:
        func_13D068(o);
        break;
    case 1:
        func_13D300(o);
        break;
    case 2:
        func_13DDB8(o);
        break;
    }
}
