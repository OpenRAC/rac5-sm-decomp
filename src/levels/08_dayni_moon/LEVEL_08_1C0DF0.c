/* LEVEL_08:0x1C0DF0 -- turns the stored offsets of the object's resource block (+0x54) into pointers by adding the global base: plain offsets at +0x2C, +0x38, +0x40, +0x44 and checked ones at +0x30 and +0x48 (cleared when the target's word at +0x40 is zero); runs the block fix-up routine between the two groups. */
struct Obj;

extern char *D_0024FC54;

extern void func_0300E0(struct Obj *a0);

static __inline__ void Rebase(int *slot)
{
    if (*slot != 0) {
        *slot = (int)(D_0024FC54 + *slot);
    }
}

static __inline__ void RebaseChecked(int *slot)
{
    char *entry;

    if (*slot != 0) {
        entry = D_0024FC54 + *slot;
        if (*(int *)(entry + 0x40) == 0) {
            *slot = 0;
        } else {
            *slot = (int)entry;
        }
    }
}

void func_1C0DF0(char *object)
{
    char *info;

    info = *(char **)(object + 0x54);
    Rebase((int *)(info + 0x2C));
    RebaseChecked((int *)(info + 0x30));
    Rebase((int *)(info + 0x38));
    func_0300E0((struct Obj *)info);
    Rebase((int *)(info + 0x40));
    Rebase((int *)(info + 0x44));
    RebaseChecked((int *)(info + 0x48));
}
