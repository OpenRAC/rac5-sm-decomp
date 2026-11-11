/* LEVEL_08:0x03C610 -- placement copy of LEVEL_01_037540.c: lazily loads a set of cached assets and darkens the scale of four more. */
typedef struct A {
    char pad[0x14];
    float scale;
} A;

extern A *D_0023D4BC;
extern A *D_0023D4C0;
extern A *D_0023D4C4;
extern A *D_0023D4CC;
extern A *D_0023D4D0;
extern A *D_0023D4D4;
extern A *D_0023D4D8;
extern A *D_0023D4E0[3];
extern A *D_0023D4EC;

extern A *func_13B5A0(unsigned hash);

void func_03C610(void)
{
    if (!D_0023D4BC)
        D_0023D4BC = func_13B5A0(0x1298E61B);
    if (!D_0023D4C0)
        D_0023D4C0 = func_13B5A0(0xF4F95945);
    if (!D_0023D4C4)
        D_0023D4C4 = func_13B5A0(0x090979AC);
    if (!D_0023D4CC)
        D_0023D4CC = func_13B5A0(0xF5F63C3D);
    if (!D_0023D4D0)
        D_0023D4D0 = func_13B5A0(0x5B9C5FD5);
    if (!D_0023D4D4)
        D_0023D4D4 = func_13B5A0(0x4DABDBB6);
    if (!D_0023D4D8)
        D_0023D4D8 = func_13B5A0(0xB84BF700);
    D_0023D4E0[0] = func_13B5A0(0xC8DA3575);
    if (D_0023D4E0[0])
        D_0023D4E0[0]->scale *= 0.7f;
    D_0023D4E0[1] = func_13B5A0(0x23ED8E76);
    if (D_0023D4E0[1])
        D_0023D4E0[1]->scale *= 0.7f;
    D_0023D4E0[2] = func_13B5A0(0xCC2FE548);
    if (D_0023D4E0[2])
        D_0023D4E0[2]->scale *= 0.7f;
    D_0023D4EC = func_13B5A0(0x8569B635);
    if (D_0023D4EC)
        D_0023D4EC->scale *= 0.7f;
}
