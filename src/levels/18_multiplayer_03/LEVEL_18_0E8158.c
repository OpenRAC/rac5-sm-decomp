/* LEVEL_18.REL:0x0E8158 -- resets the global record D_0027F8A8: three zero words and a
   float set to one, when the caller's handle is valid. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0027F8A8;

void func_0E8158(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0027F8A8.f_00 = 0;
            D_0027F8A8.f_04 = 0;
            D_0027F8A8.f_08 = 0;
            D_0027F8A8.f_0C = 1.0f;
        }
    }
}
