/* LEVEL_22.REL:0x06CEC0 -- resets the global record D_0018C020: three zero words and a
   float set to one, when the caller's handle is valid. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0018C020;

void func_06CEC0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0018C020.f_00 = 0;
            D_0018C020.f_04 = 0;
            D_0018C020.f_08 = 0;
            D_0018C020.f_0C = 1.0f;
        }
    }
}
