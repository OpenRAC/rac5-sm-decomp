/* Candidate for LEVEL_22.REL:0x13E430.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_00166BA0;
extern unsigned char D_00166C18[];
extern unsigned char D_00166C38[];
extern void func_13CC80(void *, void *, void *, void *, void *, void *);

void func_13E430(void *first, void *second, void *third)
{
    func_13CC80(D_00166BA0, first, second,
                D_00166C18, D_00166C38, third);
}
