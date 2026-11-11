/* LEVEL_10.REL:01B5B8 -- resets the global record D_239058: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_239058;

void func_01B5B8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_239058.f_00 = 0;
            D_239058.f_04 = 0;
            D_239058.f_08 = 0;
            D_239058.f_0C = 1.0f;
        }
    }
}
