/* LEVEL_23:0x030A70 -- placement copy of LEVEL_01_037540.c: lazily loads a set of cached assets and darkens the scale of four more. */
typedef struct A {
    char pad[0x14];
    float scale;
} A;

extern A *D_001C79FC;
extern A *D_001C7A00;
extern A *D_001C7A04;
extern A *D_001C7A0C;
extern A *D_001C7A10;
extern A *D_001C7A14;
extern A *D_001C7A18;
extern A *D_001C7A20[3];
extern A *D_001C7A2C;

extern A *func_11AEE0(unsigned hash);

void func_030A70(void)
{
    if (!D_001C79FC)
        D_001C79FC = func_11AEE0(0x1298E61B);
    if (!D_001C7A00)
        D_001C7A00 = func_11AEE0(0xF4F95945);
    if (!D_001C7A04)
        D_001C7A04 = func_11AEE0(0x090979AC);
    if (!D_001C7A0C)
        D_001C7A0C = func_11AEE0(0xF5F63C3D);
    if (!D_001C7A10)
        D_001C7A10 = func_11AEE0(0x5B9C5FD5);
    if (!D_001C7A14)
        D_001C7A14 = func_11AEE0(0x4DABDBB6);
    if (!D_001C7A18)
        D_001C7A18 = func_11AEE0(0xB84BF700);
    D_001C7A20[0] = func_11AEE0(0xC8DA3575);
    if (D_001C7A20[0])
        D_001C7A20[0]->scale *= 0.7f;
    D_001C7A20[1] = func_11AEE0(0x23ED8E76);
    if (D_001C7A20[1])
        D_001C7A20[1]->scale *= 0.7f;
    D_001C7A20[2] = func_11AEE0(0xCC2FE548);
    if (D_001C7A20[2])
        D_001C7A20[2]->scale *= 0.7f;
    D_001C7A2C = func_11AEE0(0x8569B635);
    if (D_001C7A2C)
        D_001C7A2C->scale *= 0.7f;
}
