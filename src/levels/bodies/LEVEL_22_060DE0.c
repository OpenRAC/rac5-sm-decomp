/* LEVEL_22.REL:0x060DE0 -- resets the global record D_0018AE38 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0018AE38;

void func_060DE0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0018AE38.i0 = 0;
            D_0018AE38.f3 = 1.0f;
            D_0018AE38.i2 = 0;
            D_0018AE38.i1 = 0;
        }
    }
}
