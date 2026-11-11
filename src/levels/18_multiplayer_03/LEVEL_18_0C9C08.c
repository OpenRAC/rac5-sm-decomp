/* LEVEL_18:0C9C08 -- resets the global record D_0027BA28: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0027BA28;

void func_0C9C08(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0027BA28.f_00 = 0;
            D_0027BA28.f_0C = 1.0f;
            D_0027BA28.f_08 = 0;
            D_0027BA28.f_04 = 0;
        }
    }
}
