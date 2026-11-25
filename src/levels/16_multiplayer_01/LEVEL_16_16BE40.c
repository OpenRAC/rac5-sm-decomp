/* LEVEL_16:0x16BE40 -- runs the common update, notifies the object's linked record when it holds a handle, then finishes with the second helper. */
typedef struct {
    char pad0[0x54];
    int *link;
} Obj;

extern void func_16BFF0(void *value);
extern void func_13CAD8(char *object);
extern void func_15D590(int key);

void func_16BE40(Obj *o)
{
    func_16BFF0(o);
    if (*o->link != 0) {
        ((void (*)(int, Obj *))func_13CAD8)(*o->link, o);
    }
    func_15D590((int)o);
}
