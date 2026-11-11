/* LEVEL_18.REL:0ACC60 -- resets the global record D_276D80: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_276D80;

void func_0ACC60(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_276D80.f_00 = 0;
            D_276D80.f_04 = 0;
            D_276D80.f_08 = 0;
            D_276D80.f_0C = 1.0f;
        }
    }
}
