/* LEVEL_01:0x1C2B38 -- placement copy of LEVEL_01_15A7B8.c: when the object passes the first check, refreshes
   it with its state byte and the computed byte value. */
typedef struct {
    char pad[0x45];
    unsigned char state;
} Obj;

extern int func_07CAB8(Obj *obj, int mode);
extern int func_1C3630(Obj *obj);
extern void func_1C1E90(Obj *obj, int state, unsigned char value);

void func_1C2B38(Obj *obj)
{
    unsigned char value;

    if (func_07CAB8(obj, 0)) {
        value = func_1C3630(obj);
        func_1C1E90(obj, obj->state, value);
    }
}
