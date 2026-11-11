/* LEVEL_04.REL:0x1CF260 -- resets the global record D_003B3B00 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003B3B00;

void func_1CF260(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B3B00.i0 = 0;
            D_003B3B00.f3 = 1.0f;
            D_003B3B00.i2 = 0;
            D_003B3B00.i1 = 0;
        }
    }
}
