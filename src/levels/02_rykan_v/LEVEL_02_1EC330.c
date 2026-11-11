/* Candidate for LEVEL_02.REL:0x1EC330.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_0021E1F0;
extern unsigned char D_0021E268[];
extern unsigned char D_0021E288[];
extern void func_1E6328(void *, void *, void *, void *, void *, void *);

void func_1EC330(void *first, void *second, void *third)
{
    func_1E6328(D_0021E1F0, first, second,
                D_0021E268, D_0021E288, third);
}
