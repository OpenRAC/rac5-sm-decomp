/* LEVEL_18:0x0A5898 -- placement copy of LEVEL_01_0B7880.c: per-slot update: starts the slot if it is idle, refreshes its record, accumulates a clamped fraction when the slot's rate is non-negative, then copies one record word over the first. */
typedef struct {
    int f00;
    char pad04[8];
    int f0C;
    char pad10[0x14];
    float f24;
    char pad28[0x10];
} Rec;

extern int D_001ABCD8[];
extern Rec D_001ABD30[];
extern float D_001ABDA0[];
extern float D_001ABDA8[];

extern void func_0A51A8(int index, int input);
extern void func_0A5350(Rec *r);

void func_0A5898(int index)
{
    Rec *r;

    if (D_001ABCD8[index] == 0) {
        func_0A51A8(index, 3);
    }
    func_0A5350(&D_001ABD30[index]);
    if (D_001ABDA8[index] >= 0.0f) {
        D_001ABDA0[index] = D_001ABDA0[index] + D_001ABD30[index].f24;
        if (D_001ABDA0[index] > 1.0f) {
            D_001ABDA0[index] = 1.0f;
        }
    }
    r = &D_001ABD30[index];
    r->f00 = r->f0C;
}
