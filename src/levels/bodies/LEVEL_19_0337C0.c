/* LEVEL_19:0x0337C0 -- envoie une valeur a deux services d'un
   sous-systeme : toujours au premier, au second seulement si son drapeau
   a +0xF4 est arme.

   Le drapeau et l'adresse passee au second appel sont le meme objet, ce
   qui fait garder l'adresse dans $a0 pour les deux usages. */

typedef struct {
    int pad[61];
    int flag;
} R19;

extern R19 D_001E7C00;
extern char D_001E4210[];

extern void func_033610(void *p, float v);

void func_0337C0(float x)
{
    func_033610(D_001E4210, x);
    if (D_001E7C00.flag != 0) {
        func_033610(&D_001E7C00, x);
    }
}
