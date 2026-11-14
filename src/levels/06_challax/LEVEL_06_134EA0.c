/* LEVEL_06:0x134EA0 -- placement copy of LEVEL_01_13E7A8.c: runs the handler for the object's state (0, 1 or 2). */
typedef struct {
    char pad00[0x45];
    unsigned char state;
} Obj;

extern void func_135350(Obj *o);
extern void func_1355E8(Obj *o);
extern void func_1360A0(Obj *o);

void func_134EA0(Obj *o)
{
    switch (o->state) {
    case 0:
        func_135350(o);
        break;
    case 1:
        func_1355E8(o);
        break;
    case 2:
        func_1360A0(o);
        break;
    }
}
