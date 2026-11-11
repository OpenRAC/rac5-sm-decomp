/* LEVEL_24:0x032F00 -- placement copy of LEVEL_02_03E850.c: when the owner has a target, notifies the owner and
   hands the target to the object. */
typedef struct {
    char pad[0xE4];
    void *target;
} Owner;

typedef struct {
    char pad[0x48];
    Owner *owner;
} Obj;

extern void func_0825B8(Owner *owner, int value);
extern void func_032DC8(Obj *obj, void *target);

void func_032F00(Obj *obj)
{
    Owner *owner = obj->owner;
    void *target = owner->target;

    if (target) {
        func_0825B8(owner, 1);
        func_032DC8(obj, target);
    }
}
