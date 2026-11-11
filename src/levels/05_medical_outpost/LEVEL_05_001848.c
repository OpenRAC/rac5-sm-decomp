/* LEVEL_05.REL:0x001848 -- resets the global record D_002175D0 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_002175D0;

void func_001848(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002175D0.i0 = 0;
            D_002175D0.f3 = 1.0f;
            D_002175D0.i2 = 0;
            D_002175D0.i1 = 0;
        }
    }
}
