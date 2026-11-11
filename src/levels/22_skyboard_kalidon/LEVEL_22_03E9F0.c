/* LEVEL_22:0x03E9F0 -- forwards the sub-record and its scale to the update. */
extern void func_03E990(void *self, void *sub, float v);

void func_03E9F0(char *self)
{
    func_03E990(self, self + 0x200, *(float *)(self + 0x23C));
}
