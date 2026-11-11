/* LEVEL_06.REL:0x139F10 -- resets the global record D_0037E758 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0037E758;

void func_139F10(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0037E758.i0 = 0;
            D_0037E758.f3 = 1.0f;
            D_0037E758.i2 = 0;
            D_0037E758.i1 = 0;
        }
    }
}
