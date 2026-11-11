/* LEVEL_04:0x038B88 -- placement copy of LEVEL_01_037540.c: lazily loads a set of cached assets and darkens the scale of four more. */
typedef struct A {
    char pad[0x14];
    float scale;
} A;

extern A *D_0020DABC;
extern A *D_0020DAC0;
extern A *D_0020DAC4;
extern A *D_0020DACC;
extern A *D_0020DAD0;
extern A *D_0020DAD4;
extern A *D_0020DAD8;
extern A *D_0020DAE0[3];
extern A *D_0020DAEC;

extern A *func_1364E8(unsigned hash);

void func_038B88(void)
{
    if (!D_0020DABC)
        D_0020DABC = func_1364E8(0x1298E61B);
    if (!D_0020DAC0)
        D_0020DAC0 = func_1364E8(0xF4F95945);
    if (!D_0020DAC4)
        D_0020DAC4 = func_1364E8(0x090979AC);
    if (!D_0020DACC)
        D_0020DACC = func_1364E8(0xF5F63C3D);
    if (!D_0020DAD0)
        D_0020DAD0 = func_1364E8(0x5B9C5FD5);
    if (!D_0020DAD4)
        D_0020DAD4 = func_1364E8(0x4DABDBB6);
    if (!D_0020DAD8)
        D_0020DAD8 = func_1364E8(0xB84BF700);
    D_0020DAE0[0] = func_1364E8(0xC8DA3575);
    if (D_0020DAE0[0])
        D_0020DAE0[0]->scale *= 0.7f;
    D_0020DAE0[1] = func_1364E8(0x23ED8E76);
    if (D_0020DAE0[1])
        D_0020DAE0[1]->scale *= 0.7f;
    D_0020DAE0[2] = func_1364E8(0xCC2FE548);
    if (D_0020DAE0[2])
        D_0020DAE0[2]->scale *= 0.7f;
    D_0020DAEC = func_1364E8(0x8569B635);
    if (D_0020DAEC)
        D_0020DAEC->scale *= 0.7f;
}
