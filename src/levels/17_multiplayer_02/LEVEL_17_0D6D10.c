/* LEVEL_17.REL:0D6D10 -- resets the global record D_26CA48: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_26CA48;

void func_0D6D10(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_26CA48.f_00 = 0;
            D_26CA48.f_04 = 0;
            D_26CA48.f_08 = 0;
            D_26CA48.f_0C = 1.0f;
        }
    }
}
