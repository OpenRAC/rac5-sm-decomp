/* LEVEL_16:0x165CF0 -- packs six small fields into one control word, passes it with a table and a callback to a helper on a local buffer, then runs a second helper on the buffer. */
extern unsigned char D_00165828[];
extern unsigned char D_00165740[];
extern void func_087530(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
extern int func_087708(void *buf);

int func_165CF0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1)
{
    unsigned int buf[4];
    unsigned int x3;
    unsigned int x4;
    unsigned int x5;

    a1 = a1 << 16;
    a0 = a0 << 27;
    a0 = a0 | a1;
    a2 = a2 << 15;
    x3 = a3 << 14;
    a0 = a0 | a2;
    x4 = t0 << 10;
    a0 = a0 | x3;
    x4 = x4 | 0x3000;
    x5 = t1 << 6;
    a0 = a0 | x4;
    func_087530(buf, a0 | x5, (unsigned int)D_00165828, 0x18, 0, -1, (unsigned int)D_00165740);
    return func_087708(buf);
}
