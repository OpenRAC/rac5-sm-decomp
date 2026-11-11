/* LEVEL_15:0x02CC78 -- placement copy of LEVEL_01_037540.c: lazily loads a set of cached assets and darkens the scale of four more. */
typedef struct A {
    char pad[0x14];
    float scale;
} A;

extern A *D_0014927C;
extern A *D_00149280;
extern A *D_00149284;
extern A *D_0014928C;
extern A *D_00149290;
extern A *D_00149294;
extern A *D_00149298;
extern A *D_001492A0[3];
extern A *D_001492AC;

extern A *func_0EDE90(unsigned hash);

void func_02CC78(void)
{
    if (!D_0014927C)
        D_0014927C = func_0EDE90(0x1298E61B);
    if (!D_00149280)
        D_00149280 = func_0EDE90(0xF4F95945);
    if (!D_00149284)
        D_00149284 = func_0EDE90(0x090979AC);
    if (!D_0014928C)
        D_0014928C = func_0EDE90(0xF5F63C3D);
    if (!D_00149290)
        D_00149290 = func_0EDE90(0x5B9C5FD5);
    if (!D_00149294)
        D_00149294 = func_0EDE90(0x4DABDBB6);
    if (!D_00149298)
        D_00149298 = func_0EDE90(0xB84BF700);
    D_001492A0[0] = func_0EDE90(0xC8DA3575);
    if (D_001492A0[0])
        D_001492A0[0]->scale *= 0.7f;
    D_001492A0[1] = func_0EDE90(0x23ED8E76);
    if (D_001492A0[1])
        D_001492A0[1]->scale *= 0.7f;
    D_001492A0[2] = func_0EDE90(0xCC2FE548);
    if (D_001492A0[2])
        D_001492A0[2]->scale *= 0.7f;
    D_001492AC = func_0EDE90(0x8569B635);
    if (D_001492AC)
        D_001492AC->scale *= 0.7f;
}
