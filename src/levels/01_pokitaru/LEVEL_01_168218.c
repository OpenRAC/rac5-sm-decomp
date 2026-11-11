/* LEVEL_01:0x168218 -- releases the record's linked item (clearing the global slot if it is the current one) and zeroes the link. */
typedef struct {
    char pad00[0x10];
    int *item;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Obj;

extern int *D_001F6398;
extern void func_097840(int *address);

void func_168218(Obj *o)
{
    Rec *r = o->rec;

    if (r->item != 0) {
        if (r->item == D_001F6398) {
            D_001F6398 = 0;
        } else {
            func_097840(r->item);
        }
    }
    r->item = 0;
}
