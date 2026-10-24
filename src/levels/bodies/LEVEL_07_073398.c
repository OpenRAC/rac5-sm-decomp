/* LEVEL_07.REL:0x073398 -- resets the global record D_0024EB80 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0024EB80;

void func_073398(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0024EB80.i0 = 0;
            D_0024EB80.f3 = 1.0f;
            D_0024EB80.i2 = 0;
            D_0024EB80.i1 = 0;
        }
    }
}
