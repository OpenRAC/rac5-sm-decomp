/* LEVEL_20:0x022840 -- placement copy of LEVEL_16_025D20.c: copies a stat block from a saved table back into 25 looked-up entries. */
extern char *D_00104194;
extern char *func_01EDC8(int i, int j);

void func_022840(void)
{
    unsigned int i;
    int off;
    char *e;

    for (i = 0, off = 0; i < 25; i++, off += 24) {
        e = func_01EDC8(i, -1);
        if (e) {
            *(int *)(e + 0x40) = *(int *)(D_00104194 + off + 0x600);
            *(int *)(e + 0x44) = *(int *)(D_00104194 + off + 0x604);
            *(int *)(e + 0x3C) = *(int *)(D_00104194 + off + 0x5FC);
            *(unsigned char *)(e + 0x48) = *(unsigned char *)(D_00104194 + off + 0x608);
            *(unsigned char *)(e + 0x4B) = *(unsigned char *)(D_00104194 + off + 0x60B);
            *(unsigned char *)(e + 0x49) = *(unsigned char *)(D_00104194 + off + 0x609);
            *(unsigned char *)(e + 0x4C) = *(unsigned char *)(D_00104194 + off + 0x60C);
            *(unsigned char *)(e + 0x4A) = *(unsigned char *)(D_00104194 + off + 0x60A);
            *(unsigned char *)(e + 0x4D) = *(unsigned char *)(D_00104194 + off + 0x60D);
            *(int *)(e + 0x50) = *(int *)(D_00104194 + off + 0x610);
        }
    }
}
