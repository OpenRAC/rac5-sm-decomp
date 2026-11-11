/* LEVEL_04.REL:0x087BD8 -- resets the global record D_002555C0 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_002555C0;

void func_087BD8(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002555C0.i0 = 0;
            D_002555C0.f3 = 1.0f;
            D_002555C0.i2 = 0;
            D_002555C0.i1 = 0;
        }
    }
}
