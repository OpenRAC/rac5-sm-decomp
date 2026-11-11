/* LEVEL_03.REL:0x12D588 -- resets the global record D_0036C840 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0036C840;

void func_12D588(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0036C840.i0 = 0;
            D_0036C840.f3 = 1.0f;
            D_0036C840.i2 = 0;
            D_0036C840.i1 = 0;
        }
    }
}
