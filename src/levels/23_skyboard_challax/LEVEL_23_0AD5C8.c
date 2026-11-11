/* LEVEL_23:0x0AD5C8 -- placement copy of LEVEL_01_0B6800.c: resets slot idx: runs the record init for the 0x38-byte record, clears three per-slot words, calls the two follow-up routines (the first with -1.0) and clears a fourth per-slot word. */
typedef struct {
    char pad_00[0x38];
} Rec;

extern Rec D_001CFC30[];
extern int D_001CFBD8[];
extern int D_001CFBE8[];
extern int D_001CFBF0[];
extern int D_001CFCB0[];

extern void func_0AD588(Rec *rec);
extern void func_0ADFD8(float v, int idx);
extern void func_0AE628(int idx);

void func_0AD5C8(int idx)
{
    func_0AD588(&D_001CFC30[idx]);
    D_001CFBD8[idx] = 0;
    D_001CFBE8[idx] = 0;
    D_001CFBF0[idx] = 0;
    func_0ADFD8(-1.0f, idx);
    func_0AE628(idx);
    D_001CFCB0[idx] = 0;
}
