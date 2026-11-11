/* Candidate for LEVEL_23.REL:0x1A35D8.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_001DC38C;
extern unsigned char D_001DC408[];
extern unsigned char D_001DC428[];
extern void func_1A3028(void *, void *, void *, void *, void *, void *);

void func_1A35D8(void *first, void *second, void *third)
{
    func_1A3028(D_001DC38C, first, second,
                D_001DC408, D_001DC428, third);
}
