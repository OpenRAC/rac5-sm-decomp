/* LEVEL_07:0x173520 -- turns the stored offsets of the object's resource block (+0x54) into pointers by adding the global base: checked ones at +0x2C, +0x30 and +0x38 (cleared when the target's word at +0x40 is zero) and plain ones at +0x34 and +0x3C; runs the block fix-up routine after +0x34. */
struct Obj;

extern char *D_0021B094;

extern void func_02FC08(struct Obj *a0);

static __inline__ void Rebase(int *slot)
{
    if (*slot != 0) {
        *slot = (int)(D_0021B094 + *slot);
    }
}

static __inline__ void RebaseChecked(int *slot)
{
    char *entry;

    if (*slot != 0) {
        entry = D_0021B094 + *slot;
        if (*(int *)(entry + 0x40) == 0) {
            *slot = 0;
        } else {
            *slot = (int)entry;
        }
    }
}

void func_173520(char *object)
{
    char *info;

    info = *(char **)(object + 0x54);
    RebaseChecked((int *)(info + 0x2C));
    RebaseChecked((int *)(info + 0x30));
    Rebase((int *)(info + 0x34));
    func_02FC08((struct Obj *)info);
    RebaseChecked((int *)(info + 0x38));
    Rebase((int *)(info + 0x3C));
}
