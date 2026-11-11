/* LEVEL_18:0x031F88 -- placement copy of LEVEL_01_037540.c: lazily loads a set of cached assets and darkens the scale of four more. */
typedef struct A {
    char pad[0x14];
    float scale;
} A;

extern A *D_001A35B4;
extern A *D_001A35B8;
extern A *D_001A35BC;
extern A *D_001A35C4;
extern A *D_001A35C8;
extern A *D_001A35CC;
extern A *D_001A35D0;
extern A *D_001A35D8[3];
extern A *D_001A35E4;

extern A *func_105B48(unsigned hash);

void func_031F88(void)
{
    if (!D_001A35B4)
        D_001A35B4 = func_105B48(0x1298E61B);
    if (!D_001A35B8)
        D_001A35B8 = func_105B48(0xF4F95945);
    if (!D_001A35BC)
        D_001A35BC = func_105B48(0x090979AC);
    if (!D_001A35C4)
        D_001A35C4 = func_105B48(0xF5F63C3D);
    if (!D_001A35C8)
        D_001A35C8 = func_105B48(0x5B9C5FD5);
    if (!D_001A35CC)
        D_001A35CC = func_105B48(0x4DABDBB6);
    if (!D_001A35D0)
        D_001A35D0 = func_105B48(0xB84BF700);
    D_001A35D8[0] = func_105B48(0xC8DA3575);
    if (D_001A35D8[0])
        D_001A35D8[0]->scale *= 0.7f;
    D_001A35D8[1] = func_105B48(0x23ED8E76);
    if (D_001A35D8[1])
        D_001A35D8[1]->scale *= 0.7f;
    D_001A35D8[2] = func_105B48(0xCC2FE548);
    if (D_001A35D8[2])
        D_001A35D8[2]->scale *= 0.7f;
    D_001A35E4 = func_105B48(0x8569B635);
    if (D_001A35E4)
        D_001A35E4->scale *= 0.7f;
}
