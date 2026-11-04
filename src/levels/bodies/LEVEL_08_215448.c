/* Candidate for LEVEL_08.REL:0x215448.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_00252CB4;
extern unsigned char D_00252D28[];
extern unsigned char D_00252D48[];
extern void func_211180(void *, void *, void *, void *, void *, void *);

void func_215448(void *first, void *second, void *third)
{
    func_211180(D_00252CB4, first, second,
                D_00252D28, D_00252D48, third);
}
