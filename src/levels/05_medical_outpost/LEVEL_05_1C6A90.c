/* Candidate for LEVEL_05.REL:0x1C6A90.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_001F8218;
extern unsigned char D_001F8290[];
extern unsigned char D_001F82B0[];
extern void func_1C0A88(void *, void *, void *, void *, void *, void *);

void func_1C6A90(void *first, void *second, void *third)
{
    func_1C0A88(D_001F8218, first, second,
                D_001F8290, D_001F82B0, third);
}
