/* LEVEL_09:0x036610 -- placement copy of LEVEL_02_03E850.c: when the owner has a target, notifies the owner and
   hands the target to the object. */
typedef struct {
    char pad[0xE4];
    void *target;
} Owner;

typedef struct {
    char pad[0x48];
    Owner *owner;
} Obj;

extern void func_085CD0(Owner *owner, int value);
extern void func_0364D8(Obj *obj, void *target);

void func_036610(Obj *obj)
{
    Owner *owner = obj->owner;
    void *target = owner->target;

    if (target) {
        func_085CD0(owner, 1);
        func_0364D8(obj, target);
    }
}
