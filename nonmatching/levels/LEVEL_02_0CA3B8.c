/* LEVEL_02.REL:0x0CA3B8, bounded 180-byte candidate.
 * Isolated pinned C object: 180 bytes; first linked
 * difference at body byte +20. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
extern unsigned int func_08E950(int id);
extern void func_0BC930(int value);
extern void *func_0C3430(void);
extern void func_01B188(int a, int b);
extern void func_0BFFB8(void *p);
extern void *func_0C0D18(void *p);
extern void func_13A420(int value);
extern char D_003406B0[];

void func_0CA3B8(void)
{
    unsigned int f = func_08E950(0x6B10);
    char *obj;

    if (f & 8) {
        func_0BC930(7);
        func_0BC930(0);
        func_01B188(4, 0);
    } else if (f & 0x1000) {
        func_0BC930(7);
        func_0BC930(0);
        if (func_0C3430() == 0)
            func_01B188(4, 0);
    } else {
        func_0BFFB8(D_003406B0);
    }
    obj = (char *)func_0C0D18(D_003406B0);
    if (obj != 0) {
        f = *(unsigned int *)(obj + 0xD4);
        if (f != 0)
            func_13A420(0);
    }
}
