/* LEVEL_02:0x03BF88 -- placement copy of LEVEL_01_037540.c: lazily loads a set of cached assets and darkens the scale of four more. */
typedef struct A {
    char pad[0x14];
    float scale;
} A;

extern A *D_002095BC;
extern A *D_002095C0;
extern A *D_002095C4;
extern A *D_002095CC;
extern A *D_002095D0;
extern A *D_002095D4;
extern A *D_002095D8;
extern A *D_002095E0[3];
extern A *D_002095EC;

extern A *func_130418(unsigned hash);

void func_03BF88(void)
{
    if (!D_002095BC)
        D_002095BC = func_130418(0x1298E61B);
    if (!D_002095C0)
        D_002095C0 = func_130418(0xF4F95945);
    if (!D_002095C4)
        D_002095C4 = func_130418(0x090979AC);
    if (!D_002095CC)
        D_002095CC = func_130418(0xF5F63C3D);
    if (!D_002095D0)
        D_002095D0 = func_130418(0x5B9C5FD5);
    if (!D_002095D4)
        D_002095D4 = func_130418(0x4DABDBB6);
    if (!D_002095D8)
        D_002095D8 = func_130418(0xB84BF700);
    D_002095E0[0] = func_130418(0xC8DA3575);
    if (D_002095E0[0])
        D_002095E0[0]->scale *= 0.7f;
    D_002095E0[1] = func_130418(0x23ED8E76);
    if (D_002095E0[1])
        D_002095E0[1]->scale *= 0.7f;
    D_002095E0[2] = func_130418(0xCC2FE548);
    if (D_002095E0[2])
        D_002095E0[2]->scale *= 0.7f;
    D_002095EC = func_130418(0x8569B635);
    if (D_002095EC)
        D_002095EC->scale *= 0.7f;
}
