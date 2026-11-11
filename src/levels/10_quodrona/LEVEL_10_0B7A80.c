/* LEVEL_10:0x0B7A80 -- placement copy of LEVEL_01_0B6800.c: resets slot idx: runs the record init for the 0x38-byte record, clears three per-slot words, calls the two follow-up routines (the first with -1.0) and clears a fourth per-slot word. */
typedef struct {
    char pad_00[0x38];
} Rec;

extern Rec D_00205830[];
extern int D_002057D8[];
extern int D_002057E8[];
extern int D_002057F0[];
extern int D_002058B0[];

extern void func_0B7A40(Rec *rec);
extern void func_0B84D0(float v, int idx);
extern void func_0B8BA8(int idx);

void func_0B7A80(int idx)
{
    func_0B7A40(&D_00205830[idx]);
    D_002057D8[idx] = 0;
    D_002057E8[idx] = 0;
    D_002057F0[idx] = 0;
    func_0B84D0(-1.0f, idx);
    func_0B8BA8(idx);
    D_002058B0[idx] = 0;
}
