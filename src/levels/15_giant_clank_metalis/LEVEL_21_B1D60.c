/* LEVEL_21.REL:0x0b1d60 -- RAC5 vague 22 (L09), famille "init" de 56 octets.
 *
 * Le retail ecrit dans un global quatre champs : trois mots a zero et un
 * flottant a 1.0f a +0xC.  La forme source est une affectation par champ
 * (les mouvements sont lwc1/swc1, donc la copie se fait champ par champ).
 */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f;
} Init;

extern Init D_002441D0;

void func_0B1D60(void *p, int id)
{
    if (id == 0xFFFF && p != 0) {
        D_002441D0.i0 = 0;
        D_002441D0.i1 = 0;
        D_002441D0.i2 = 0;
        D_002441D0.f = 1.0f;
    }
}
