/* LEVEL_02:0x032FC0 -- placement copy of LEVEL_01_032800.c: recomputes the state byte at 0x2C, then runs the
   follow-up with the same argument. */
typedef struct {
    char pad[0x2C];
    unsigned char state;
} Obj;

extern unsigned char func_033370(Obj *obj, int arg, unsigned char state);
extern void func_0335C8(Obj *obj, int arg);

void func_032FC0(Obj *obj, int arg)
{
    obj->state = func_033370(obj, arg, obj->state);
    func_0335C8(obj, arg);
}
