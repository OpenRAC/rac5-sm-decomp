/* LEVEL_10:0x191C58 -- reports through func_0C5D98 whether none of the owner's item slots match the shared entry. */
typedef struct {
    char pad00[0x45];
    unsigned char count;
    char pad46[0x54 - 0x46];
    void **items;
} Owner;

typedef struct {
    Owner *owner;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Obj;

extern char D_0023E540[];
extern int func_084D08(void *item, char *entry);
extern void func_0C5D98(int a, int b);

void func_191C58(Obj *o)
{
    unsigned int i = 0;
    int r = 1;
    Rec *rec = o->rec;
    char *tab = D_0023E540;
    unsigned char n = rec->owner->count;
    void *item;
    unsigned int off;

    for (; i < n; i++) {
        off = i * 4;
        item = *(void **)((char *)rec->owner->items + off);
        if (item == 0)
            continue;
        if (func_084D08(item, tab + 0x30) != 0) {
            r = 0;
            break;
        }
    }
    func_0C5D98(r, 1);
}
