/* LEVEL_24:0x0B1110 -- placement copy of LEVEL_01_0B7880.c: per-slot update: starts the slot if it is idle, refreshes its record, accumulates a clamped fraction when the slot's rate is non-negative, then copies one record word over the first. */
typedef struct {
    int f00;
    char pad04[8];
    int f0C;
    char pad10[0x14];
    float f24;
    char pad28[0x10];
} Rec;

extern int D_001CD458[];
extern Rec D_001CD4B0[];
extern float D_001CD520[];
extern float D_001CD528[];

extern void func_0B0A40(int index, int input);
extern void func_0B0BE0(Rec *r);

void func_0B1110(int index)
{
    Rec *r;

    if (D_001CD458[index] == 0) {
        func_0B0A40(index, 3);
    }
    func_0B0BE0(&D_001CD4B0[index]);
    if (D_001CD528[index] >= 0.0f) {
        D_001CD520[index] = D_001CD520[index] + D_001CD4B0[index].f24;
        if (D_001CD520[index] > 1.0f) {
            D_001CD520[index] = 1.0f;
        }
    }
    r = &D_001CD4B0[index];
    r->f00 = r->f0C;
}
