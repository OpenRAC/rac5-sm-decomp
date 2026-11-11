/* Candidate for LEVEL_10.REL:0x1D7850.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_00212084;
extern unsigned char D_00212100[];
extern unsigned char D_00212120[];
extern void func_1D5A38(void *, void *, void *, void *, void *, void *);

void func_1D7850(void *first, void *second, void *third)
{
    func_1D5A38(D_00212084, first, second,
                D_00212100, D_00212120, third);
}
