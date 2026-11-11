/* LEVEL_07.REL:0x0B7A58 -- resets the global record D_0033DE90 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0033DE90;

void func_0B7A58(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0033DE90.i0 = 0;
            D_0033DE90.f3 = 1.0f;
            D_0033DE90.i2 = 0;
            D_0033DE90.i1 = 0;
        }
    }
}
