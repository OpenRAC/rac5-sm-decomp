/* LEVEL_09:0x0B4B30 -- placement copy of LEVEL_01_0B7880.c: per-slot update: starts the slot if it is idle, refreshes its record, accumulates a clamped fraction when the slot's rate is non-negative, then copies one record word over the first. */
typedef struct {
    int f00;
    char pad04[8];
    int f0C;
    char pad10[0x14];
    float f24;
    char pad28[0x10];
} Rec;

extern int D_001E65D8[];
extern Rec D_001E6630[];
extern float D_001E66A0[];
extern float D_001E66A8[];

extern void func_0B4460(int index, int input);
extern void func_0B4600(Rec *r);

void func_0B4B30(int index)
{
    Rec *r;

    if (D_001E65D8[index] == 0) {
        func_0B4460(index, 3);
    }
    func_0B4600(&D_001E6630[index]);
    if (D_001E66A8[index] >= 0.0f) {
        D_001E66A0[index] = D_001E66A0[index] + D_001E6630[index].f24;
        if (D_001E66A0[index] > 1.0f) {
            D_001E66A0[index] = 1.0f;
        }
    }
    r = &D_001E6630[index];
    r->f00 = r->f0C;
}
