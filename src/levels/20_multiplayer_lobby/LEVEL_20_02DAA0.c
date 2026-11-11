/* LEVEL_20:0x02DAA0 -- placement copy of LEVEL_01_037540.c: lazily loads a set of cached assets and darkens the scale of four more. */
typedef struct A {
    char pad[0x14];
    float scale;
} A;

extern A *D_00104814;
extern A *D_00104818;
extern A *D_0010481C;
extern A *D_00104824;
extern A *D_00104828;
extern A *D_0010482C;
extern A *D_00104830;
extern A *D_00104838[3];
extern A *D_00104844;

extern A *func_0DEBE0(unsigned hash);

void func_02DAA0(void)
{
    if (!D_00104814)
        D_00104814 = func_0DEBE0(0x1298E61B);
    if (!D_00104818)
        D_00104818 = func_0DEBE0(0xF4F95945);
    if (!D_0010481C)
        D_0010481C = func_0DEBE0(0x090979AC);
    if (!D_00104824)
        D_00104824 = func_0DEBE0(0xF5F63C3D);
    if (!D_00104828)
        D_00104828 = func_0DEBE0(0x5B9C5FD5);
    if (!D_0010482C)
        D_0010482C = func_0DEBE0(0x4DABDBB6);
    if (!D_00104830)
        D_00104830 = func_0DEBE0(0xB84BF700);
    D_00104838[0] = func_0DEBE0(0xC8DA3575);
    if (D_00104838[0])
        D_00104838[0]->scale *= 0.7f;
    D_00104838[1] = func_0DEBE0(0x23ED8E76);
    if (D_00104838[1])
        D_00104838[1]->scale *= 0.7f;
    D_00104838[2] = func_0DEBE0(0xCC2FE548);
    if (D_00104838[2])
        D_00104838[2]->scale *= 0.7f;
    D_00104844 = func_0DEBE0(0x8569B635);
    if (D_00104844)
        D_00104844->scale *= 0.7f;
}
