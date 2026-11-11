/* LEVEL_08.REL:0x0BB870 -- resets the global record D_0036C810 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0036C810;

void func_0BB870(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0036C810.i0 = 0;
            D_0036C810.f3 = 1.0f;
            D_0036C810.i2 = 0;
            D_0036C810.i1 = 0;
        }
    }
}
