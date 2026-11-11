/* LEVEL_09:0x033D48 -- placement copy of LEVEL_01_037540.c: lazily loads a set of cached assets and darkens the scale of four more. */
typedef struct A {
    char pad[0x14];
    float scale;
} A;

extern A *D_001DE3FC;
extern A *D_001DE400;
extern A *D_001DE404;
extern A *D_001DE40C;
extern A *D_001DE410;
extern A *D_001DE414;
extern A *D_001DE418;
extern A *D_001DE420[3];
extern A *D_001DE42C;

extern A *func_123000(unsigned hash);

void func_033D48(void)
{
    if (!D_001DE3FC)
        D_001DE3FC = func_123000(0x1298E61B);
    if (!D_001DE400)
        D_001DE400 = func_123000(0xF4F95945);
    if (!D_001DE404)
        D_001DE404 = func_123000(0x090979AC);
    if (!D_001DE40C)
        D_001DE40C = func_123000(0xF5F63C3D);
    if (!D_001DE410)
        D_001DE410 = func_123000(0x5B9C5FD5);
    if (!D_001DE414)
        D_001DE414 = func_123000(0x4DABDBB6);
    if (!D_001DE418)
        D_001DE418 = func_123000(0xB84BF700);
    D_001DE420[0] = func_123000(0xC8DA3575);
    if (D_001DE420[0])
        D_001DE420[0]->scale *= 0.7f;
    D_001DE420[1] = func_123000(0x23ED8E76);
    if (D_001DE420[1])
        D_001DE420[1]->scale *= 0.7f;
    D_001DE420[2] = func_123000(0xCC2FE548);
    if (D_001DE420[2])
        D_001DE420[2]->scale *= 0.7f;
    D_001DE42C = func_123000(0x8569B635);
    if (D_001DE42C)
        D_001DE42C->scale *= 0.7f;
}
