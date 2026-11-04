/* Candidate for LEVEL_02.REL:0x1E68D8.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_0021E05C;
extern unsigned char D_0021E0D8[];
extern unsigned char D_0021E0F8[];
extern void func_1E6328(void *, void *, void *, void *, void *, void *);

void func_1E68D8(void *first, void *second, void *third)
{
    func_1E6328(D_0021E05C, first, second,
                D_0021E0D8, D_0021E0F8, third);
}
