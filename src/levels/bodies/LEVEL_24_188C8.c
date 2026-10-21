/* LEVEL_24.REL:0x0188c8 -- RAC5 vague 22 (L09), copie de 16 flottants.
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

extern S D_001FBA70;

void func_0188C8(S *src)
{
    D_001FBA70.f8 = src->f8;
    D_001FBA70.f9 = src->f9;
    D_001FBA70.f10 = src->f10;
    D_001FBA70.f11 = src->f11;
    D_001FBA70.f0 = src->f0;
    D_001FBA70.f1 = src->f1;
    D_001FBA70.f2 = src->f2;
    D_001FBA70.f3 = src->f3;
    D_001FBA70.f4 = src->f4;
    D_001FBA70.f5 = src->f5;
    D_001FBA70.f6 = src->f6;
    D_001FBA70.f7 = src->f7;
    D_001FBA70.f12 = src->f12;
    D_001FBA70.f13 = src->f13;
    D_001FBA70.f14 = src->f14;
    D_001FBA70.f15 = src->f15;
}
