/* LEVEL_02:0x1D1220 -- releases the proxy slot recorded at +0x120 of the object's sub-record (table entry chosen by the byte at +0x123) and marks it free. */
typedef struct {
    char pad[0x68];
} Rec68;

typedef struct {
    char pad00[0x120];
    unsigned short id;
    char pad122;
    unsigned char b123;
} Sub;

typedef struct {
    char pad00[0x58];
    Sub *sub;
} Obj;

extern Rec68 D_00246BF8[];
extern void func_09BF28(Rec68 *r, unsigned int index);

void func_1D1220(Obj *o)
{
    Sub *s;
    Rec68 *old;

    s = o->sub;
    old = (Rec68 *)(s->b123 * 0x68);
    old = (Rec68 *)((char *)D_00246BF8 + (int)old);
    if (s->id != 0xFFFF) {
        func_09BF28(old, s->id);
        s->id = 0xFFFF;
    }
}
