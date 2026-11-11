/* LEVEL_16:0x0A5910 -- placement copy of LEVEL_01_0B6800.c: resets slot idx: runs the record init for the 0x38-byte record, clears three per-slot words, calls the two follow-up routines (the first with -1.0) and clears a fourth per-slot word. */
typedef struct {
    char pad_00[0x38];
} Rec;

extern Rec D_001AA8B0[];
extern int D_001AA858[];
extern int D_001AA868[];
extern int D_001AA870[];
extern int D_001AA930[];

extern void func_0A58D0(Rec *rec);
extern void func_0A6290(float v, int idx);
extern void func_0A68A0(int idx);

void func_0A5910(int idx)
{
    func_0A58D0(&D_001AA8B0[idx]);
    D_001AA858[idx] = 0;
    D_001AA868[idx] = 0;
    D_001AA870[idx] = 0;
    func_0A6290(-1.0f, idx);
    func_0A68A0(idx);
    D_001AA930[idx] = 0;
}
