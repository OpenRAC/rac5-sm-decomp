/* LEVEL_09:162CD0 -- seeds a scratch record with the global factor and passes
   the caller's two pointers plus that record to the level's routine. */
extern float D_0021CB9C;
extern void func_019710(void *a0);
extern void func_162658(void *a0, void *a1, void *a2);

void func_162CD0(void *a0, void *a1)
{
    char buf[0x10];

    func_019710(buf);
    *(float *)(buf + 0x4) = D_0021CB9C;
    func_162658(a0, a1, buf);
}
