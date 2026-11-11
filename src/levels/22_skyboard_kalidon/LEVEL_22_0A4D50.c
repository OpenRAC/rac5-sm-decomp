/* LEVEL_22:0x0A4D50 -- placement copy of LEVEL_01_0B6800.c: resets slot idx: runs the record init for the 0x38-byte record, clears three per-slot words, calls the two follow-up routines (the first with -1.0) and clears a fourth per-slot word. */
typedef struct {
    char pad_00[0x38];
} Rec;

extern Rec D_0015BBB0[];
extern int D_0015BB58[];
extern int D_0015BB68[];
extern int D_0015BB70[];
extern int D_0015BC30[];

extern void func_0A4D10(Rec *rec);
extern void func_0A5760(float v, int idx);
extern void func_0A5DB0(int idx);

void func_0A4D50(int idx)
{
    func_0A4D10(&D_0015BBB0[idx]);
    D_0015BB58[idx] = 0;
    D_0015BB68[idx] = 0;
    D_0015BB70[idx] = 0;
    func_0A5760(-1.0f, idx);
    func_0A5DB0(idx);
    D_0015BC30[idx] = 0;
}
