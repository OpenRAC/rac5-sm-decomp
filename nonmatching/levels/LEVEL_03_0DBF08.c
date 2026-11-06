/* LEVEL_03.REL:0x0DBF08, bounded 200-byte candidate.
 * Isolated pinned C object: 200 bytes; first linked
 * difference at body byte +8. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
extern void func_0DBD30(void *buf, int a, int b);
extern int func_096890(void *buf);
extern void func_0DBDD8(int a, int b, int c, int d, int e, int f, float x, float y,
                        float z);

void func_0DBF08(int p1, int p2, int p3, int p4, int p5, int p6, int p7,
                 float f1, float f2, float f3)
{
    char buf[0x10];
    int result;

    func_0DBD30(buf, p1, p5);
    buf[0x0A] |= 1;
    result = func_096890(buf);
    if (result != -1)
        func_0DBDD8(result, p2, p3, p4, p6, p7, f1, f2, f3);
}
