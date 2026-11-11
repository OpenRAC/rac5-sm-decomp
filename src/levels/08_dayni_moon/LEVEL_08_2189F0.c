/* Candidate for LEVEL_08.REL:0x2189F0.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_00252D90;
extern unsigned char D_00252E08[];
extern unsigned char D_00252E28[];
extern void func_211180(void *, void *, void *, void *, void *, void *);

void func_2189F0(void *first, void *second, void *third)
{
    func_211180(D_00252D90, first, second,
                D_00252E08, D_00252E28, third);
}
