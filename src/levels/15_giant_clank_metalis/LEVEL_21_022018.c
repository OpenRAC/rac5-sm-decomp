/* LEVEL_21:0x022018 -- placement copy of LEVEL_01_028138.c: copies a stat block from a saved table back into 25 looked-up entries. */
extern char *D_00148C2C;
extern char *func_01E990(int i, int j);

void func_022018(void)
{
    unsigned int i;
    int off;
    char *e;

    for (i = 0, off = 0; i < 25; i++, off += 24) {
        e = func_01E990(i, -1);
        if (e) {
            *(int *)(e + 0x40) = *(int *)(D_00148C2C + off + 0x600);
            *(int *)(e + 0x44) = *(int *)(D_00148C2C + off + 0x604);
            *(int *)(e + 0x3C) = *(int *)(D_00148C2C + off + 0x5FC);
            *(unsigned char *)(e + 0x4C) = *(unsigned char *)(D_00148C2C + off + 0x608);
            *(unsigned char *)(e + 0x4F) = *(unsigned char *)(D_00148C2C + off + 0x60B);
            *(unsigned char *)(e + 0x4D) = *(unsigned char *)(D_00148C2C + off + 0x609);
            *(unsigned char *)(e + 0x50) = *(unsigned char *)(D_00148C2C + off + 0x60C);
            *(unsigned char *)(e + 0x4E) = *(unsigned char *)(D_00148C2C + off + 0x60A);
            *(unsigned char *)(e + 0x51) = *(unsigned char *)(D_00148C2C + off + 0x60D);
            *(int *)(e + 0x54) = *(int *)(D_00148C2C + off + 0x610);
        }
    }
}
