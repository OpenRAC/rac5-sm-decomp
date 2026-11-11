/* LEVEL_10:0x0B8BC8 -- placement copy of LEVEL_01_0B7880.c: per-slot update: starts the slot if it is idle, refreshes its record, accumulates a clamped fraction when the slot's rate is non-negative, then copies one record word over the first. */
typedef struct {
    int f00;
    char pad04[8];
    int f0C;
    char pad10[0x14];
    float f24;
    char pad28[0x10];
} Rec;

extern int D_002057D8[];
extern Rec D_00205830[];
extern float D_002058A0[];
extern float D_002058A8[];

extern void func_0B8450(int index, int input);
extern void func_0B8698(Rec *r);

void func_0B8BC8(int index)
{
    Rec *r;

    if (D_002057D8[index] == 0) {
        func_0B8450(index, 3);
    }
    func_0B8698(&D_00205830[index]);
    if (D_002058A8[index] >= 0.0f) {
        D_002058A0[index] = D_002058A0[index] + D_00205830[index].f24;
        if (D_002058A0[index] > 1.0f) {
            D_002058A0[index] = 1.0f;
        }
    }
    r = &D_00205830[index];
    r->f00 = r->f0C;
}
