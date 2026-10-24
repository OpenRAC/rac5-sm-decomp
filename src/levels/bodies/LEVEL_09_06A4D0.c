/* LEVEL_09:0x06A4D0 -- relaie trois pointeurs au service en y ajoutant
   le flottant +0x1F8 du mobile et un zero final. */

extern void func_06A500(void *a0, void *a1, void *a2, int a3, float v);

void func_06A4D0(char *a0, void *a1, void *a2, void *a3)
{
    func_06A500(a1, a2, a3, 0, *(float *)(a0 + 0x1F8));
}
