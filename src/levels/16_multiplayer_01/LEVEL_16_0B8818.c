/* LEVEL_16:0B8818 -- resets the global record D_00279EE8: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00279EE8;

void func_0B8818(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00279EE8.f_00 = 0;
            D_00279EE8.f_0C = 1.0f;
            D_00279EE8.f_08 = 0;
            D_00279EE8.f_04 = 0;
        }
    }
}
