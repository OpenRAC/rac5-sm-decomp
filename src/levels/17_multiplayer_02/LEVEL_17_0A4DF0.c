/* LEVEL_17:0x0A4DF0 -- placement copy of LEVEL_01_0B6800.c: resets slot idx: runs the record init for the 0x38-byte record, clears three per-slot words, calls the two follow-up routines (the first with -1.0) and clears a fourth per-slot word. */
typedef struct {
    char pad_00[0x38];
} Rec;

extern Rec D_0019DEB0[];
extern int D_0019DE58[];
extern int D_0019DE68[];
extern int D_0019DE70[];
extern int D_0019DF30[];

extern void func_0A4DB0(Rec *rec);
extern void func_0A5770(float v, int idx);
extern void func_0A5DC8(int idx);

void func_0A4DF0(int idx)
{
    func_0A4DB0(&D_0019DEB0[idx]);
    D_0019DE58[idx] = 0;
    D_0019DE68[idx] = 0;
    D_0019DE70[idx] = 0;
    func_0A5770(-1.0f, idx);
    func_0A5DC8(idx);
    D_0019DF30[idx] = 0;
}
