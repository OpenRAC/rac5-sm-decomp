/* LEVEL_03:049EC0 -- the release chain of the object: three panel calls, the
   scale, the half-second timer and the last call. */
void func_019F50(int a0);
void func_019F90(int a0);
void func_01A020(int a0, float f);
void func_01A050(int a0);
void func_01A060(float f);
void func_01A070(int a0);

void func_049EC0(int a0)
{
    func_019F50(a0 + 0x30);
    func_019F90(a0);
    func_01A020(a0 + 0x200, *(float *)(a0 + 0x270));
    func_01A050(1);
    func_01A060(0.5f);
    func_01A070(*(int *)(a0 + 0x59C));
}
