/* Candidate for LEVEL_03.REL:0x1E9698.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_00222168;
extern unsigned char D_002221E0[];
extern unsigned char D_00222200[];
extern void func_1E1E28(void *, void *, void *, void *, void *, void *);

void func_1E9698(void *first, void *second, void *third)
{
    func_1E1E28(D_00222168, first, second,
                D_002221E0, D_00222200, third);
}
