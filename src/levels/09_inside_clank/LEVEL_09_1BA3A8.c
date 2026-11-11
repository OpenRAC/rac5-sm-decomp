/* Candidate for LEVEL_09.REL:0x1BA3A8.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_001F2D8C;
extern unsigned char D_001F2E08[];
extern unsigned char D_001F2E28[];
extern void func_1B8590(void *, void *, void *, void *, void *, void *);

void func_1BA3A8(void *first, void *second, void *third)
{
    func_1B8590(D_001F2D8C, first, second,
                D_001F2E08, D_001F2E28, third);
}
