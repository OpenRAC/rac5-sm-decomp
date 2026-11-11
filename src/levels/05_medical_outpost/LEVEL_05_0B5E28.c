/* LEVEL_05:0x0B5E28 -- placement copy of LEVEL_01_0B7880.c: per-slot update: starts the slot if it is idle, refreshes its record, accumulates a clamped fraction when the slot's rate is non-negative, then copies one record word over the first. */
typedef struct {
    int f00;
    char pad04[8];
    int f0C;
    char pad10[0x14];
    float f24;
    char pad28[0x10];
} Rec;

extern int D_001EBB58[];
extern Rec D_001EBBB0[];
extern float D_001EBC20[];
extern float D_001EBC28[];

extern void func_0B5758(int index, int input);
extern void func_0B58F8(Rec *r);

void func_0B5E28(int index)
{
    Rec *r;

    if (D_001EBB58[index] == 0) {
        func_0B5758(index, 3);
    }
    func_0B58F8(&D_001EBBB0[index]);
    if (D_001EBC28[index] >= 0.0f) {
        D_001EBC20[index] = D_001EBC20[index] + D_001EBBB0[index].f24;
        if (D_001EBC20[index] > 1.0f) {
            D_001EBC20[index] = 1.0f;
        }
    }
    r = &D_001EBBB0[index];
    r->f00 = r->f0C;
}
