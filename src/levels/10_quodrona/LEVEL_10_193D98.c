/* LEVEL_10:193D98 -- resets the global record D_003A0218: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003A0218;

void func_193D98(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003A0218.f_00 = 0;
            D_003A0218.f_0C = 1.0f;
            D_003A0218.f_08 = 0;
            D_003A0218.f_04 = 0;
        }
    }
}
