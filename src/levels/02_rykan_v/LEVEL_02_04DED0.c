/* LEVEL_02:0x04DED0 -- forwards the sub-record and its scale to the update. */
extern void func_04DE70(void *self, void *sub, float v);

void func_04DED0(char *self)
{
    func_04DE70(self, self + 0x200, *(float *)(self + 0x23C));
}
