/* LEVEL_09:0x18F0C0 -- runs the shared handler on the object's attached item when there is one. */
typedef struct {
    char pad_00[0x18];
    char *item;
} Rec;

typedef struct {
    char pad_00[0x58];
    Rec *rec;
} Obj;

extern void func_07D5B8(char *record);

void func_18F0C0(Obj *o)
{
    if (o->rec->item != 0) {
        func_07D5B8(o->rec->item);
    }
}
