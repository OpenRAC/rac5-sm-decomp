typedef struct {
    char pad[0x270];
    float f270;
    char pad2[0x328];
    int f59C;
} S;

void func_017F80(void *a0);
void func_017FC0(void *a0);
void func_018050(void *a0, float f12);
void func_018080(int a0);
void func_018090(float f12);
void func_0180A0(int a0);

void func_046F90(S *a0)
{
    func_017F80((char *)a0 + 0x30);
    func_017FC0(a0);
    func_018050((char *)a0 + 0x200, a0->f270);
    func_018080(1);
    func_018090(0.5f);
    func_0180A0(a0->f59C);
}
