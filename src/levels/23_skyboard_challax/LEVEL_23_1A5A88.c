/* Candidate for LEVEL_23.REL:0x1A5A88.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_001DC444;
extern unsigned char D_001DC4B8[];
extern unsigned char D_001DC4D8[];
extern void func_1A3028(void *, void *, void *, void *, void *, void *);

void func_1A5A88(void *first, void *second, void *third)
{
    func_1A3028(D_001DC444, first, second,
                D_001DC4B8, D_001DC4D8, third);
}
