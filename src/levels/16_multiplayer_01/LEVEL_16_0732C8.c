/* LEVEL_16:0x0732C8 -- prepare le tour puis pose le facteur +0xC du
   second objet a 1.0. */

extern void func_0732F8(void *a0);

void func_0732C8(void *a0, char *a1)
{
    func_0732F8(a0);
    *(float *)(a1 + 0xC) = 1.0f;
}
