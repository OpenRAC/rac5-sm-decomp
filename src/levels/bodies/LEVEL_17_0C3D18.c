/* LEVEL_17:0x0C3D18 -- initialises a global record when the caller asks for
   it (a1 == 0xFFFF) and passes a valid owner pointer; the published mode
   depends on a global flag. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0026C120;
extern int D_0026C130;
extern int D_001C3920;

void func_0C3D18(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        int v = D_001C3920 ^ 0x18;

        D_0026C120.f_00 = 0;
        D_0026C120.f_04 = 0;
        D_0026C120.f_08 = 0;
        D_0026C120.f_0C = 1.0f;
        D_0026C130 = (v == 0) ? 4 : 5;
    }
}
