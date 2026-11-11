/* LEVEL_16:044A10 -- hands the object's tail and its field at +0x23C to the
   level's routine. */
extern void func_0449B0(void *a0, void *a1, float f12);
void func_044A10(char *a0)
{
    func_0449B0(a0, a0 + 0x200, *(float *)(a0 + 0x23C));
}
