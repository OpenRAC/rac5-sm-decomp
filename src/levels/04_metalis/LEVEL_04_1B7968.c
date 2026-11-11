/* LEVEL_04:0x1B7968 -- remet l'enregistrement global a zero quand l'appelant
   fournit l'index 0xFFFF et un pointeur non nul.

   Ordre des magasins retail : +0x00, +0x0C, +0x04, +0x08 (rotation de
   l'ordre source f00, f0C, f08, f04). */

typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003B3148;

void func_1B7968(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_003B3148.f00 = 0;
        D_003B3148.f0C = 1.0f;
        D_003B3148.f08 = 0;
        D_003B3148.f04 = 0;
    }
}
