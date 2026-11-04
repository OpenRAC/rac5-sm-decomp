void func_019780(char *a0);
void func_0197C0(char *a0);
void func_019850(char *a0, float f12);
void func_019880(int a0);
void func_019890(float f12);
void func_0198A0(int a0);

void func_049800(char *a0)
{
    func_019780(a0 + 0x30);
    func_0197C0(a0);
    func_019850(a0 + 0x200, *(float *)(a0 + 0x270));
    func_019880(1);
    func_019890(0.5f);
    func_0198A0(*(int *)(a0 + 0x59C));
}
