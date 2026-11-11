/* LEVEL_20.REL:0x09D988 -- resets the global record D_0019A920 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0019A920;

void func_09D988(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0019A920.i0 = 0;
            D_0019A920.f3 = 1.0f;
            D_0019A920.i2 = 0;
            D_0019A920.i1 = 0;
        }
    }
}
