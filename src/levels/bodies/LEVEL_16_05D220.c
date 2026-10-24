/* LEVEL_16:0x05D220 -- prepare le tour par un service puis publie la
   valeur rendue par le second dans le champ +0xF08 de l'objet. */

extern void func_037D78(void *a0);
extern float func_000FE0(void);

void func_05D220(char *a0)
{
    func_037D78(a0);
    *(float *)(a0 + 0xF08) = func_000FE0();
}
