/* LEVEL_06:0x0B10D0 -- placement copy of LEVEL_01_0B6800.c: resets slot idx: runs the record init for the 0x38-byte record, clears three per-slot words, calls the two follow-up routines (the first with -1.0) and clears a fourth per-slot word. */
typedef struct {
    char pad_00[0x38];
} Rec;

extern Rec D_001EB730[];
extern int D_001EB6D8[];
extern int D_001EB6E8[];
extern int D_001EB6F0[];
extern int D_001EB7B0[];

extern void func_0B1090(Rec *rec);
extern void func_0B1AE0(float v, int idx);
extern void func_0B2160(int idx);

void func_0B10D0(int idx)
{
    func_0B1090(&D_001EB730[idx]);
    D_001EB6D8[idx] = 0;
    D_001EB6E8[idx] = 0;
    D_001EB6F0[idx] = 0;
    func_0B1AE0(-1.0f, idx);
    func_0B2160(idx);
    D_001EB7B0[idx] = 0;
}
