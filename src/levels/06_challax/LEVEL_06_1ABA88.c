/* LEVEL_06.REL:0x1ABA88 -- resets the global record D_00385050 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00385050;

void func_1ABA88(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00385050.i0 = 0;
            D_00385050.f3 = 1.0f;
            D_00385050.i2 = 0;
            D_00385050.i1 = 0;
        }
    }
}
