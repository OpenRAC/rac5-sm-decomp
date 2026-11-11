/* LEVEL_18:0x0252D0 -- placement copy of LEVEL_16_025D20.c: copies a stat block from a saved table back into 25 looked-up entries. */
extern char *D_001A2F34;
extern char *func_021710(int i, int j);

void func_0252D0(void)
{
    unsigned int i;
    int off;
    char *e;

    for (i = 0, off = 0; i < 25; i++, off += 24) {
        e = func_021710(i, -1);
        if (e) {
            *(int *)(e + 0x40) = *(int *)(D_001A2F34 + off + 0x600);
            *(int *)(e + 0x44) = *(int *)(D_001A2F34 + off + 0x604);
            *(int *)(e + 0x3C) = *(int *)(D_001A2F34 + off + 0x5FC);
            *(unsigned char *)(e + 0x48) = *(unsigned char *)(D_001A2F34 + off + 0x608);
            *(unsigned char *)(e + 0x4B) = *(unsigned char *)(D_001A2F34 + off + 0x60B);
            *(unsigned char *)(e + 0x49) = *(unsigned char *)(D_001A2F34 + off + 0x609);
            *(unsigned char *)(e + 0x4C) = *(unsigned char *)(D_001A2F34 + off + 0x60C);
            *(unsigned char *)(e + 0x4A) = *(unsigned char *)(D_001A2F34 + off + 0x60A);
            *(unsigned char *)(e + 0x4D) = *(unsigned char *)(D_001A2F34 + off + 0x60D);
            *(int *)(e + 0x50) = *(int *)(D_001A2F34 + off + 0x610);
        }
    }
}
