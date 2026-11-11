/* LEVEL_17:0x0D8D88 -- placement copy of LEVEL_01_0ED158.c: attache un objet a un autre et y installe
   l'inverse de son premier flottant.

   L'appel d'armement recoit l'objet en premier argument et la constante 1
   en troisieme ; le lien est range a +0x14 avant la division, dont le
   resultat va a +0x18. */

extern void func_088A58(void *a0, int a1, int a2);

void func_0D8D88(void *a0, int a1, float *a2)
{
    func_088A58(a0, a1, 1);
    *(float **)((char *)a0 + 0x14) = a2;
    *(float *)((char *)a0 + 0x18) = 1.0f / *a2;
}
