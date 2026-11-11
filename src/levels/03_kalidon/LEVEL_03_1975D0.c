/* LEVEL_03.REL:0x1975D0 -- resets the global record D_003B1ED0 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003B1ED0;

void func_1975D0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B1ED0.i0 = 0;
            D_003B1ED0.f3 = 1.0f;
            D_003B1ED0.i2 = 0;
            D_003B1ED0.i1 = 0;
        }
    }
}
