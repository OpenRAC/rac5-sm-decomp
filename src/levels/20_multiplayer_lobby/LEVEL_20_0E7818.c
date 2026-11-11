/* LEVEL_20.REL:0E7818 -- resets the global record D_202B58: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_202B58;

void func_0E7818(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_202B58.f_00 = 0;
            D_202B58.f_04 = 0;
            D_202B58.f_08 = 0;
            D_202B58.f_0C = 1.0f;
        }
    }
}
