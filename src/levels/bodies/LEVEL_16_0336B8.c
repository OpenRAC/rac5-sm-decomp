/* LEVEL_16:0x0336B8 -- placement copy of LEVEL_01_037540.c: lazily loads a set of cached assets and darkens the scale of four more. */
typedef struct A {
    char pad[0x14];
    float scale;
} A;

extern A *D_001A2134;
extern A *D_001A2138;
extern A *D_001A213C;
extern A *D_001A2144;
extern A *D_001A2148;
extern A *D_001A214C;
extern A *D_001A2150;
extern A *D_001A2158[3];
extern A *D_001A2164;

extern A *func_106E98(unsigned hash);

void func_0336B8(void)
{
    if (!D_001A2134)
        D_001A2134 = func_106E98(0x1298E61B);
    if (!D_001A2138)
        D_001A2138 = func_106E98(0xF4F95945);
    if (!D_001A213C)
        D_001A213C = func_106E98(0x090979AC);
    if (!D_001A2144)
        D_001A2144 = func_106E98(0xF5F63C3D);
    if (!D_001A2148)
        D_001A2148 = func_106E98(0x5B9C5FD5);
    if (!D_001A214C)
        D_001A214C = func_106E98(0x4DABDBB6);
    if (!D_001A2150)
        D_001A2150 = func_106E98(0xB84BF700);
    D_001A2158[0] = func_106E98(0xC8DA3575);
    if (D_001A2158[0])
        D_001A2158[0]->scale *= 0.7f;
    D_001A2158[1] = func_106E98(0x23ED8E76);
    if (D_001A2158[1])
        D_001A2158[1]->scale *= 0.7f;
    D_001A2158[2] = func_106E98(0xCC2FE548);
    if (D_001A2158[2])
        D_001A2158[2]->scale *= 0.7f;
    D_001A2164 = func_106E98(0x8569B635);
    if (D_001A2164)
        D_001A2164->scale *= 0.7f;
}
