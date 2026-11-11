/* LEVEL_20:0x08FE90 -- placement copy of LEVEL_01_0B6800.c: resets slot idx: runs the record init for the 0x38-byte record, clears three per-slot words, calls the two follow-up routines (the first with -1.0) and clears a fourth per-slot word. */
typedef struct {
    char pad_00[0x38];
} Rec;

extern Rec D_0010CF90[];
extern int D_0010CF38[];
extern int D_0010CF48[];
extern int D_0010CF50[];
extern int D_0010D010[];

extern void func_08FE50(Rec *rec);
extern void func_090810(float v, int idx);
extern void func_090E20(int idx);

void func_08FE90(int idx)
{
    func_08FE50(&D_0010CF90[idx]);
    D_0010CF38[idx] = 0;
    D_0010CF48[idx] = 0;
    D_0010CF50[idx] = 0;
    func_090810(-1.0f, idx);
    func_090E20(idx);
    D_0010D010[idx] = 0;
}
