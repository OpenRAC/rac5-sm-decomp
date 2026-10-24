/* func_1B84E0 -- resets the global record D_003800F8 when the second argument
   is 0xFFFF and the first one is not zero. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003800F8;

void func_1B84E0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003800F8.f_00 = 0;
            D_003800F8.f_0C = 1.0f;
            D_003800F8.f_08 = 0;
            D_003800F8.f_04 = 0;
        }
    }
}
