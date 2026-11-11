/* Candidate for LEVEL_06.REL:0x1C4EE0.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_001F8158;
extern unsigned char D_001F81D0[];
extern unsigned char D_001F81F0[];
extern void func_1BD670(void *, void *, void *, void *, void *, void *);

void func_1C4EE0(void *first, void *second, void *third)
{
    func_1BD670(D_001F8158, first, second,
                D_001F81D0, D_001F81F0, third);
}
