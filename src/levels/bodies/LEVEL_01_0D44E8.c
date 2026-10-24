/* LEVEL_01.REL:0x0D44E8 -- resets the global record D_0032CC50 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0032CC50;

void func_0D44E8(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0032CC50.i0 = 0;
            D_0032CC50.f3 = 1.0f;
            D_0032CC50.i2 = 0;
            D_0032CC50.i1 = 0;
        }
    }
}
