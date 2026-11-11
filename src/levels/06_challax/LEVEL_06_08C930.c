/* LEVEL_06.REL:0x08C930 -- resets the global record D_00284B30 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00284B30;

void func_08C930(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00284B30.i0 = 0;
            D_00284B30.f3 = 1.0f;
            D_00284B30.i2 = 0;
            D_00284B30.i1 = 0;
        }
    }
}
