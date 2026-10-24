/* LEVEL_05.REL:0x151CE0 -- resets the global record D_0037F768 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0037F768;

void func_151CE0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0037F768.i0 = 0;
            D_0037F768.f3 = 1.0f;
            D_0037F768.i2 = 0;
            D_0037F768.i1 = 0;
        }
    }
}
