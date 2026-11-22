/* boot:0x01ED2090 -- reads characters from the TTY receive buffer until the count is reached or a line end is read. Ported from OpenRAC/rac4-decomp src/core/00128180.c (func_00128180). */
typedef struct {
    int f0;
    volatile int f4;
    unsigned char *f8;
} Type1;
typedef struct {
    unsigned char pad0[0x18];
    Type1 *f18;
} Type2;
extern Type2 D_01FE3A90;
extern void func_01ED1D40();

int sceTtyRead(char *buf, int n)
{
    int i;

    for (i = 0; i < n; i++) {
        while (D_01FE3A90.f18->f4 == 0) {
        }
        buf[i] = *D_01FE3A90.f18->f8;
        func_01ED1D40(D_01FE3A90.f18);
        if (buf[i] == '\n' || buf[i] == '\r') {
            return i + 1;
        }
    }
    return i;
}
