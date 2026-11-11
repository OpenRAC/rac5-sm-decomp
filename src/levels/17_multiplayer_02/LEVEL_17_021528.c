/* LEVEL_17.REL:021528 -- resets the global record D_1CFC78: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_1CFC78;

void func_021528(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_1CFC78.f_00 = 0;
            D_1CFC78.f_04 = 0;
            D_1CFC78.f_08 = 0;
            D_1CFC78.f_0C = 1.0f;
        }
    }
}
