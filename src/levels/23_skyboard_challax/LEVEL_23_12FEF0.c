/* LEVEL_23:0x12FEF0 -- placement copy of LEVEL_01_13E7A8.c: runs the handler for the object's state (0, 1 or 2). */
typedef struct {
    char pad00[0x45];
    unsigned char state;
} Obj;

extern void func_1303A0(Obj *o);
extern void func_130638(Obj *o);
extern void func_1310F0(Obj *o);

void func_12FEF0(Obj *o)
{
    switch (o->state) {
    case 0:
        func_1303A0(o);
        break;
    case 1:
        func_130638(o);
        break;
    case 2:
        func_1310F0(o);
        break;
    }
}
