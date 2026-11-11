typedef struct {
    char pad[0x200];
    float f200;
    char pad204[0x6C];
    float f270;
    char pad274[0x328];
    void *f59C;
} Obj;

void func_0168B0(void *a0);
void func_0168F0(void *a0);
void func_016980(void *a0, float f0);
void func_0169B0(int a0);
void func_0169C0(float f0);
void func_0169D0(void *a0);

void func_0416A8(Obj *a0)
{
    func_0168B0((char *)a0 + 0x30);
    func_0168F0(a0);
    func_016980((char *)a0 + 0x200, a0->f270);
    func_0169B0(1);
    func_0169C0(0.5f);
    func_0169D0(a0->f59C);
}
