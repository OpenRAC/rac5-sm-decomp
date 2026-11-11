/* LEVEL_07:0x031A80 -- placement copy of LEVEL_01_032800.c: recomputes the state byte at 0x2C, then runs the
   follow-up with the same argument. */
typedef struct {
    char pad[0x2C];
    unsigned char state;
} Obj;

extern unsigned char func_031E30(Obj *obj, int arg, unsigned char state);
extern void func_032088(Obj *obj, int arg);

void func_031A80(Obj *obj, int arg)
{
    obj->state = func_031E30(obj, arg, obj->state);
    func_032088(obj, arg);
}
