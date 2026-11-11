/* LEVEL_24:0x151AF8 -- placement copy of LEVEL_01_168218.c: releases the record's linked item (clearing the global slot if it is the current one) and zeroes the link. */
typedef struct {
    char pad00[0x10];
    int *item;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Obj;

extern int *D_001C7018;
extern void func_090798(int *address);

void func_151AF8(Obj *o)
{
    Rec *r = o->rec;

    if (r->item != 0) {
        if (r->item == D_001C7018) {
            D_001C7018 = 0;
        } else {
            func_090798(r->item);
        }
    }
    r->item = 0;
}
