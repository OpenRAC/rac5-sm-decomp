/* LEVEL_03:0x047208 -- confie la zone +0x200 de l'objet a un service en
   lui passant aussi le flottant +0x23C. */

extern void func_0471A8(void *a0, void *a1, float v);

void func_047208(char *a0)
{
    func_0471A8(a0, a0 + 0x200, *(float *)(a0 + 0x23C));
}
