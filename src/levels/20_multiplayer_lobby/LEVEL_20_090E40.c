/* LEVEL_20:0x090E40 -- placement copy of LEVEL_01_0B7880.c: per-slot update: starts the slot if it is idle, refreshes its record, accumulates a clamped fraction when the slot's rate is non-negative, then copies one record word over the first. */
typedef struct {
    int f00;
    char pad04[8];
    int f0C;
    char pad10[0x14];
    float f24;
    char pad28[0x10];
} Rec;

extern int D_0010CF38[];
extern Rec D_0010CF90[];
extern float D_0010D000[];
extern float D_0010D008[];

extern void func_0907B0(int index, int input);
extern void func_090910(Rec *r);

void func_090E40(int index)
{
    Rec *r;

    if (D_0010CF38[index] == 0) {
        func_0907B0(index, 3);
    }
    func_090910(&D_0010CF90[index]);
    if (D_0010D008[index] >= 0.0f) {
        D_0010D000[index] = D_0010D000[index] + D_0010CF90[index].f24;
        if (D_0010D000[index] > 1.0f) {
            D_0010D000[index] = 1.0f;
        }
    }
    r = &D_0010CF90[index];
    r->f00 = r->f0C;
}
