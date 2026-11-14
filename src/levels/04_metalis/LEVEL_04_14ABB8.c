/* LEVEL_04:0x14ABB8 -- placement copy of LEVEL_01_13E7A8.c: runs the handler for the object's state (0, 1 or 2). */
typedef struct {
    char pad00[0x45];
    unsigned char state;
} Obj;

extern void func_14B068(Obj *o);
extern void func_14B300(Obj *o);
extern void func_14BDB8(Obj *o);

void func_14ABB8(Obj *o)
{
    switch (o->state) {
    case 0:
        func_14B068(o);
        break;
    case 1:
        func_14B300(o);
        break;
    case 2:
        func_14BDB8(o);
        break;
    }
}
