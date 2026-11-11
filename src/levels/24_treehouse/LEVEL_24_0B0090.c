/* LEVEL_24:0x0B0090 -- placement copy of LEVEL_01_0B6800.c: resets slot idx: runs the record init for the 0x38-byte record, clears three per-slot words, calls the two follow-up routines (the first with -1.0) and clears a fourth per-slot word. */
typedef struct {
    char pad_00[0x38];
} Rec;

extern Rec D_001CD4B0[];
extern int D_001CD458[];
extern int D_001CD468[];
extern int D_001CD470[];
extern int D_001CD530[];

extern void func_0B0050(Rec *rec);
extern void func_0B0AA0(float v, int idx);
extern void func_0B10F0(int idx);

void func_0B0090(int idx)
{
    func_0B0050(&D_001CD4B0[idx]);
    D_001CD458[idx] = 0;
    D_001CD468[idx] = 0;
    D_001CD470[idx] = 0;
    func_0B0AA0(-1.0f, idx);
    func_0B10F0(idx);
    D_001CD530[idx] = 0;
}
