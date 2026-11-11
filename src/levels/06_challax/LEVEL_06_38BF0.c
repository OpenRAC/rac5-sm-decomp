/* LEVEL_06.REL:0x038bf0 -- RAC5 vague 22 (L09), famille de 16 octets.
 *
 * Le retail ecrit trois flottants dans la structure recue en $a0, aux
 * decalages +0x230, +0x234 et +0x238 ; les mouvements sont des swc1, donc
 * une affectation par champ.
 */
typedef struct {
    char pad[0x230];
    float x;
    float y;
    float z;
} Obj;

void func_038BF0(Obj *p, float a, float b, float c)
{
    p->x = a;
    p->y = b;
    p->z = c;
}
