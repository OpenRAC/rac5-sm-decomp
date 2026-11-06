/* FRONTEND.REL:0x0026B0, bounded 180-byte candidate.
 * Isolated pinned C object: 180 bytes; first linked
 * difference at body byte +156. Not linked into the accepted
 * gate or counted.
 * Reopen: Only the epilogue restore order differs (retail s1,s0,s2,ra; chain s0,s1,s2,ra). Reopen with a source shape that changes the epilogue block priorities.
 */
extern void func_002988(char *, int, int);
extern int func_0025B0(int);
extern int ps2fioOpen(char *, int, unsigned short);
extern unsigned int D_00027E6C;
extern int D_0010BA40[];

int func_000026B0(int a, int b, int c)
{
    char buf[0x100];
    int fd;

    func_002988(buf, 0x100, a);
    func_0025B0(1);
    do {
        fd = ps2fioOpen(buf, b, c);
        if (fd >= 0) {
            goto success;
        }
        if (func_0025B0(1) == 0) {
            return fd;
        }
    } while (1);
success:
    if (D_00027E6C >= 0x80) {
        return fd;
    }
    D_0010BA40[D_00027E6C] = fd;
    D_00027E6C = D_00027E6C + 1;
    return fd;
}
