/* Candidate for LEVEL_24.REL:0x1A39A8.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_001D9F74;
extern unsigned char D_001D9FF0[];
extern unsigned char D_001DA010[];
extern void func_1A1B90(void *, void *, void *, void *, void *, void *);

void func_1A39A8(void *first, void *second, void *third)
{
    func_1A1B90(D_001D9F74, first, second,
                D_001D9FF0, D_001DA010, third);
}
