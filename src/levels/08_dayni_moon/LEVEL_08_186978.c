/* LEVEL_08:0x186978 -- resets the record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003E5B78;

void func_186978(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_003E5B78.f_00 = 0;
        D_003E5B78.f_04 = 0;
        D_003E5B78.f_08 = 0;
        D_003E5B78.f_0C = 1.0f;
    }
}
