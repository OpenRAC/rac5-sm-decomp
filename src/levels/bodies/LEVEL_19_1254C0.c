/* LEVEL_19:0x1254C0 -- resets the record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002E2000;

void func_1254C0(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002E2000.f_00 = 0;
        D_002E2000.f_04 = 0;
        D_002E2000.f_08 = 0;
        D_002E2000.f_0C = 1.0f;
    }
}
