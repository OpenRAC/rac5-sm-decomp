/* LEVEL_18:0x170B38 -- placement copy of LEVEL_16_16BE40.c: runs the common update, notifies the object's linked record when it holds a handle, then finishes with the second helper. */
typedef struct {
    char pad0[0x54];
    int *link;
} Obj;

extern void func_170CE8(void *value);
extern void func_1383C8(char *object);
extern void func_163180(int key);

void func_170B38(Obj *o)
{
    func_170CE8(o);
    if (*o->link != 0) {
        ((void (*)(int, Obj *))func_1383C8)(*o->link, o);
    }
    func_163180((int)o);
}
