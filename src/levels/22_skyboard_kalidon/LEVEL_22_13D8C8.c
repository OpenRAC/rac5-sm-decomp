/* Candidate for LEVEL_22.REL:0x13D8C8.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_00166ADC;
extern unsigned char D_00166B50[];
extern unsigned char D_00166B70[];
extern void func_13CC80(void *, void *, void *, void *, void *, void *);

void func_13D8C8(void *first, void *second, void *third)
{
    func_13CC80(D_00166ADC, first, second,
                D_00166B50, D_00166B70, third);
}
