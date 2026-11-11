/* LEVEL_10.REL:0x0A1BB8 -- latches the two caller readings and raises the flag. */
typedef struct {
    float f_00;
    float f_04;
} Rec;

extern Rec D_001FF710;
extern signed char D_001FF720;

void TexScale__Q34scee3Psp2Guff(float a, float b)
{
    D_001FF720 = 1;
    D_001FF710.f_00 = a;
    D_001FF710.f_04 = b;
}
