/* LEVEL_17:0x0A5E00 -- placement copy of LEVEL_01_0B7880.c: per-slot update: starts the slot if it is idle, refreshes its record, accumulates a clamped fraction when the slot's rate is non-negative, then copies one record word over the first. */
typedef struct {
    int f00;
    char pad04[8];
    int f0C;
    char pad10[0x14];
    float f24;
    char pad28[0x10];
} Rec;

extern int D_0019DE58[];
extern Rec D_0019DEB0[];
extern float D_0019DF20[];
extern float D_0019DF28[];

extern void func_0A5710(int index, int input);
extern void func_0A58B8(Rec *r);

void func_0A5E00(int index)
{
    Rec *r;

    if (D_0019DE58[index] == 0) {
        func_0A5710(index, 3);
    }
    func_0A58B8(&D_0019DEB0[index]);
    if (D_0019DF28[index] >= 0.0f) {
        D_0019DF20[index] = D_0019DF20[index] + D_0019DEB0[index].f24;
        if (D_0019DF20[index] > 1.0f) {
            D_0019DF20[index] = 1.0f;
        }
    }
    r = &D_0019DEB0[index];
    r->f00 = r->f0C;
}
