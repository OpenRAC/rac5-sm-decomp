/* Candidate for LEVEL_23.REL:0x1A9030.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_001DC520;
extern unsigned char D_001DC598[];
extern unsigned char D_001DC5B8[];
extern void func_1A3028(void *, void *, void *, void *, void *, void *);

void func_1A9030(void *first, void *second, void *third)
{
    func_1A3028(D_001DC520, first, second,
                D_001DC598, D_001DC5B8, third);
}
