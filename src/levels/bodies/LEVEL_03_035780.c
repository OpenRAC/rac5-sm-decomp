/* LEVEL_03:0x035780 -- placement copy of LEVEL_01_037540.c: lazily loads a set of cached assets and darkens the scale of four more. */
typedef struct A {
    char pad[0x14];
    float scale;
} A;

extern A *D_0020CC7C;
extern A *D_0020CC80;
extern A *D_0020CC84;
extern A *D_0020CC8C;
extern A *D_0020CC90;
extern A *D_0020CC94;
extern A *D_0020CC98;
extern A *D_0020CCA0[3];
extern A *D_0020CCAC;

extern A *func_1282D0(unsigned hash);

void func_035780(void)
{
    if (!D_0020CC7C)
        D_0020CC7C = func_1282D0(0x1298E61B);
    if (!D_0020CC80)
        D_0020CC80 = func_1282D0(0xF4F95945);
    if (!D_0020CC84)
        D_0020CC84 = func_1282D0(0x090979AC);
    if (!D_0020CC8C)
        D_0020CC8C = func_1282D0(0xF5F63C3D);
    if (!D_0020CC90)
        D_0020CC90 = func_1282D0(0x5B9C5FD5);
    if (!D_0020CC94)
        D_0020CC94 = func_1282D0(0x4DABDBB6);
    if (!D_0020CC98)
        D_0020CC98 = func_1282D0(0xB84BF700);
    D_0020CCA0[0] = func_1282D0(0xC8DA3575);
    if (D_0020CCA0[0])
        D_0020CCA0[0]->scale *= 0.7f;
    D_0020CCA0[1] = func_1282D0(0x23ED8E76);
    if (D_0020CCA0[1])
        D_0020CCA0[1]->scale *= 0.7f;
    D_0020CCA0[2] = func_1282D0(0xCC2FE548);
    if (D_0020CCA0[2])
        D_0020CCA0[2]->scale *= 0.7f;
    D_0020CCAC = func_1282D0(0x8569B635);
    if (D_0020CCAC)
        D_0020CCAC->scale *= 0.7f;
}
