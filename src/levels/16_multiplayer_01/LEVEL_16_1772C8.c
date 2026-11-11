/* LEVEL_16.REL:0x1772c8 -- RAC5 vague 22 (L09), famille "init" de 56 octets.
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

extern Init D_002E5A98;

void func_1772C8(void *p, int id)
{
    if (id == 0xFFFF && p != 0) {
        D_002E5A98.i0 = 0;
        D_002E5A98.i1 = 0;
        D_002E5A98.i2 = 0;
        D_002E5A98.f = 1.0f;
    }
}
