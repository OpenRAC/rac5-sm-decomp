/* LEVEL_23.REL:0x0795F0 -- resets the global record D_0020BCF0 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0020BCF0;

void func_0795F0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0020BCF0.i0 = 0;
            D_0020BCF0.f3 = 1.0f;
            D_0020BCF0.i2 = 0;
            D_0020BCF0.i1 = 0;
        }
    }
}
