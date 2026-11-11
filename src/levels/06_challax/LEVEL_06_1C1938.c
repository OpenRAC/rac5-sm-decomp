/* Candidate for LEVEL_06.REL:0x1C1938.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_001F807C;
extern unsigned char D_001F80F0[];
extern unsigned char D_001F8110[];
extern void func_1BD670(void *, void *, void *, void *, void *, void *);

void func_1C1938(void *first, void *second, void *third)
{
    func_1BD670(D_001F807C, first, second,
                D_001F80F0, D_001F8110, third);
}
