/* LEVEL_06.REL:0x025280 -- resets the global record D_0021CA40 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0021CA40;

void func_025280(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0021CA40.i0 = 0;
            D_0021CA40.f3 = 1.0f;
            D_0021CA40.i2 = 0;
            D_0021CA40.i1 = 0;
        }
    }
}
