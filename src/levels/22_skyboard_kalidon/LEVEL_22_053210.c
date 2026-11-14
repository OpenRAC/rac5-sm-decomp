/* LEVEL_22:0x053210 -- stores a scale value and flag in the global block and runs the linked object's helper with the stored word. */
typedef struct Sub { char pad00[0x2C]; void *w2C; } Sub;
typedef struct Rec { char pad00[0x54]; Sub *f54; } Rec;
typedef struct Blk { char pad00[0x168]; Rec *f168; char pad16C[0x3C]; float f1A8; char pad1AC[8]; unsigned char b1B4; } Blk;
extern Blk D_0018AB78;
extern void *D_001872DC;
extern int func_130CF8(void *o, void *v, int flag);
void func_053210(int n)
{
    D_0018AB78.b1B4 = 1;
    D_0018AB78.f1A8 = (float)n;
    func_130CF8(D_0018AB78.f168->f54->w2C, D_001872DC, 1);
}
