/* LEVEL_15:0x0F7980 -- picks one of two values by comparison and forwards it; followed by small init/shutdown wrappers. */
typedef struct Pair { int a; int b; } Pair;
typedef struct G {
    char pad0[0x10];
    int f10;
    char pad1[0x4416C - 0x14];
    Pair *p4416C;
    int f44170;
} G;
extern G D_002A8B58;
extern void func_013B78(int a, unsigned b);
extern void func_132980(void);
extern void func_137570(void);
extern void func_0F7490(void);
extern void func_12F5D0(void);
extern void func_125E90(void);
extern void func_127AD8(void);
extern void func_0F7198(void);
extern void func_13B128(void);
extern void func_137678(void);
extern void func_132990(void);
extern void func_12F7E0(void);
void func_0F7980(void)
{
    int a;
    if (D_002A8B58.f10 < D_002A8B58.f44170)
        a = D_002A8B58.p4416C->a;
    else
        a = D_002A8B58.p4416C->b;
    func_013B78(a, 0xFFFFFFFF);
}
void func_0F79D0(void)
{
    func_132980();
    func_137570();
    func_0F7490();
    func_12F5D0();
    func_125E90();
    func_127AD8();
    func_0F7198();
}
void func_0F7A20(void)
{
    func_13B128();
    func_137678();
}
void func_0F7A48(void)
{
    func_132990();
}
void func_0F7A68(void)
{
}
void func_0F7A70(void)
{
    func_12F7E0();
}
