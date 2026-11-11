/* Candidate for LEVEL_09.REL:0x1BC858.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_001F2E44;
extern unsigned char D_001F2EB8[];
extern unsigned char D_001F2ED8[];
extern void func_1B8590(void *, void *, void *, void *, void *, void *);

void func_1BC858(void *first, void *second, void *third)
{
    func_1B8590(D_001F2E44, first, second,
                D_001F2EB8, D_001F2ED8, third);
}
