/* LEVEL_02:0x16AEA8 -- computes a value for the object, hands it on with the
   object's index and returns it. */
typedef struct {
    char pad[0x45];
    unsigned char index;
} Obj;

extern int func_16B2F0(Obj *);
extern void func_1698B8(Obj *, int, int);

int func_16AEA8(Obj *obj)
{
    int value = func_16B2F0(obj);

    func_1698B8(obj, obj->index, value);
    return value;
}
