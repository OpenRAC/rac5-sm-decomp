/* Candidate for LEVEL_05.REL:0x1C1038.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_001F8084;
extern unsigned char D_001F8100[];
extern unsigned char D_001F8120[];
extern void func_1C0A88(void *, void *, void *, void *, void *, void *);

void func_1C1038(void *first, void *second, void *third)
{
    func_1C0A88(D_001F8084, first, second,
                D_001F8100, D_001F8120, third);
}
