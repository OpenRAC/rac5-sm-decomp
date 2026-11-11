/* LEVEL_02:0x1E5C20 -- remet l'enregistrement global a zero quand l'appelant
   fournit l'index 0xFFFF et un pointeur non nul.

   Ordre des magasins retail : +0x00, +0x0C, +0x04, +0x08 (rotation de
   l'ordre source f00, f0C, f08, f04). */

typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003B0840;

void func_1E5C20(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_003B0840.f00 = 0;
        D_003B0840.f0C = 1.0f;
        D_003B0840.f08 = 0;
        D_003B0840.f04 = 0;
    }
}
