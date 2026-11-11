/* Candidate for LEVEL_22.REL:0x13D230.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_00166A2C;
extern unsigned char D_00166AA8[];
extern unsigned char D_00166AC8[];
extern void func_13CC80(void *, void *, void *, void *, void *, void *);

void func_13D230(void *first, void *second, void *third)
{
    func_13CC80(D_00166A2C, first, second,
                D_00166AA8, D_00166AC8, third);
}
