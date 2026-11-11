/* LEVEL_08.REL:0x210348 -- resets the global record D_003EB458 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003EB458;

void func_210348(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003EB458.i0 = 0;
            D_003EB458.f3 = 1.0f;
            D_003EB458.i2 = 0;
            D_003EB458.i1 = 0;
        }
    }
}
