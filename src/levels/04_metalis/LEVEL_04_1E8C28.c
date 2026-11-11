/* Candidate for LEVEL_04.REL:0x1E8C28.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_002229F4;
extern unsigned char D_00222A70[];
extern unsigned char D_00222A90[];
extern void func_1E8678(void *, void *, void *, void *, void *, void *);

void func_1E8C28(void *first, void *second, void *third)
{
    func_1E8678(D_002229F4, first, second,
                D_00222A70, D_00222A90, third);
}
