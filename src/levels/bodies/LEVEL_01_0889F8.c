/* LEVEL_01:0x0889F8 -- regle une ponderation selon les drapeaux du mobile.

   Le mot +0x00 porte les drapeaux : le bit 0 est pose d'office, puis selon
   l'argument soit le bit 2 est pose (valeur 5), soit efface (valeur 1,
   composite unsigned).  Le bit 0 d'origine decide s'il y a lieu de
   recalculer ; le bit 2 d'origine contre le nouveau dit s'il faut completer
   a 1.

   Forme gagnante : le magasin commun du f8 reste APRES le if/else.  Le bloc
   else n'est alors qu'un seul magasin (f4 = 0), que le cran de retard du
   `beql` avale ; sans ce magasin commun, le cc1 duplique l'epilogue et
   sort un `beqz` + `nop` de 156 octets. */

typedef struct {
    unsigned w0;
    float f4;
    float f8;
} Obj;

void func_0889F8(Obj *a0, int a1, float f12)
{
    unsigned w = a0->w0;
    float v;

    a0->w0 = w | 1;
    if (a1 != 0) {
        a0->w0 = w | 5;
    } else {
        a0->w0 &= ~4u;
    }
    if (w & 1) {
        v = 0.0f;
        if (a0->f8 > 0.0001f) {
            v = a0->f4 / a0->f8;
        }
        if ((w ^ a0->w0) & 4) {
            v = 1.0f - v;
        }
        a0->f4 = f12 * v;
    } else {
        a0->f4 = 0.0f;
    }
    a0->f8 = f12;
}
