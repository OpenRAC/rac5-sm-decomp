/* LEVEL_16:0x138798 -- placement copy of LEVEL_01_15A7B8.c: when the object passes the first check, refreshes
   it with its state byte and the computed byte value. */
typedef struct {
    char pad[0x45];
    unsigned char state;
} Obj;

extern int func_06FB50(Obj *obj, int mode);
extern int func_139988(Obj *obj);
extern void func_1394D0(Obj *obj, int state, unsigned char value);

void func_138798(Obj *obj)
{
    unsigned char value;

    if (func_06FB50(obj, 0)) {
        value = func_139988(obj);
        func_1394D0(obj, obj->state, value);
    }
}
