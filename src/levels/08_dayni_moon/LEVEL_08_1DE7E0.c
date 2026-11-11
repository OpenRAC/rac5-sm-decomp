/* LEVEL_08:0x1DE7E0 -- remet l'enregistrement global a zero quand l'appelant
   fournit l'index 0xFFFF et un pointeur non nul.

   Ordre des magasins retail : +0x00, +0x0C, +0x04, +0x08 (rotation de
   l'ordre source f00, f0C, f08, f04). */

typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003EA230;

void func_1DE7E0(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_003EA230.f00 = 0;
        D_003EA230.f0C = 1.0f;
        D_003EA230.f08 = 0;
        D_003EA230.f04 = 0;
    }
}
