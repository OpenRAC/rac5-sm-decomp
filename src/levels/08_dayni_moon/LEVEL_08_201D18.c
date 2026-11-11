/* LEVEL_08.REL:0x201D18 -- resets the global record D_003EADA0 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003EADA0;

void func_201D18(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003EADA0.i0 = 0;
            D_003EADA0.f3 = 1.0f;
            D_003EADA0.i2 = 0;
            D_003EADA0.i1 = 0;
        }
    }
}
