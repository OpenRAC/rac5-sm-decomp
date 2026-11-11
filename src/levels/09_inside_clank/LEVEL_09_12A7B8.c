/* LEVEL_09:12A7B8 -- resets the global record D_00339448: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00339448;

void func_12A7B8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00339448.f_00 = 0;
            D_00339448.f_0C = 1.0f;
            D_00339448.f_08 = 0;
            D_00339448.f_04 = 0;
        }
    }
}
