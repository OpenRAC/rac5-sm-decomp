/* LEVEL_09.REL:0x025F70 -- resets the global record D_00218680 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00218680;

void func_025F70(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00218680.i0 = 0;
            D_00218680.f3 = 1.0f;
            D_00218680.i2 = 0;
            D_00218680.i1 = 0;
        }
    }
}
