/* LEVEL_02:0x03E850 -- when the owner has a target, notifies the owner and
   hands the target to the object. */
typedef struct {
    char pad[0xE4];
    void *target;
} Owner;

typedef struct {
    char pad[0x48];
    Owner *owner;
} Obj;

extern void func_08FC48(Owner *owner, int value);
extern void func_03E718(Obj *obj, void *target);

void func_03E850(Obj *obj)
{
    Owner *owner = obj->owner;
    void *target = owner->target;

    if (target) {
        func_08FC48(owner, 1);
        func_03E718(obj, target);
    }
}
