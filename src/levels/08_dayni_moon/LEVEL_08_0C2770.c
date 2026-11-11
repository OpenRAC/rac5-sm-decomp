/* LEVEL_08:0x0C2770 -- placement copy of LEVEL_01_0B7880.c: per-slot update: starts the slot if it is idle, refreshes its record, accumulates a clamped fraction when the slot's rate is non-negative, then copies one record word over the first. */
typedef struct {
    int f00;
    char pad04[8];
    int f0C;
    char pad10[0x14];
    float f24;
    char pad28[0x10];
} Rec;

extern int D_00245698[];
extern Rec D_002456F0[];
extern float D_00245760[];
extern float D_00245768[];

extern void func_0C20A0(int index, int input);
extern void func_0C2240(Rec *r);

void func_0C2770(int index)
{
    Rec *r;

    if (D_00245698[index] == 0) {
        func_0C20A0(index, 3);
    }
    func_0C2240(&D_002456F0[index]);
    if (D_00245768[index] >= 0.0f) {
        D_00245760[index] = D_00245760[index] + D_002456F0[index].f24;
        if (D_00245760[index] > 1.0f) {
            D_00245760[index] = 1.0f;
        }
    }
    r = &D_002456F0[index];
    r->f00 = r->f0C;
}
