/* LEVEL_04:0x0BC008 -- placement copy of LEVEL_01_0B6800.c: resets slot idx: runs the record init for the 0x38-byte record, clears three per-slot words, calls the two follow-up routines (the first with -1.0) and clears a fourth per-slot word. */
typedef struct {
    char pad_00[0x38];
} Rec;

extern Rec D_00215CF0[];
extern int D_00215C98[];
extern int D_00215CA8[];
extern int D_00215CB0[];
extern int D_00215D70[];

extern void func_0BBFC8(Rec *rec);
extern void func_0BCA18(float v, int idx);
extern void func_0BD068(int idx);

void func_0BC008(int idx)
{
    func_0BBFC8(&D_00215CF0[idx]);
    D_00215C98[idx] = 0;
    D_00215CA8[idx] = 0;
    D_00215CB0[idx] = 0;
    func_0BCA18(-1.0f, idx);
    func_0BD068(idx);
    D_00215D70[idx] = 0;
}
