/* LEVEL_21:0x097F20 -- placement copy of LEVEL_01_0B7880.c: per-slot update: starts the slot if it is idle, refreshes its record, accumulates a clamped fraction when the slot's rate is non-negative, then copies one record word over the first. */
typedef struct {
    int f00;
    char pad04[8];
    int f0C;
    char pad10[0x14];
    float f24;
    char pad28[0x10];
} Rec;

extern int D_00151458[];
extern Rec D_001514B0[];
extern float D_00151520[];
extern float D_00151528[];

extern void func_0976E0(int index, int input);
extern void func_0979F0(Rec *r);

void func_097F20(int index)
{
    Rec *r;

    if (D_00151458[index] == 0) {
        func_0976E0(index, 3);
    }
    func_0979F0(&D_001514B0[index]);
    if (D_00151528[index] >= 0.0f) {
        D_00151520[index] = D_00151520[index] + D_001514B0[index].f24;
        if (D_00151520[index] > 1.0f) {
            D_00151520[index] = 1.0f;
        }
    }
    r = &D_001514B0[index];
    r->f00 = r->f0C;
}
