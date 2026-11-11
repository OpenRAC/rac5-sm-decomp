/* LEVEL_17:0x033000 -- placement copy of LEVEL_01_037540.c: lazily loads a set of cached assets and darkens the scale of four more. */
typedef struct A {
    char pad[0x14];
    float scale;
} A;

extern A *D_00195734;
extern A *D_00195738;
extern A *D_0019573C;
extern A *D_00195744;
extern A *D_00195748;
extern A *D_0019574C;
extern A *D_00195750;
extern A *D_00195758[3];
extern A *D_00195764;

extern A *func_106410(unsigned hash);

void func_033000(void)
{
    if (!D_00195734)
        D_00195734 = func_106410(0x1298E61B);
    if (!D_00195738)
        D_00195738 = func_106410(0xF4F95945);
    if (!D_0019573C)
        D_0019573C = func_106410(0x090979AC);
    if (!D_00195744)
        D_00195744 = func_106410(0xF5F63C3D);
    if (!D_00195748)
        D_00195748 = func_106410(0x5B9C5FD5);
    if (!D_0019574C)
        D_0019574C = func_106410(0x4DABDBB6);
    if (!D_00195750)
        D_00195750 = func_106410(0xB84BF700);
    D_00195758[0] = func_106410(0xC8DA3575);
    if (D_00195758[0])
        D_00195758[0]->scale *= 0.7f;
    D_00195758[1] = func_106410(0x23ED8E76);
    if (D_00195758[1])
        D_00195758[1]->scale *= 0.7f;
    D_00195758[2] = func_106410(0xCC2FE548);
    if (D_00195758[2])
        D_00195758[2]->scale *= 0.7f;
    D_00195764 = func_106410(0x8569B635);
    if (D_00195764)
        D_00195764->scale *= 0.7f;
}
