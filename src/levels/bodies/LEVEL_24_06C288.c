/* LEVEL_24:0x06C288 -- placement copy of LEVEL_04_074828.c: releases an active object and decrements the global
   count of active objects. */
typedef struct {
    char pad[0x48];
    unsigned char active;
    unsigned char pending;
} Obj;

extern int D_001C6CF0;
extern void func_06C138(Obj *obj);

void func_06C288(int value, void *extra)
{
    Obj *obj = (Obj *)value;

    if (obj->active) {
        func_06C138(obj);
        obj->active = 0;
        obj->pending = 0;
        D_001C6CF0--;
    }
}
