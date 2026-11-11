/* Candidate for LEVEL_06.REL:0x1BF488.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_001F7FC4;
extern unsigned char D_001F8040[];
extern unsigned char D_001F8060[];
extern void func_1BD670(void *, void *, void *, void *, void *, void *);

void func_1BF488(void *first, void *second, void *third)
{
    func_1BD670(D_001F7FC4, first, second,
                D_001F8040, D_001F8060, third);
}
