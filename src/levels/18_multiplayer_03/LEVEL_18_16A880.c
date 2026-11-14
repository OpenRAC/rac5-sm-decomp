/* LEVEL_18:0x16A880 -- placement copy of LEVEL_17_15E210.c: starts the object's lookup: clears its 0x34-byte data block, fails when the record is incomplete, and either (when the helper accepts the three selector bytes) runs the follow-up and arms the data block, or releases the target and flags it as failed (-1). */
extern void *memset(void *, int, unsigned int);
extern int func_111840(int a0, int a1, int a2);
extern void func_16AA38(char *record);
extern void func_075998(void *o);

typedef struct Target {
    char pad_00[0x64];
    unsigned int flags;
} Target;

typedef struct Rec {
    Target *target;
    char *w4;
    char pad_08[4];
    unsigned char b0C;
    unsigned char b0D;
    unsigned char b0E;
} Rec;

int func_16A880(char *obj)
{
    char *data;
    Rec *r;

    data = *(char **)(obj + 0x58);
    r = *(Rec **)(obj + 0x54);
    memset(data, 0, 0x34);
    if (r->target == 0)
        return 0;
    if (r->w4 == 0)
        return 0;
    if (func_111840(r->b0C, r->b0D, r->b0E) != 0) {
        func_075998(r->w4);
        r->target->flags |= 0x200000;
        return -1;
    }
    func_16AA38(obj);
    data[0x24] = 1;
    *(int *)(data + 0x28) = 0x28;
    return 1;
}
