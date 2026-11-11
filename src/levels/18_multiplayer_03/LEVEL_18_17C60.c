/* LEVEL_18.REL:0x017c60 -- RAC5 vague 22 (L09), copie de 16 flottants.
 *
 * Le retail copie seize flottants, champ par champ (lwc1/swc1), de la
 * structure recue dans le global dont l'adresse est dans le nom.
 * L'ordre des affectations est celui du retail.
 */
typedef struct {
    float f0;
    float f1;
    float f2;
    float f3;
    float f4;
    float f5;
    float f6;
    float f7;
    float f8;
    float f9;
    float f10;
    float f11;
    float f12;
    float f13;
    float f14;
    float f15;
} S;

extern S D_001DEBF0;

void func_017C60(S *src)
{
    D_001DEBF0.f8 = src->f8;
    D_001DEBF0.f9 = src->f9;
    D_001DEBF0.f10 = src->f10;
    D_001DEBF0.f11 = src->f11;
    D_001DEBF0.f0 = src->f0;
    D_001DEBF0.f1 = src->f1;
    D_001DEBF0.f2 = src->f2;
    D_001DEBF0.f3 = src->f3;
    D_001DEBF0.f4 = src->f4;
    D_001DEBF0.f5 = src->f5;
    D_001DEBF0.f6 = src->f6;
    D_001DEBF0.f7 = src->f7;
    D_001DEBF0.f12 = src->f12;
    D_001DEBF0.f13 = src->f13;
    D_001DEBF0.f14 = src->f14;
    D_001DEBF0.f15 = src->f15;
}
