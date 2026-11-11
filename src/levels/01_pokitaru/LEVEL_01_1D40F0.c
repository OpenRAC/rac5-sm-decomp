/* Candidate for LEVEL_01.REL:0x1D40F0.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_002091C4;
extern unsigned char D_00209238[];
extern unsigned char D_00209258[];
extern void func_1D1690(void *, void *, void *, void *, void *, void *);

void func_1D40F0(void *first, void *second, void *third)
{
    func_1D1690(D_002091C4, first, second,
                D_00209238, D_00209258, third);
}
