/* LEVEL_18:0x16A4D0 -- placement copy of LEVEL_16_1647E8.c: calls func_189A80 with 1.0f, the object, its sub-record and the 0x18-byte table entry selected by the sub-record's byte at +0x24. */
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

extern Entry D_001D7458[];
extern void func_189A80(float scale, Obj *o, Sub *s, Entry *e);

void func_16A4D0(Obj *o)
{
    func_189A80(1.0f, o, o->sub, &D_001D7458[o->sub->b24]);
}
