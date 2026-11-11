/* Candidate for LEVEL_03.REL:0x1E3C40.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_00221FD4;
extern unsigned char D_00222050[];
extern unsigned char D_00222070[];
extern void func_1E1E28(void *, void *, void *, void *, void *, void *);

void func_1E3C40(void *first, void *second, void *third)
{
    func_1E1E28(D_00221FD4, first, second,
                D_00222050, D_00222070, third);
}
