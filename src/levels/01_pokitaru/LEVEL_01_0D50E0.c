typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0032CDA0;
extern int D_0032CDB0;
extern int D_0021A7F0;

void func_0D50E0(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0032CDA0.i0 = 0;
            D_0032CDA0.i1 = 0;
            D_0032CDA0.i2 = 0;
            D_0032CDA0.f3 = 1.0f;
            D_0032CDB0 = ((D_0021A7F0 ^ 0x18) == 0) ? 4 : 5;
        }
    }
}
