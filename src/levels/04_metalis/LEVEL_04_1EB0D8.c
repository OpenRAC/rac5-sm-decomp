/* Candidate for LEVEL_04.REL:0x1EB0D8.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_00222AAC;
extern unsigned char D_00222B20[];
extern unsigned char D_00222B40[];
extern void func_1E8678(void *, void *, void *, void *, void *, void *);

void func_1EB0D8(void *first, void *second, void *third)
{
    func_1E8678(D_00222AAC, first, second,
                D_00222B20, D_00222B40, third);
}
