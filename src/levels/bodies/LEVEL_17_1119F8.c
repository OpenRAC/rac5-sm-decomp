/* LEVEL_17:0x1119F8 -- placement copy of LEVEL_16_112480.c: clears a status block of one record, then calls a helper on it. */
typedef struct { char pad_000[0x100]; unsigned short a_100; char pad_102[6]; unsigned short a_108; unsigned short a_10A; char pad_10C[0xA2D]; unsigned char b_B39; } Rec;
extern void func_036010(Rec *);
void func_1119F8(Rec *r)
{
    r->a_100 = 0x30; r->a_108 = 0; r->a_10A = 0; r->b_B39 = 0;
    func_036010(r);
}
