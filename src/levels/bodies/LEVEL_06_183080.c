/* LEVEL_06:0x183080 -- forwards a packed table entry and six constants to a helper. */
extern int D_00284B40[];
extern int D_001827D0;
void func_08F598(void *a0, int a1, int a2, int a3, int a4, int a5, int a6);

void func_183080(void *a0, int a1)
{
    func_08F598(a0, (D_00284B40[a1] << 16) | 0x80007059, (int)&D_001827D0, 44, 0, -1, 0);
}
