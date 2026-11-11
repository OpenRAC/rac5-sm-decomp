/* LEVEL_18.REL:0x04E008 -- resets the global record D_001EBB00 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_001EBB00;

void func_04E008(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001EBB00.i0 = 0;
            D_001EBB00.f3 = 1.0f;
            D_001EBB00.i2 = 0;
            D_001EBB00.i1 = 0;
        }
    }
}
