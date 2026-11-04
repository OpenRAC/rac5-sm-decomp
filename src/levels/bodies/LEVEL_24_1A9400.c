/* Candidate for LEVEL_24.REL:0x1A9400.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_001DA108;
extern unsigned char D_001DA180[];
extern unsigned char D_001DA1A0[];
extern void func_1A1B90(void *, void *, void *, void *, void *, void *);

void func_1A9400(void *first, void *second, void *third)
{
    func_1A1B90(D_001DA108, first, second,
                D_001DA180, D_001DA1A0, third);
}
