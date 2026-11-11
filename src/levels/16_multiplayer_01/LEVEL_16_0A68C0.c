/* LEVEL_16:0x0A68C0 -- placement copy of LEVEL_01_0B7880.c: per-slot update: starts the slot if it is idle, refreshes its record, accumulates a clamped fraction when the slot's rate is non-negative, then copies one record word over the first. */
typedef struct {
    int f00;
    char pad04[8];
    int f0C;
    char pad10[0x14];
    float f24;
    char pad28[0x10];
} Rec;

extern int D_001AA858[];
extern Rec D_001AA8B0[];
extern float D_001AA920[];
extern float D_001AA928[];

extern void func_0A6230(int index, int input);
extern void func_0A6390(Rec *r);

void func_0A68C0(int index)
{
    Rec *r;

    if (D_001AA858[index] == 0) {
        func_0A6230(index, 3);
    }
    func_0A6390(&D_001AA8B0[index]);
    if (D_001AA928[index] >= 0.0f) {
        D_001AA920[index] = D_001AA920[index] + D_001AA8B0[index].f24;
        if (D_001AA920[index] > 1.0f) {
            D_001AA920[index] = 1.0f;
        }
    }
    r = &D_001AA8B0[index];
    r->f00 = r->f0C;
}
