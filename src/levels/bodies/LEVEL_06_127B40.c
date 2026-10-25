/* LEVEL_06.REL:0x127B40 -- hands the four floats of the current record to
   the trace routine with the fixed flags. */
typedef struct {
    char pad0[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Rec;

extern Rec *D_001F5B30;

void func_07A5B0(int a0, Rec *a1, int a2, int a3, int a4, int a5, int a6,
                 int a7, float f0, float f1, float f2, float f3);

void func_127B40(int a0)
{
    Rec *p = D_001F5B30;

    if (!p) return;
    func_07A5B0(a0, p, 0, 0, 0, 0, 0, 1, p->f_14, p->f_18, p->f_1C, p->f_20);
}
