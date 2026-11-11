/* LEVEL_07:0x0B8860 -- placement copy of LEVEL_01_0B6800.c: resets slot idx: runs the record init for the 0x38-byte record, clears three per-slot words, calls the two follow-up routines (the first with -1.0) and clears a fourth per-slot word. */
typedef struct {
    char pad_00[0x38];
} Rec;

extern Rec D_00210B30[];
extern int D_00210AD8[];
extern int D_00210AE8[];
extern int D_00210AF0[];
extern int D_00210BB0[];

extern void func_0B8820(Rec *rec);
extern void func_0B9270(float v, int idx);
extern void func_0B98C0(int idx);

void func_0B8860(int idx)
{
    func_0B8820(&D_00210B30[idx]);
    D_00210AD8[idx] = 0;
    D_00210AE8[idx] = 0;
    D_00210AF0[idx] = 0;
    func_0B9270(-1.0f, idx);
    func_0B98C0(idx);
    D_00210BB0[idx] = 0;
}
