/* LEVEL_05:0x0B4DA8 -- placement copy of LEVEL_01_0B6800.c: resets slot idx: runs the record init for the 0x38-byte record, clears three per-slot words, calls the two follow-up routines (the first with -1.0) and clears a fourth per-slot word. */
typedef struct {
    char pad_00[0x38];
} Rec;

extern Rec D_001EBBB0[];
extern int D_001EBB58[];
extern int D_001EBB68[];
extern int D_001EBB70[];
extern int D_001EBC30[];

extern void func_0B4D68(Rec *rec);
extern void func_0B57B8(float v, int idx);
extern void func_0B5E08(int idx);

void func_0B4DA8(int idx)
{
    func_0B4D68(&D_001EBBB0[idx]);
    D_001EBB58[idx] = 0;
    D_001EBB68[idx] = 0;
    D_001EBB70[idx] = 0;
    func_0B57B8(-1.0f, idx);
    func_0B5E08(idx);
    D_001EBC30[idx] = 0;
}
