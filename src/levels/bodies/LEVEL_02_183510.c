/* LEVEL_02:183510 -- seeds a scratch record with the global factor and passes
   the caller's two pointers plus that record to the level's routine. */
extern float D_0024C92C;
extern void func_01AC80(void *a0);
extern void func_182E98(void *a0, void *a1, void *a2);

void func_183510(void *a0, void *a1)
{
    char buf[0x10];

    func_01AC80(buf);
    *(float *)(buf + 0x4) = D_0024C92C;
    func_182E98(a0, a1, buf);
}
