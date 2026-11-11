/* LEVEL_08:0x078490 -- placement copy of LEVEL_04_074828.c: releases an active object and decrements the global
   count of active objects. */
typedef struct {
    char pad[0x48];
    unsigned char active;
    unsigned char pending;
} Obj;

extern int D_0023EF30;
extern void func_078340(Obj *obj, void *extra);

void func_078490(int value, void *extra)
{
    Obj *obj = (Obj *)value;

    if (obj->active) {
        func_078340(obj, extra);
        obj->active = 0;
        obj->pending = 0;
        D_0023EF30--;
    }
}
