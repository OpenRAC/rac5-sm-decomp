/* LEVEL_07:0x0B98E0 -- placement copy of LEVEL_01_0B7880.c: per-slot update: starts the slot if it is idle, refreshes its record, accumulates a clamped fraction when the slot's rate is non-negative, then copies one record word over the first. */
typedef struct {
    int f00;
    char pad04[8];
    int f0C;
    char pad10[0x14];
    float f24;
    char pad28[0x10];
} Rec;

extern int D_00210AD8[];
extern Rec D_00210B30[];
extern float D_00210BA0[];
extern float D_00210BA8[];

extern void func_0B9210(int index, int input);
extern void func_0B93B0(Rec *r);

void func_0B98E0(int index)
{
    Rec *r;

    if (D_00210AD8[index] == 0) {
        func_0B9210(index, 3);
    }
    func_0B93B0(&D_00210B30[index]);
    if (D_00210BA8[index] >= 0.0f) {
        D_00210BA0[index] = D_00210BA0[index] + D_00210B30[index].f24;
        if (D_00210BA0[index] > 1.0f) {
            D_00210BA0[index] = 1.0f;
        }
    }
    r = &D_00210B30[index];
    r->f00 = r->f0C;
}
