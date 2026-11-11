/* LEVEL_08:0x03EED8 -- placement copy of LEVEL_02_03E850.c: when the owner has a target, notifies the owner and
   hands the target to the object. */
typedef struct {
    char pad[0xE4];
    void *target;
} Owner;

typedef struct {
    char pad[0x48];
    Owner *owner;
} Obj;

extern void func_091480(Owner *owner, int value);
extern void func_03EDA0(Obj *obj, void *target);

void func_03EED8(Obj *obj)
{
    Owner *owner = obj->owner;
    void *target = owner->target;

    if (target) {
        func_091480(owner, 1);
        func_03EDA0(obj, target);
    }
}
