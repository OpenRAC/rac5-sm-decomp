/* LEVEL_03:0x0B7668 -- placement copy of LEVEL_01_0B7880.c: per-slot update: starts the slot if it is idle, refreshes its record, accumulates a clamped fraction when the slot's rate is non-negative, then copies one record word over the first. */
typedef struct {
    int f00;
    char pad04[8];
    int f0C;
    char pad10[0x14];
    float f24;
    char pad28[0x10];
} Rec;

extern int D_00214E58[];
extern Rec D_00214EB0[];
extern float D_00214F20[];
extern float D_00214F28[];

extern void func_0B6F98(int index, int input);
extern void func_0B7138(Rec *r);

void func_0B7668(int index)
{
    Rec *r;

    if (D_00214E58[index] == 0) {
        func_0B6F98(index, 3);
    }
    func_0B7138(&D_00214EB0[index]);
    if (D_00214F28[index] >= 0.0f) {
        D_00214F20[index] = D_00214F20[index] + D_00214EB0[index].f24;
        if (D_00214F20[index] > 1.0f) {
            D_00214F20[index] = 1.0f;
        }
    }
    r = &D_00214EB0[index];
    r->f00 = r->f0C;
}
