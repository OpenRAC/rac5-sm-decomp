/* LEVEL_07:0x16B680 -- placement copy of LEVEL_01_168218.c: releases the record's linked item (clearing the global slot if it is the current one) and zeroes the link. */
typedef struct {
    char pad00[0x10];
    int *item;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Obj;

extern int *D_0020A698;
extern void func_099820(int *address);

void func_16B680(Obj *o)
{
    Rec *r = o->rec;

    if (r->item != 0) {
        if (r->item == D_0020A698) {
            D_0020A698 = 0;
        } else {
            func_099820(r->item);
        }
    }
    r->item = 0;
}
