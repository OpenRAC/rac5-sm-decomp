/* LEVEL_17.REL:0x17C5D0 -- resets the global record D_002D6F38 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_002D6F38;

void func_17C5D0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002D6F38.i0 = 0;
            D_002D6F38.f3 = 1.0f;
            D_002D6F38.i2 = 0;
            D_002D6F38.i1 = 0;
        }
    }
}
