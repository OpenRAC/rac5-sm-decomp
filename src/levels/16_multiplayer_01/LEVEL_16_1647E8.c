/* LEVEL_16:0x1647E8 -- calls func_1885E0 with 1.0f, the object, its sub-record and the 0x18-byte table entry selected by the sub-record's byte at +0x24. */
typedef struct {
    char pad[0x18];
} Entry;

typedef struct {
    char pad00[0x24];
    unsigned char b24;
} Sub;

typedef struct {
    char pad00[0x58];
    Sub *sub;
} Obj;

extern Entry D_001D6248[];
extern void func_1885E0(float scale, Obj *o, Sub *s, Entry *e);

void func_1647E8(Obj *o)
{
    func_1885E0(1.0f, o, o->sub, &D_001D6248[o->sub->b24]);
}
