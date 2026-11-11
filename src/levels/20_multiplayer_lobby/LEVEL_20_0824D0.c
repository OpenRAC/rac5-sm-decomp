/* LEVEL_20:0x0824D0 -- placement copy of FRONTEND_00C338.c: walks a command byte stream and accumulates a length from decoded entries. */
struct Col {
    unsigned char a, b, c, d;
};
extern struct Col func_082328(unsigned char idx, unsigned char sel);
extern int func_0E1CC8(unsigned char *p, int *used);

unsigned short func_0824D0(unsigned char *data, unsigned len)
{
    unsigned i;
    unsigned short total;
    unsigned n;
    int used;
    unsigned char c;
    int sel;
    int t1;

    if (data == 0)
        return 0;
    i = 0;
    total = 0;
    while (i < len) {
        c = data[i];
        if ((c ^ 0x90) == 0) {
            i++;
        } else if ((c ^ 0x95) == 0) {
            n = i + 1;
            used = 0;
            func_0E1CC8(data + n, &used);
            total += 0x11;
            i = n + used;
        } else {
            sel = c - 0x92;
            if ((unsigned char)(c - 0x92) >= 2)
                sel = 0;
            if (sel)
                i++;
            t1 = total + 1;
            total = t1 + func_082328(data[i], sel).c;
        }
        i++;
    }
    return total;
}
