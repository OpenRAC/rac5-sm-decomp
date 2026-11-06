/* LEVEL_01.REL:0x0A7570: Ghidra body 84 bytes.
 * Pinned pure C links 84 bytes and first differs at +50.
 * Recheck final call's second global argument register. No matching credit.
 */
extern void func_0A7318(void);
extern void func_0A7250(void *, long long);
extern void func_0A6CE8(void);
extern void func_0A66D0(void *, void *);
extern void *D_001F68E0;
extern void *D_001F68E4;

void func_0A7570(long long value)
{
    func_0A7318();
    func_0A7250(D_001F68E0, value);
    func_0A6CE8();
    func_0A66D0(D_001F68E0, D_001F68E4);
}
