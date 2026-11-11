/* LEVEL_01:0x032800 -- recomputes the state byte at 0x2C, then runs the
   follow-up with the same argument. */
typedef struct {
    char pad[0x2C];
    unsigned char state;
} Obj;

extern unsigned char func_032AD0(Obj *obj, int arg, unsigned char state);
extern void func_032D28(Obj *obj, int arg);

void func_032800(Obj *obj, int arg)
{
    obj->state = func_032AD0(obj, arg, obj->state);
    func_032D28(obj, arg);
}
