/* LEVEL_02:0x0BD110 -- placement copy of LEVEL_01_0B6800.c: resets slot idx: runs the record init for the 0x38-byte record, clears three per-slot words, calls the two follow-up routines (the first with -1.0) and clears a fourth per-slot word. */
typedef struct {
    char pad_00[0x38];
} Rec;

extern Rec D_002117F0[];
extern int D_00211798[];
extern int D_002117A8[];
extern int D_002117B0[];
extern int D_00211870[];

extern void func_0BD0D0(Rec *rec);
extern void func_0BDB20(float v, int idx);
extern void func_0BE170(int idx);

void func_0BD110(int idx)
{
    func_0BD0D0(&D_002117F0[idx]);
    D_00211798[idx] = 0;
    D_002117A8[idx] = 0;
    D_002117B0[idx] = 0;
    func_0BDB20(-1.0f, idx);
    func_0BE170(idx);
    D_00211870[idx] = 0;
}
