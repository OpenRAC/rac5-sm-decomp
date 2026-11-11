/* LEVEL_02:0x0BE190 -- placement copy of LEVEL_01_0B7880.c: per-slot update: starts the slot if it is idle, refreshes its record, accumulates a clamped fraction when the slot's rate is non-negative, then copies one record word over the first. */
typedef struct {
    int f00;
    char pad04[8];
    int f0C;
    char pad10[0x14];
    float f24;
    char pad28[0x10];
} Rec;

extern int D_00211798[];
extern Rec D_002117F0[];
extern float D_00211860[];
extern float D_00211868[];

extern void func_0BDAC0(int index, int input);
extern void func_0BDC60(Rec *r);

void func_0BE190(int index)
{
    Rec *r;

    if (D_00211798[index] == 0) {
        func_0BDAC0(index, 3);
    }
    func_0BDC60(&D_002117F0[index]);
    if (D_00211868[index] >= 0.0f) {
        D_00211860[index] = D_00211860[index] + D_002117F0[index].f24;
        if (D_00211860[index] > 1.0f) {
            D_00211860[index] = 1.0f;
        }
    }
    r = &D_002117F0[index];
    r->f00 = r->f0C;
}
