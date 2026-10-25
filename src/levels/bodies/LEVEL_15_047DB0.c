/* LEVEL_15:0x047DB0 -- normalise un groupe de cinq poids par exp(-x).

   `D_00181020` recoit la longueur du vecteur D_001630A8 (racine de la somme
   des carres, dans l'ordre x, y, z) ; puis les cinq valeurs de D_001630D0
   sont remplacees par exp(-x) dans D_00181028.

   Formes mesurees :
   - la boucle s'ecrit INDEXEE ASCENDANTE : `for (i = 0; i < 5; i++)`.
     Le cc1 epingle la transforme lui-meme en pointeurs croissants avec un
     compteur decroissant (`s0 = 4` ... `bgez`), exactement comme le retail.
     Une boucle ecrite a la main en pointeurs ou en compteur decroissant
     donne le meme corps mais fait reculer les pointeurs ;
   - `expf` et `sqrtf` sont les vrais noms : `sqrtf` s'abaisse en `sqrt.s` +
     test NaN + appel de repli, `expf` reste un appel ;
   - famille a adresse : un fichier par placement (0x001630A8 / 0x001630D0 /
     0x00181028 changent d'un placement a l'autre). */

typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern VEC3 D_001630A8;
extern float D_001630D0[];
extern float D_00181020;
extern float D_00181028[];

extern float sqrtf(float);
extern float expf(float);

void func_047DB0(void)
{
    int i;

    D_00181020 = sqrtf(D_001630A8.x * D_001630A8.x
                       + D_001630A8.y * D_001630A8.y
                       + D_001630A8.z * D_001630A8.z);
    for (i = 0; i < 5; i++) {
        D_00181028[i] = expf(-D_001630D0[i]);
    }
}
