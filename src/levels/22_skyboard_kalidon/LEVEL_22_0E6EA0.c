/* LEVEL_22.REL:0x0E6EA0 -- resets the global record D_002870A8 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_002870A8;

void func_0E6EA0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002870A8.i0 = 0;
            D_002870A8.f3 = 1.0f;
            D_002870A8.i2 = 0;
            D_002870A8.i1 = 0;
        }
    }
}
