/* LEVEL_23:0FBD88 -- resets the global record D_00302B28: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00302B28;

void func_0FBD88(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00302B28.f_00 = 0;
            D_00302B28.f_0C = 1.0f;
            D_00302B28.f_08 = 0;
            D_00302B28.f_04 = 0;
        }
    }
}
