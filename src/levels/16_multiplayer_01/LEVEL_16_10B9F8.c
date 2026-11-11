/* LEVEL_16:10B9F8 -- resets the global record D_0029F860: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0029F860;

void func_10B9F8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0029F860.f_00 = 0;
            D_0029F860.f_0C = 1.0f;
            D_0029F860.f_08 = 0;
            D_0029F860.f_04 = 0;
        }
    }
}
