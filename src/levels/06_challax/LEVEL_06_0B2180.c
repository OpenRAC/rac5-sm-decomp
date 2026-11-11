/* LEVEL_06:0x0B2180 -- placement copy of LEVEL_01_0B7880.c: per-slot update: starts the slot if it is idle, refreshes its record, accumulates a clamped fraction when the slot's rate is non-negative, then copies one record word over the first. */
typedef struct {
    int f00;
    char pad04[8];
    int f0C;
    char pad10[0x14];
    float f24;
    char pad28[0x10];
} Rec;

extern int D_001EB6D8[];
extern Rec D_001EB730[];
extern float D_001EB7A0[];
extern float D_001EB7A8[];

extern void func_0B1A80(int index, int input);
extern void func_0B1C50(Rec *r);

void func_0B2180(int index)
{
    Rec *r;

    if (D_001EB6D8[index] == 0) {
        func_0B1A80(index, 3);
    }
    func_0B1C50(&D_001EB730[index]);
    if (D_001EB7A8[index] >= 0.0f) {
        D_001EB7A0[index] = D_001EB7A0[index] + D_001EB730[index].f24;
        if (D_001EB7A0[index] > 1.0f) {
            D_001EB7A0[index] = 1.0f;
        }
    }
    r = &D_001EB730[index];
    r->f00 = r->f0C;
}
