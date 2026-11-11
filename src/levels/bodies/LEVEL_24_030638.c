/* LEVEL_24:0x030638 -- placement copy of LEVEL_01_037540.c: lazily loads a set of cached assets and darkens the scale of four more. */
typedef struct A {
    char pad[0x14];
    float scale;
} A;

extern A *D_001C527C;
extern A *D_001C5280;
extern A *D_001C5284;
extern A *D_001C528C;
extern A *D_001C5290;
extern A *D_001C5294;
extern A *D_001C5298;
extern A *D_001C52A0[3];
extern A *D_001C52AC;

extern A *func_11FB68(unsigned hash);

void func_030638(void)
{
    if (!D_001C527C)
        D_001C527C = func_11FB68(0x1298E61B);
    if (!D_001C5280)
        D_001C5280 = func_11FB68(0xF4F95945);
    if (!D_001C5284)
        D_001C5284 = func_11FB68(0x090979AC);
    if (!D_001C528C)
        D_001C528C = func_11FB68(0xF5F63C3D);
    if (!D_001C5290)
        D_001C5290 = func_11FB68(0x5B9C5FD5);
    if (!D_001C5294)
        D_001C5294 = func_11FB68(0x4DABDBB6);
    if (!D_001C5298)
        D_001C5298 = func_11FB68(0xB84BF700);
    D_001C52A0[0] = func_11FB68(0xC8DA3575);
    if (D_001C52A0[0])
        D_001C52A0[0]->scale *= 0.7f;
    D_001C52A0[1] = func_11FB68(0x23ED8E76);
    if (D_001C52A0[1])
        D_001C52A0[1]->scale *= 0.7f;
    D_001C52A0[2] = func_11FB68(0xCC2FE548);
    if (D_001C52A0[2])
        D_001C52A0[2]->scale *= 0.7f;
    D_001C52AC = func_11FB68(0x8569B635);
    if (D_001C52AC)
        D_001C52AC->scale *= 0.7f;
}
