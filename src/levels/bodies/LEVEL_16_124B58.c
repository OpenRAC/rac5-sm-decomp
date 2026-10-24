/* LEVEL_16.REL:0x124B58 -- resets the global record D_002E1E80 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_002E1E80;

void func_124B58(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E1E80.i0 = 0;
            D_002E1E80.f3 = 1.0f;
            D_002E1E80.i2 = 0;
            D_002E1E80.i1 = 0;
        }
    }
}
