/* LEVEL_09:0x0B3AB0 -- placement copy of LEVEL_01_0B6800.c: resets slot idx: runs the record init for the 0x38-byte record, clears three per-slot words, calls the two follow-up routines (the first with -1.0) and clears a fourth per-slot word. */
typedef struct {
    char pad_00[0x38];
} Rec;

extern Rec D_001E6630[];
extern int D_001E65D8[];
extern int D_001E65E8[];
extern int D_001E65F0[];
extern int D_001E66B0[];

extern void func_0B3A70(Rec *rec);
extern void func_0B44C0(float v, int idx);
extern void func_0B4B10(int idx);

void func_0B3AB0(int idx)
{
    func_0B3A70(&D_001E6630[idx]);
    D_001E65D8[idx] = 0;
    D_001E65E8[idx] = 0;
    D_001E65F0[idx] = 0;
    func_0B44C0(-1.0f, idx);
    func_0B4B10(idx);
    D_001E66B0[idx] = 0;
}
