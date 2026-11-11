/* LEVEL_07:0x1C8750 -- placement copy of LEVEL_02_1D1220.c: releases the proxy slot recorded at +0x120 of the object's sub-record (table entry chosen by the byte at +0x123) and marks it free. */
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

extern Rec68 D_00244FF8[];
extern void func_0976E0(Rec68 *r, unsigned int index);

void func_1C8750(Obj *o)
{
    Sub *s;
    Rec68 *old;

    s = o->sub;
    old = (Rec68 *)(s->b123 * 0x68);
    old = (Rec68 *)((char *)D_00244FF8 + (int)old);
    if (s->id != 0xFFFF) {
        func_0976E0(old, s->id);
        s->id = 0xFFFF;
    }
}
