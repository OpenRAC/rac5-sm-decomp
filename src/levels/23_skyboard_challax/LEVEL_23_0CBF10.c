/* LEVEL_23:0x0CBF10 -- initialises a global record when the caller asks for
   it (a1 == 0xFFFF) and passes a valid owner pointer; the published mode
   depends on a global flag. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002FE1E0;
extern int D_002FE1F0;
extern int D_001ED970;

void func_0CBF10(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        int v = D_001ED970 ^ 0x18;

        D_002FE1E0.f_00 = 0;
        D_002FE1E0.f_04 = 0;
        D_002FE1E0.f_08 = 0;
        D_002FE1E0.f_0C = 1.0f;
        D_002FE1F0 = (v == 0) ? 4 : 5;
    }
}
