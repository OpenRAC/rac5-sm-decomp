/* Candidate for LEVEL_01.REL:0x1D7698.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_002092A0;
extern unsigned char D_00209318[];
extern unsigned char D_00209338[];
extern void func_1D1690(void *, void *, void *, void *, void *, void *);

void func_1D7698(void *first, void *second, void *third)
{
    func_1D1690(D_002092A0, first, second,
                D_00209318, D_00209338, third);
}
