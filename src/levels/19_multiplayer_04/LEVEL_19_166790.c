/* LEVEL_19:0x166790 -- placement copy of LEVEL_17_15E210.c: starts the object's lookup: clears its 0x34-byte data block, fails when the record is incomplete, and either (when the helper accepts the three selector bytes) runs the follow-up and arms the data block, or releases the target and flags it as failed (-1). */
extern void *memset(void *, int, unsigned int);
extern int func_113230(int a0, int a1, int a2);
extern void func_166948(char *record);
extern void func_076500(void *o);

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

int func_166790(char *obj)
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
    if (func_113230(r->b0C, r->b0D, r->b0E) != 0) {
        func_076500(r->w4);
        r->target->flags |= 0x200000;
        return -1;
    }
    func_166948(obj);
    data[0x24] = 1;
    *(int *)(data + 0x28) = 0x28;
    return 1;
}
