/* Candidate for LEVEL_09.REL:0x1BFE00.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_001F2F20;
extern unsigned char D_001F2F98[];
extern unsigned char D_001F2FB8[];
extern void func_1B8590(void *, void *, void *, void *, void *, void *);

void func_1BFE00(void *first, void *second, void *third)
{
    func_1B8590(D_001F2F20, first, second,
                D_001F2F98, D_001F2FB8, third);
}
