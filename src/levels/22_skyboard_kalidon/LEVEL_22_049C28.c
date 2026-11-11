extern float D_0016B2C8;
extern float D_0016B2CC;

void func_0301E0(char *a0, int a1, unsigned a2);
void func_04B678(char *a0);
void func_04B0C0(char *a0, float f12, float f13);
void func_04A810(char *a0);
void func_04A388(char *a0);
void func_04A730(char *a0);
void func_04B3C0(char *a0);
void func_049D28(char *a0);
void func_04A0B0(char *a0);

void func_049C28(char *a0)
{
    if (*(int *)(a0 + 0x5C8) == 0) {
        func_0301E0(a0, 4, 0x0478FE9Au);
        func_0301E0(a0, 5, 0x0478FE9Au);
    }
    func_04B678(a0);
    func_04B0C0(a0, D_0016B2CC, D_0016B2C8);
    func_04A810(a0);
    func_04A388(a0);
    func_04A730(a0);
    if (*(short *)(a0 + 0x102) != 4) {
        func_04B3C0(a0);
        func_049D28(a0);
    }
    func_04A0B0(a0);
}
