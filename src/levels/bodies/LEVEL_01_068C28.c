/* LEVEL_01:0x068C28 -- azimut et elevation d'une direction transformee.

   Les trois arguments flottants de atan2f/asinf sont les produits scalaires
   de la direction `s->v` avec les trois lignes de la matrice 3x3 rangee a
   +0xE58 : ligne 0 -> $f12 (premier argument de atan2f), ligne 2 -> $f13
   (second argument), ligne 1 -> $f20 puis $f12 de asinf.  Le resultat de
   atan2f part dans *a1, l'oppose de asinf dans *a2 ; c'est le magasin de
   *a1 que le cran de retard du second `jal` avale.

   Formes mesurees pour ce corps :
   - les lignes sont nommees par des pointeurs `VEC3 *` (sans eux, le cc1
     replie les trois `addiu` de base dans les `lwc1` et rend 188 o) ;
   - l'operande vecteur vient EN PREMIER : `v->x * r->x`, dans l'ordre
     a (ligne 0), b (ligne 1), c (ligne 2).  L'autre ordre rend 200 o mais
     change l'ordonnancement des `lwc1`/`mul.s`. */

typedef struct {
    float x;
    float y;
    float z;
} VEC3;

typedef struct {
    char pad[0x20];
    VEC3 v;
} Other;

typedef struct {
    char pad[0xE58];
    VEC3 r[3];
} Obj;

extern float atan2f(float, float);
extern float asinf(float);

void func_068C28(Obj *o, float *a1, float *a2, Other *s)
{
    VEC3 *v = &s->v;
    VEC3 *r0 = &o->r[0];
    VEC3 *r1 = &o->r[1];
    VEC3 *r2 = &o->r[2];
    float a = v->x * r0->x + v->y * r0->y + v->z * r0->z;
    float b = v->x * r1->x + v->y * r1->y + v->z * r1->z;
    float c = v->x * r2->x + v->y * r2->y + v->z * r2->z;

    *a1 = atan2f(a, c);
    *a2 = -asinf(b);
}
