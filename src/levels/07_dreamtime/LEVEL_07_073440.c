/* LEVEL_07.REL:0x073440 -- resets the global record D_0024F630 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0024F630;

void func_073440(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0024F630.i0 = 0;
            D_0024F630.f3 = 1.0f;
            D_0024F630.i2 = 0;
            D_0024F630.i1 = 0;
        }
    }
}
