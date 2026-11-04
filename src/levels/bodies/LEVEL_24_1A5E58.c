/* Candidate for LEVEL_24.REL:0x1A5E58.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_001DA02C;
extern unsigned char D_001DA0A0[];
extern unsigned char D_001DA0C0[];
extern void func_1A1B90(void *, void *, void *, void *, void *, void *);

void func_1A5E58(void *first, void *second, void *third)
{
    func_1A1B90(D_001DA02C, first, second,
                D_001DA0A0, D_001DA0C0, third);
}
