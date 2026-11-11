/* LEVEL_07:0x037A70 -- placement copy of LEVEL_01_037540.c: lazily loads a set of cached assets and darkens the scale of four more. */
typedef struct A {
    char pad[0x14];
    float scale;
} A;

extern A *D_002088FC;
extern A *D_00208900;
extern A *D_00208904;
extern A *D_0020890C;
extern A *D_00208910;
extern A *D_00208914;
extern A *D_00208918;
extern A *D_00208920[3];
extern A *D_0020892C;

extern A *func_12D068(unsigned hash);

void func_037A70(void)
{
    if (!D_002088FC)
        D_002088FC = func_12D068(0x1298E61B);
    if (!D_00208900)
        D_00208900 = func_12D068(0xF4F95945);
    if (!D_00208904)
        D_00208904 = func_12D068(0x090979AC);
    if (!D_0020890C)
        D_0020890C = func_12D068(0xF5F63C3D);
    if (!D_00208910)
        D_00208910 = func_12D068(0x5B9C5FD5);
    if (!D_00208914)
        D_00208914 = func_12D068(0x4DABDBB6);
    if (!D_00208918)
        D_00208918 = func_12D068(0xB84BF700);
    D_00208920[0] = func_12D068(0xC8DA3575);
    if (D_00208920[0])
        D_00208920[0]->scale *= 0.7f;
    D_00208920[1] = func_12D068(0x23ED8E76);
    if (D_00208920[1])
        D_00208920[1]->scale *= 0.7f;
    D_00208920[2] = func_12D068(0xCC2FE548);
    if (D_00208920[2])
        D_00208920[2]->scale *= 0.7f;
    D_0020892C = func_12D068(0x8569B635);
    if (D_0020892C)
        D_0020892C->scale *= 0.7f;
}
