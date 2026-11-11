/* LEVEL_08:0x032820 -- placement copy of LEVEL_01_032800.c: recomputes the state byte at 0x2C, then runs the
   follow-up with the same argument. */
typedef struct {
    char pad[0x2C];
    unsigned char state;
} Obj;

extern unsigned char func_032BD0(Obj *obj, int arg, unsigned char state);
extern void func_032E28(Obj *obj, int arg);

void func_032820(Obj *obj, int arg)
{
    obj->state = func_032BD0(obj, arg, obj->state);
    func_032E28(obj, arg);
}
