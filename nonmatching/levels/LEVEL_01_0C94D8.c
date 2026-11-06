/* LEVEL_01.REL:0x0C94D8, bounded 196-byte candidate.
 * Isolated pinned C object: 196 bytes; first linked
 * difference at body byte +20. Not linked into the accepted
 * gate or counted.
 * Reopen: The sprintf format/value types and the argument evaluation order differ. Reopen with explicit typed locals for the format arguments.
 */
extern int D_00200CE4;
extern char D_0032BEB8[];
extern int func_001324B0(int);
extern int func_001336F8(void);
extern void func_000D6F50(int, int, int, int);
extern void func_000D6F88(int);
extern int sprintf(char *buf, const char *fmt, int value);

void func_000C94D8(void)
{
    int a;
    int b;
    int c;

    if (D_00200CE4 == 0) {
        a = func_001324B0(0x214);
        b = func_001324B0(0x30B);
        c = func_001324B0(0x218);
        func_000D6F50(3, a, b, c);
    } else {
        a = func_001336F8();
        b = func_001324B0(0x6E6);
        sprintf(D_0032BEB8, (char *)b, a);
        a = func_001324B0(0x30A);
        b = func_001324B0(0x218);
        func_000D6F50(3, (int)D_0032BEB8, a, b);
        func_000D6F88(10);
    }
}
