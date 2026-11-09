/* LEVEL_04:0x074828 -- releases an active object and decrements the global
   count of active objects. */
typedef struct {
    char pad[0x48];
    unsigned char active;
    unsigned char pending;
} Obj;

extern int D_0020F530;
extern void func_0746D8(Obj *obj);

void func_074828(int value, void *extra)
{
    Obj *obj = (Obj *)value;

    if (obj->active) {
        func_0746D8(obj);
        obj->active = 0;
        obj->pending = 0;
        D_0020F530--;
    }
}
