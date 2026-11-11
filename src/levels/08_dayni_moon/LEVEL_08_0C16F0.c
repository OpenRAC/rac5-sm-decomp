/* LEVEL_08:0x0C16F0 -- placement copy of LEVEL_01_0B6800.c: resets slot idx: runs the record init for the 0x38-byte record, clears three per-slot words, calls the two follow-up routines (the first with -1.0) and clears a fourth per-slot word. */
typedef struct {
    char pad_00[0x38];
} Rec;

extern Rec D_002456F0[];
extern int D_00245698[];
extern int D_002456A8[];
extern int D_002456B0[];
extern int D_00245770[];

extern void func_0C16B0(Rec *rec);
extern void func_0C2100(float v, int idx);
extern void func_0C2750(int idx);

void func_0C16F0(int idx)
{
    func_0C16B0(&D_002456F0[idx]);
    D_00245698[idx] = 0;
    D_002456A8[idx] = 0;
    D_002456B0[idx] = 0;
    func_0C2100(-1.0f, idx);
    func_0C2750(idx);
    D_00245770[idx] = 0;
}
