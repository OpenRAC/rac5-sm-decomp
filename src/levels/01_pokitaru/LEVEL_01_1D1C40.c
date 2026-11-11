/* Candidate for LEVEL_01.REL:0x1D1C40.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_0020910C;
extern unsigned char D_00209188[];
extern unsigned char D_002091A8[];
extern void func_1D1690(void *, void *, void *, void *, void *, void *);

void func_1D1C40(void *first, void *second, void *third)
{
    func_1D1690(D_0020910C, first, second,
                D_00209188, D_002091A8, third);
}
