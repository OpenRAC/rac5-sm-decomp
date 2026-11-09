/* LEVEL_01.REL:0x037540: reviewed 464-byte candidate, held for ABI review.
 * Lazily loads a set of cached assets and darkens the scale of four more.
 * pinned C with gnu-ee-trial links 464/464 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_12A068 returning pointer with (int), but the accepted
 * LEVEL_01_12A068.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct A {
    char pad[0x14];
    float scale;
} A;

extern A *D_001F45FC;
extern A *D_001F4600;
extern A *D_001F4604;
extern A *D_001F460C;
extern A *D_001F4610;
extern A *D_001F4614;
extern A *D_001F4618;
extern A *D_001F4620[3];
extern A *D_001F462C;

extern A *func_12A068(unsigned hash);

void func_037540(void)
{
    if (!D_001F45FC)
        D_001F45FC = func_12A068(0x1298E61B);
    if (!D_001F4600)
        D_001F4600 = func_12A068(0xF4F95945);
    if (!D_001F4604)
        D_001F4604 = func_12A068(0x090979AC);
    if (!D_001F460C)
        D_001F460C = func_12A068(0xF5F63C3D);
    if (!D_001F4610)
        D_001F4610 = func_12A068(0x5B9C5FD5);
    if (!D_001F4614)
        D_001F4614 = func_12A068(0x4DABDBB6);
    if (!D_001F4618)
        D_001F4618 = func_12A068(0xB84BF700);
    D_001F4620[0] = func_12A068(0xC8DA3575);
    if (D_001F4620[0])
        D_001F4620[0]->scale *= 0.7f;
    D_001F4620[1] = func_12A068(0x23ED8E76);
    if (D_001F4620[1])
        D_001F4620[1]->scale *= 0.7f;
    D_001F4620[2] = func_12A068(0xCC2FE548);
    if (D_001F4620[2])
        D_001F4620[2]->scale *= 0.7f;
    D_001F462C = func_12A068(0x8569B635);
    if (D_001F462C)
        D_001F462C->scale *= 0.7f;
}
