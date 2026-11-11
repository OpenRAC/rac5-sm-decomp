/* LEVEL_15:0x069718 -- resets the global record D_182E20: three
   zero words and a float set to one, when the caller asks for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_182E20;

void func_069718(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_182E20.f_00 = 0;
            D_182E20.f_04 = 0;
            D_182E20.f_08 = 0;
            D_182E20.f_0C = 1.0f;
        }
    }
}
