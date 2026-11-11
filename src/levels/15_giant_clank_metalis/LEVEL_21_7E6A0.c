/* LEVEL_21.REL:0x07e6a0 -- RAC5 vague 22 (L09), famille "init" de 56 octets.
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

extern Init D_001B2F28;

void func_07E6A0(void *p, int id)
{
    if (id == 0xFFFF && p != 0) {
        D_001B2F28.i0 = 0;
        D_001B2F28.i1 = 0;
        D_001B2F28.i2 = 0;
        D_001B2F28.f = 1.0f;
    }
}
