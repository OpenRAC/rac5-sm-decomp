/* LEVEL_22:0x02D490 -- placement copy of LEVEL_01_037540.c: lazily loads a set of cached assets and darkens the scale of four more. */
typedef struct A {
    char pad[0x14];
    float scale;
} A;

extern A *D_0015397C;
extern A *D_00153980;
extern A *D_00153984;
extern A *D_0015398C;
extern A *D_00153990;
extern A *D_00153994;
extern A *D_00153998;
extern A *D_001539A0[3];
extern A *D_001539AC;

extern A *func_100C58(unsigned hash);

void func_02D490(void)
{
    if (!D_0015397C)
        D_0015397C = func_100C58(0x1298E61B);
    if (!D_00153980)
        D_00153980 = func_100C58(0xF4F95945);
    if (!D_00153984)
        D_00153984 = func_100C58(0x090979AC);
    if (!D_0015398C)
        D_0015398C = func_100C58(0xF5F63C3D);
    if (!D_00153990)
        D_00153990 = func_100C58(0x5B9C5FD5);
    if (!D_00153994)
        D_00153994 = func_100C58(0x4DABDBB6);
    if (!D_00153998)
        D_00153998 = func_100C58(0xB84BF700);
    D_001539A0[0] = func_100C58(0xC8DA3575);
    if (D_001539A0[0])
        D_001539A0[0]->scale *= 0.7f;
    D_001539A0[1] = func_100C58(0x23ED8E76);
    if (D_001539A0[1])
        D_001539A0[1]->scale *= 0.7f;
    D_001539A0[2] = func_100C58(0xCC2FE548);
    if (D_001539A0[2])
        D_001539A0[2]->scale *= 0.7f;
    D_001539AC = func_100C58(0x8569B635);
    if (D_001539AC)
        D_001539AC->scale *= 0.7f;
}
