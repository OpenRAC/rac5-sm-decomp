/* LEVEL_17:0x1625E0 -- placement copy of LEVEL_16_16BE40.c: runs the common update, notifies the object's linked record when it holds a handle, then finishes with the second helper. */
typedef struct {
    char pad0[0x54];
    int *link;
} Obj;

extern void func_162790(void *value);
extern void func_1384E8(char *object);
extern void func_156B10(int key);

void func_1625E0(Obj *o)
{
    func_162790(o);
    if (*o->link != 0) {
        ((void (*)(int, Obj *))func_1384E8)(*o->link, o);
    }
    func_156B10((int)o);
}
