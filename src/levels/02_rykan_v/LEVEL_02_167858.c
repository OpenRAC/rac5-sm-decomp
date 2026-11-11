/* LEVEL_02.REL:0x167858 -- resets the global record D_003AB040 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003AB040;

void func_167858(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AB040.i0 = 0;
            D_003AB040.f3 = 1.0f;
            D_003AB040.i2 = 0;
            D_003AB040.i1 = 0;
        }
    }
}
