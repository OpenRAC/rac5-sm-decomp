/* LEVEL_19:0x0A5188 -- placement copy of LEVEL_01_0B6800.c: resets slot idx: runs the record init for the 0x38-byte record, clears three per-slot words, calls the two follow-up routines (the first with -1.0) and clears a fourth per-slot word. */
typedef struct {
    char pad_00[0x38];
} Rec;

extern Rec D_001ABA30[];
extern int D_001AB9D8[];
extern int D_001AB9E8[];
extern int D_001AB9F0[];
extern int D_001ABAB0[];

extern void func_0A5148(Rec *rec);
extern void func_0A5B08(float v, int idx);
extern void func_0A6160(int idx);

void func_0A5188(int idx)
{
    func_0A5148(&D_001ABA30[idx]);
    D_001AB9D8[idx] = 0;
    D_001AB9E8[idx] = 0;
    D_001AB9F0[idx] = 0;
    func_0A5B08(-1.0f, idx);
    func_0A6160(idx);
    D_001ABAB0[idx] = 0;
}
