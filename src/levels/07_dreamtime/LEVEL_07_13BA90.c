/* LEVEL_07:0x13BA90 -- remet l'enregistrement global a zero quand l'appelant
   fournit l'index 0xFFFF et un pointeur non nul.

   Ordre des magasins retail : +0x00, +0x0C, +0x04, +0x08 (rotation de
   l'ordre source f00, f0C, f08, f04). */

typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003A7058;

void func_13BA90(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_003A7058.f00 = 0;
        D_003A7058.f0C = 1.0f;
        D_003A7058.f08 = 0;
        D_003A7058.f04 = 0;
    }
}
