/* LEVEL_16:0x170490 -- true when the object has no attached item, the lookup for it fails, or the follow-up check fails. */
typedef struct {
    char pad_00[0x2C];
    int w2C;
} Link;

typedef struct {
    char pad_00[0x5C];
    char *item;
} Rec;

typedef struct {
    char pad_00[0x54];
    Link *link;
    Rec *rec;
} Obj;

extern int func_0763F8(int key, char *item);
extern int func_170290(Obj *o);

int func_170490(Obj *o)
{
    Link *link;
    char *item;

    item = o->rec->item;
    link = o->link;
    if (item != 0) {
        if (func_0763F8(link->w2C, item + 0x30) != 0) {
            return func_170290(o) == 0;
        }
    }
    return 1;
}
