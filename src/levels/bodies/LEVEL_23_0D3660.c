/* LEVEL_23.REL:0x0D3660 -- resets the global record D_002FEA88 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_002FEA88;

void func_0D3660(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002FEA88.i0 = 0;
            D_002FEA88.f3 = 1.0f;
            D_002FEA88.i2 = 0;
            D_002FEA88.i1 = 0;
        }
    }
}
