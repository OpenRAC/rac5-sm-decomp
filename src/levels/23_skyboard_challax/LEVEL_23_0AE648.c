/* LEVEL_23:0x0AE648 -- placement copy of LEVEL_01_0B7880.c: per-slot update: starts the slot if it is idle, refreshes its record, accumulates a clamped fraction when the slot's rate is non-negative, then copies one record word over the first. */
typedef struct {
    int f00;
    char pad04[8];
    int f0C;
    char pad10[0x14];
    float f24;
    char pad28[0x10];
} Rec;

extern int D_001CFBD8[];
extern Rec D_001CFC30[];
extern float D_001CFCA0[];
extern float D_001CFCA8[];

extern void func_0ADF78(int index, int input);
extern void func_0AE118(Rec *r);

void func_0AE648(int index)
{
    Rec *r;

    if (D_001CFBD8[index] == 0) {
        func_0ADF78(index, 3);
    }
    func_0AE118(&D_001CFC30[index]);
    if (D_001CFCA8[index] >= 0.0f) {
        D_001CFCA0[index] = D_001CFCA0[index] + D_001CFC30[index].f24;
        if (D_001CFCA0[index] > 1.0f) {
            D_001CFCA0[index] = 1.0f;
        }
    }
    r = &D_001CFC30[index];
    r->f00 = r->f0C;
}
