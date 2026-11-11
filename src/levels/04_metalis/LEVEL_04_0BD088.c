/* LEVEL_04:0x0BD088 -- placement copy of LEVEL_01_0B7880.c: per-slot update: starts the slot if it is idle, refreshes its record, accumulates a clamped fraction when the slot's rate is non-negative, then copies one record word over the first. */
typedef struct {
    int f00;
    char pad04[8];
    int f0C;
    char pad10[0x14];
    float f24;
    char pad28[0x10];
} Rec;

extern int D_00215C98[];
extern Rec D_00215CF0[];
extern float D_00215D60[];
extern float D_00215D68[];

extern void func_0BC9B8(int index, int input);
extern void func_0BCB58(Rec *r);

void func_0BD088(int index)
{
    Rec *r;

    if (D_00215C98[index] == 0) {
        func_0BC9B8(index, 3);
    }
    func_0BCB58(&D_00215CF0[index]);
    if (D_00215D68[index] >= 0.0f) {
        D_00215D60[index] = D_00215D60[index] + D_00215CF0[index].f24;
        if (D_00215D60[index] > 1.0f) {
            D_00215D60[index] = 1.0f;
        }
    }
    r = &D_00215CF0[index];
    r->f00 = r->f0C;
}
