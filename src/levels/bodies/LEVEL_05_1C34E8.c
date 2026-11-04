/* Candidate for LEVEL_05.REL:0x1C34E8.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_001F813C;
extern unsigned char D_001F81B0[];
extern unsigned char D_001F81D0[];
extern void func_1C0A88(void *, void *, void *, void *, void *, void *);

void func_1C34E8(void *first, void *second, void *third)
{
    func_1C0A88(D_001F813C, first, second,
                D_001F81B0, D_001F81D0, third);
}
