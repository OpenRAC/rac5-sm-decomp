/* Candidate for LEVEL_02.REL:0x1E8D88.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_0021E114;
extern unsigned char D_0021E188[];
extern unsigned char D_0021E1A8[];
extern void func_1E6328(void *, void *, void *, void *, void *, void *);

void func_1E8D88(void *first, void *second, void *third)
{
    func_1E6328(D_0021E114, first, second,
                D_0021E188, D_0021E1A8, third);
}
