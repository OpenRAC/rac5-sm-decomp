/* LEVEL_23:0x056D40 -- placement copy of LEVEL_22_053210.c: stores a scale value and flag in the global block and runs the linked object's helper with the stored word. */
typedef struct Sub { char pad00[0x2C]; void *w2C; } Sub;
typedef struct Rec { char pad00[0x54]; Sub *f54; } Rec;
typedef struct Blk { char pad00[0x168]; Rec *f168; char pad16C[0x3C]; float f1A8; char pad1AC[8]; unsigned char b1B4; } Blk;
extern Blk D_002063F8;
extern void *D_00202B5C;
extern int func_17D9D8(void *o, void *v, int flag);
void func_056D40(int n)
{
    D_002063F8.b1B4 = 1;
    D_002063F8.f1A8 = (float)n;
    func_17D9D8(D_002063F8.f168->f54->w2C, D_00202B5C, 1);
}
