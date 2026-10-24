/* LEVEL_16.REL:0x11EAE8 -- resets the global record D_002E1480 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_002E1480;

void func_11EAE8(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E1480.i0 = 0;
            D_002E1480.f3 = 1.0f;
            D_002E1480.i2 = 0;
            D_002E1480.i1 = 0;
        }
    }
}
