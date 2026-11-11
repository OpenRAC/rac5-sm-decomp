/* LEVEL_21:0x096D10 -- placement copy of LEVEL_01_0B6800.c: resets slot idx: runs the record init for the 0x38-byte record, clears three per-slot words, calls the two follow-up routines (the first with -1.0) and clears a fourth per-slot word. */
typedef struct {
    char pad_00[0x38];
} Rec;

extern Rec D_001514B0[];
extern int D_00151458[];
extern int D_00151468[];
extern int D_00151470[];
extern int D_00151530[];

extern void func_096CD0(Rec *rec);
extern void func_097760(float v, int idx);
extern void func_097F00(int idx);

void func_096D10(int idx)
{
    func_096CD0(&D_001514B0[idx]);
    D_00151458[idx] = 0;
    D_00151468[idx] = 0;
    D_00151470[idx] = 0;
    func_097760(-1.0f, idx);
    func_097F00(idx);
    D_00151530[idx] = 0;
}
