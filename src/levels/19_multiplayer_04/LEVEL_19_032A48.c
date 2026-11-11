/* LEVEL_19:0x032A48 -- placement copy of LEVEL_01_037540.c: lazily loads a set of cached assets and darkens the scale of four more. */
typedef struct A {
    char pad[0x14];
    float scale;
} A;

extern A *D_001A32B4;
extern A *D_001A32B8;
extern A *D_001A32BC;
extern A *D_001A32C4;
extern A *D_001A32C8;
extern A *D_001A32CC;
extern A *D_001A32D0;
extern A *D_001A32D8[3];
extern A *D_001A32E4;

extern A *func_107538(unsigned hash);

void func_032A48(void)
{
    if (!D_001A32B4)
        D_001A32B4 = func_107538(0x1298E61B);
    if (!D_001A32B8)
        D_001A32B8 = func_107538(0xF4F95945);
    if (!D_001A32BC)
        D_001A32BC = func_107538(0x090979AC);
    if (!D_001A32C4)
        D_001A32C4 = func_107538(0xF5F63C3D);
    if (!D_001A32C8)
        D_001A32C8 = func_107538(0x5B9C5FD5);
    if (!D_001A32CC)
        D_001A32CC = func_107538(0x4DABDBB6);
    if (!D_001A32D0)
        D_001A32D0 = func_107538(0xB84BF700);
    D_001A32D8[0] = func_107538(0xC8DA3575);
    if (D_001A32D8[0])
        D_001A32D8[0]->scale *= 0.7f;
    D_001A32D8[1] = func_107538(0x23ED8E76);
    if (D_001A32D8[1])
        D_001A32D8[1]->scale *= 0.7f;
    D_001A32D8[2] = func_107538(0xCC2FE548);
    if (D_001A32D8[2])
        D_001A32D8[2]->scale *= 0.7f;
    D_001A32E4 = func_107538(0x8569B635);
    if (D_001A32E4)
        D_001A32E4->scale *= 0.7f;
}
