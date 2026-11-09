/* LEVEL_01:0x032848 -- computes a value from the object's byte at 0x2C and
   hands it to the second stage with the same arguments. */
typedef struct {
    char pad[0x2C];
    unsigned char kind;
} Obj;

extern int func_032AD0(Obj *obj, void *arg, int kind);
extern void func_033330(Obj *obj, void *arg, int value);

void func_032848(Obj *obj, void *arg)
{
    func_033330(obj, arg, func_032AD0(obj, arg, obj->kind));
}
