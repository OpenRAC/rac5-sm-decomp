/* LEVEL_24.REL:0AF288 -- resets the global record D_002F4450: three zero words
   and a float set to one, but only when a1 is 0xFFFF and a0 is not zero. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002F4450;

void func_0AF288(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002F4450.f_00 = 0;
            D_002F4450.f_0C = 1.0f;
            D_002F4450.f_08 = 0;
            D_002F4450.f_04 = 0;
        }
    }
}
