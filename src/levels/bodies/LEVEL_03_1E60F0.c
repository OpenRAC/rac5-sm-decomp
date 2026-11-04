/* Candidate for LEVEL_03.REL:0x1E60F0.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_0022208C;
extern unsigned char D_00222100[];
extern unsigned char D_00222120[];
extern void func_1E1E28(void *, void *, void *, void *, void *, void *);

void func_1E60F0(void *first, void *second, void *third)
{
    func_1E1E28(D_0022208C, first, second,
                D_00222100, D_00222120, third);
}
