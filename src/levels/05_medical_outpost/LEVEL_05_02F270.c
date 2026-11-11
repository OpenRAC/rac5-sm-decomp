/* LEVEL_05:0x02F270 -- placement copy of LEVEL_01_032800.c: recomputes the state byte at 0x2C, then runs the
   follow-up with the same argument. */
typedef struct {
    char pad[0x2C];
    unsigned char state;
} Obj;

extern unsigned char func_02F620(Obj *obj, int arg, unsigned char state);
extern void func_02F878(Obj *obj, int arg);

void func_02F270(Obj *obj, int arg)
{
    obj->state = func_02F620(obj, arg, obj->state);
    func_02F878(obj, arg);
}
