/* LEVEL_03:16DAD0 -- resets the global record D_003B0C78: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003B0C78;

void func_16DAD0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B0C78.f_00 = 0;
            D_003B0C78.f_0C = 1.0f;
            D_003B0C78.f_08 = 0;
            D_003B0C78.f_04 = 0;
        }
    }
}
