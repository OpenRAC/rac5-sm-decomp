/* LEVEL_07.REL:0x05CB00 -- resets the global record D_0024E7E0 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0024E7E0;

void func_05CB00(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0024E7E0.i0 = 0;
            D_0024E7E0.f3 = 1.0f;
            D_0024E7E0.i2 = 0;
            D_0024E7E0.i1 = 0;
        }
    }
}
