/* LEVEL_08:0x14FC50 -- placement copy of LEVEL_01_13E7A8.c: runs the handler for the object's state (0, 1 or 2). */
typedef struct {
    char pad00[0x45];
    unsigned char state;
} Obj;

extern void func_150100(Obj *o);
extern void func_150398(Obj *o);
extern void func_150E50(Obj *o);

void func_14FC50(Obj *o)
{
    switch (o->state) {
    case 0:
        func_150100(o);
        break;
    case 1:
        func_150398(o);
        break;
    case 2:
        func_150E50(o);
        break;
    }
}
