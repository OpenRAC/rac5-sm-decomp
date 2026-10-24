/* LEVEL_04:04A968 -- forwards the panel at 0x200 and the float at 0x23C of the
   object to func_04A908. */
void func_04A908(int a0, int a1, float f);

void func_04A968(int a0)
{
    func_04A908(a0, a0 + 0x200, *(float *)(a0 + 0x23C));
}
