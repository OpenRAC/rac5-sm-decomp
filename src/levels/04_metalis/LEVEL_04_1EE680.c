/* Candidate for LEVEL_04.REL:0x1EE680.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_00222B88;
extern unsigned char D_00222C00[];
extern unsigned char D_00222C20[];
extern void func_1E8678(void *, void *, void *, void *, void *, void *);

void func_1EE680(void *first, void *second, void *third)
{
    func_1E8678(D_00222B88, first, second,
                D_00222C00, D_00222C20, third);
}
