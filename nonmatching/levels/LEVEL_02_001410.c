/* LEVEL_02.REL:0x001410, bounded 48-byte body.
 * Pinned C links 44 against the 48-byte retail body; first
 * difference at byte +12 is a missing float value copy
 * before the first local call. Retail stores the copy in
 * that call's delay slot. Reopen with the original float
 * lifetime/prototype or a qualified compiler route.
 */
extern char *D_00203EC8;
extern float func_0829A0(void);
extern void func_001458(float);

void func_001410(float value)
{
    *(float *)(D_00203EC8 + 0xf8) = value;
    func_001458(func_0829A0());
}
