/* LEVEL_19:0x16CCF8 -- placement copy of LEVEL_16_16BE40.c: runs the common update, notifies the object's linked record when it holds a handle, then finishes with the second helper. */
typedef struct {
    char pad0[0x54];
    int *link;
} Obj;

extern void func_16CEA8(void *value);
extern void func_1390B8(char *object);
extern void func_15F090(int key);

void func_16CCF8(Obj *o)
{
    func_16CEA8(o);
    if (*o->link != 0) {
        ((void (*)(int, Obj *))func_1390B8)(*o->link, o);
    }
    func_15F090((int)o);
}
