/* LEVEL_23:0x011DC8 -- appel d'un service d'ambiance, quatre arguments
   prets dans le corps de la routine.

   Le premier argument est l'adresse 0x001FCA20, les trois suivants sont
   des flottants : 62.831852f (0x427B53D1), 20.0f et la valeur globale
   lue a 0x001FC9E8.  Le retail charge la globale d'abord ($f14), puis le
   deuxieme flottant ($f12) et le troisieme ($f13). */

extern float D_001FC9E8;
extern char D_001FCA20[];

extern void func_112658(void *p, float a, float b, float c);

void func_011DC8(void)
{
    func_112658(D_001FCA20, 62.831852f, 20.0f, D_001FC9E8);
}
