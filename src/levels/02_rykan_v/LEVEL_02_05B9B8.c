/* LEVEL_02.REL:0x05B9B8 -- resets the record D_002503E0: three int words cleared and the
   float slot set to one, when the caller asks for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002503E0;

void func_05B9B8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002503E0.f_00 = 0;
            D_002503E0.f_0C = 1.0f;
            D_002503E0.f_08 = 0;
            D_002503E0.f_04 = 0;
        }
    }
}
