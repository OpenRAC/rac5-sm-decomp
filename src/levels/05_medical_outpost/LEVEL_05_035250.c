/* LEVEL_05:0x035250 -- placement copy of LEVEL_01_037540.c: lazily loads a set of cached assets and darkens the scale of four more. */
typedef struct A {
    char pad[0x14];
    float scale;
} A;

extern A *D_001E397C;
extern A *D_001E3980;
extern A *D_001E3984;
extern A *D_001E398C;
extern A *D_001E3990;
extern A *D_001E3994;
extern A *D_001E3998;
extern A *D_001E39A0[3];
extern A *D_001E39AC;

extern A *func_1259E0(unsigned hash);

void func_035250(void)
{
    if (!D_001E397C)
        D_001E397C = func_1259E0(0x1298E61B);
    if (!D_001E3980)
        D_001E3980 = func_1259E0(0xF4F95945);
    if (!D_001E3984)
        D_001E3984 = func_1259E0(0x090979AC);
    if (!D_001E398C)
        D_001E398C = func_1259E0(0xF5F63C3D);
    if (!D_001E3990)
        D_001E3990 = func_1259E0(0x5B9C5FD5);
    if (!D_001E3994)
        D_001E3994 = func_1259E0(0x4DABDBB6);
    if (!D_001E3998)
        D_001E3998 = func_1259E0(0xB84BF700);
    D_001E39A0[0] = func_1259E0(0xC8DA3575);
    if (D_001E39A0[0])
        D_001E39A0[0]->scale *= 0.7f;
    D_001E39A0[1] = func_1259E0(0x23ED8E76);
    if (D_001E39A0[1])
        D_001E39A0[1]->scale *= 0.7f;
    D_001E39A0[2] = func_1259E0(0xCC2FE548);
    if (D_001E39A0[2])
        D_001E39A0[2]->scale *= 0.7f;
    D_001E39AC = func_1259E0(0x8569B635);
    if (D_001E39AC)
        D_001E39AC->scale *= 0.7f;
}
