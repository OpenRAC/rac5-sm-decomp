/* LEVEL_01:0x0B6800 -- resets slot idx: runs the record init for the 0x38-byte record, clears three per-slot words, calls the two follow-up routines (the first with -1.0) and clears a fourth per-slot word. */
typedef struct {
    char pad_00[0x38];
} Rec;

extern Rec D_001FC830[];
extern int D_001FC7D8[];
extern int D_001FC7E8[];
extern int D_001FC7F0[];
extern int D_001FC8B0[];

extern void func_0B67C0(Rec *rec);
extern void func_0B7210(float v, int idx);
extern void func_0B7860(int idx);

void func_0B6800(int idx)
{
    func_0B67C0(&D_001FC830[idx]);
    D_001FC7D8[idx] = 0;
    D_001FC7E8[idx] = 0;
    D_001FC7F0[idx] = 0;
    func_0B7210(-1.0f, idx);
    func_0B7860(idx);
    D_001FC8B0[idx] = 0;
}
