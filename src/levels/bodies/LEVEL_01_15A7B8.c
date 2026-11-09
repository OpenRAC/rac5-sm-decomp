/* LEVEL_01:0x15A7B8 -- when the object passes the first check, refreshes
   it with its state byte and the computed byte value. */
typedef struct {
    char pad[0x45];
    unsigned char state;
} Obj;

extern int func_07CAB8(Obj *obj, int mode);
extern int func_15C960(Obj *obj);
extern void func_15C260(Obj *obj, int state, unsigned char value);

void func_15A7B8(Obj *obj)
{
    unsigned char value;

    if (func_07CAB8(obj, 0)) {
        value = func_15C960(obj);
        func_15C260(obj, obj->state, value);
    }
}
