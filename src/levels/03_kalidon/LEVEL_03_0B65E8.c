/* LEVEL_03:0x0B65E8 -- placement copy of LEVEL_01_0B6800.c: resets slot idx: runs the record init for the 0x38-byte record, clears three per-slot words, calls the two follow-up routines (the first with -1.0) and clears a fourth per-slot word. */
typedef struct {
    char pad_00[0x38];
} Rec;

extern Rec D_00214EB0[];
extern int D_00214E58[];
extern int D_00214E68[];
extern int D_00214E70[];
extern int D_00214F30[];

extern void func_0B65A8(Rec *rec);
extern void func_0B6FF8(float v, int idx);
extern void func_0B7648(int idx);

void func_0B65E8(int idx)
{
    func_0B65A8(&D_00214EB0[idx]);
    D_00214E58[idx] = 0;
    D_00214E68[idx] = 0;
    D_00214E70[idx] = 0;
    func_0B6FF8(-1.0f, idx);
    func_0B7648(idx);
    D_00214F30[idx] = 0;
}
