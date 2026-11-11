/* LEVEL_17.REL:0x112F80 -- resets the global record D_002D08E8: three zero words and a
   float set to one, when the caller's handle is valid. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002D08E8;

void func_112F80(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002D08E8.f_00 = 0;
            D_002D08E8.f_04 = 0;
            D_002D08E8.f_08 = 0;
            D_002D08E8.f_0C = 1.0f;
        }
    }
}
