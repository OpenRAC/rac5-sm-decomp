/* LEVEL_19.REL:0x085548 -- resets the global record D_0024E720 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0024E720;

void func_085548(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0024E720.i0 = 0;
            D_0024E720.f3 = 1.0f;
            D_0024E720.i2 = 0;
            D_0024E720.i1 = 0;
        }
    }
}
