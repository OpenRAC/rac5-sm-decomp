/* LEVEL_19:0x1663E0 -- placement copy of LEVEL_16_1647E8.c: calls func_185378 with 1.0f, the object, its sub-record and the 0x18-byte table entry selected by the sub-record's byte at +0x24. */
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

extern Entry D_001D6F98[];
extern void func_185378(float scale, Obj *o, Sub *s, Entry *e);

void func_1663E0(Obj *o)
{
    func_185378(1.0f, o, o->sub, &D_001D6F98[o->sub->b24]);
}
