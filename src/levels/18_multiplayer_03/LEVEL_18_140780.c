/* LEVEL_18.REL:140780 -- resets the global record D_2E4E28: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_2E4E28;

void func_140780(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_2E4E28.f_00 = 0;
            D_2E4E28.f_04 = 0;
            D_2E4E28.f_08 = 0;
            D_2E4E28.f_0C = 1.0f;
        }
    }
}
