/* Candidate for LEVEL_10.REL:0x1DD2A8.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_00212218;
extern unsigned char D_00212290[];
extern unsigned char D_002122B0[];
extern void func_1D5A38(void *, void *, void *, void *, void *, void *);

void func_1DD2A8(void *first, void *second, void *third)
{
    func_1D5A38(D_00212218, first, second,
                D_00212290, D_002122B0, third);
}
