/* LEVEL_07.REL @ 0x04C1D0 — 92 octets, lwc1 */

void func_01A8B0(char *a0);
void func_01A8F0(char *a0);
void func_01A980(char *a0, float f12);
void func_01A9B0(int a0);
void func_01A9C0(float f12);
void func_01A9D0(int a0);

void func_04C1D0(char *a0)
{
    func_01A8B0(a0 + 0x30);
    func_01A8F0(a0);
    func_01A980(a0 + 0x200, *(float *)(a0 + 0x270));
    func_01A9B0(1);
    func_01A9C0(0.5f);
    func_01A9D0(*(int *)(a0 + 0x59C));
}
