/* LEVEL_18:0x0A4888 -- placement copy of LEVEL_01_0B6800.c: resets slot idx: runs the record init for the 0x38-byte record, clears three per-slot words, calls the two follow-up routines (the first with -1.0) and clears a fourth per-slot word. */
typedef struct {
    char pad_00[0x38];
} Rec;

extern Rec D_001ABD30[];
extern int D_001ABCD8[];
extern int D_001ABCE8[];
extern int D_001ABCF0[];
extern int D_001ABDB0[];

extern void func_0A4848(Rec *rec);
extern void func_0A5208(float v, int idx);
extern void func_0A5860(int idx);

void func_0A4888(int idx)
{
    func_0A4848(&D_001ABD30[idx]);
    D_001ABCD8[idx] = 0;
    D_001ABCE8[idx] = 0;
    D_001ABCF0[idx] = 0;
    func_0A5208(-1.0f, idx);
    func_0A5860(idx);
    D_001ABDB0[idx] = 0;
}
