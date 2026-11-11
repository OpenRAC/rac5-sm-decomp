/* LEVEL_16:0x137DB8 -- resets the global record D_2E2C80: three
   zero words and a float set to one, when the caller asks for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_2E2C80;

void func_137DB8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_2E2C80.f_00 = 0;
            D_2E2C80.f_04 = 0;
            D_2E2C80.f_08 = 0;
            D_2E2C80.f_0C = 1.0f;
        }
    }
}
