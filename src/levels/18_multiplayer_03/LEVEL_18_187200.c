/* LEVEL_18:0x187200 -- resets the record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002E5C88;

void func_187200(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002E5C88.f_00 = 0;
        D_002E5C88.f_04 = 0;
        D_002E5C88.f_08 = 0;
        D_002E5C88.f_0C = 1.0f;
    }
}
