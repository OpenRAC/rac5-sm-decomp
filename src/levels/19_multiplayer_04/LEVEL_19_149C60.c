/* LEVEL_19:0x149C60 -- starts the object's lookup: clears its 0x28-byte data block, fails when the record is incomplete, and either (when the helper accepts the two selector bytes) binds the record, runs the follow-up and arms the data block, or releases the target and flags it as failed (-1). */
extern void *memset(void *, int, unsigned int);
extern int func_113230(int a0, int a1, int a2);
extern void func_149E00(char *record);
extern void func_1481E8(char *a, char *b);
extern void func_076500(char *a);

typedef struct Target {
    char pad_00[0x64];
    unsigned int flags;
} Target;

typedef struct Rec {
    Target *target;
    char *w4;
    char *w8;
    char pad_0C[4];
    unsigned char b10;
    unsigned char b11;
} Rec;

int func_149C60(char *obj)
{
    char *data;
    Rec *r;

    data = *(char **)(obj + 0x58);
    r = *(Rec **)(obj + 0x54);
    memset(data, 0, 0x28);
    if (r->target == 0) {
        return 0;
    }
    if (r->w8 == 0) {
        return 0;
    }
    if (r->w4 == 0) {
        return 0;
    }
    if (func_113230(r->b10, 0, r->b11) != 0) {
        func_076500(r->w8);
        r->target->flags |= 0x200000;
        return -1;
    }
    func_1481E8((char *)r->target, r->w4);
    func_149E00(obj);
    data[0x24] = 1;
    return 1;
}
