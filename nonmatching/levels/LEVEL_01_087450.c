/* LEVEL_01.REL:0x087450, bounded 200-byte candidate.
 * Isolated pinned C object: 248 bytes; first linked
 * difference at body byte +0. Not linked into the accepted
 * gate or counted.
 * Reopen: The structure-initializer plus memset form was not found. Reopen with a different initializer shape, keeping the measured store order.
 */
extern unsigned char D_0023B340[];
extern void *memset(void *dst, int c, unsigned int n);

void func_00087450(int param_1, int param_2)
{
    int i = param_1 * 0x240;
    int u1 = *(int *)(D_0023B340 + i + 0x100);
    int u2 = *(int *)(D_0023B340 + i + 0x1F8);

    memset(D_0023B340 + i, 0, 0x240);
    *(unsigned char *)(D_0023B340 + i + 0x153) = 0x80;
    *(int *)(D_0023B340 + i + 0x1F8) = -1;
    *(int *)(D_0023B340 + i + 0x230) = 0x80;
    *(unsigned char *)(D_0023B340 + i + 0x234) = 1;
    *(unsigned char *)(D_0023B340 + i + 0x10C) = 0x80;
    *(unsigned char *)(D_0023B340 + i + 0x10D) = 0x80;
    *(unsigned char *)(D_0023B340 + i + 0x10E) = 0x80;
    *(unsigned char *)(D_0023B340 + i + 0x10F) = 0x80;
    *(unsigned char *)(D_0023B340 + i + 0x150) = 0x80;
    *(unsigned char *)(D_0023B340 + i + 0x151) = 0x80;
    *(unsigned char *)(D_0023B340 + i + 0x152) = 0x80;
    *(int *)(D_0023B340 + i + 0x1EC) = -1;
    *(int *)(D_0023B340 + i + 0x224) = 0x80;
    *(int *)(D_0023B340 + i + 0x228) = 0x80;
    *(int *)(D_0023B340 + i + 0x22C) = 0x80;
    *(unsigned char *)(D_0023B340 + i + 0x235) = 0;
    *(unsigned char *)(D_0023B340 + i + 0x236) = 0;
    if (param_2 != 0) {
        *(int *)(D_0023B340 + i + 0x1F8) = u2;
        *(int *)(D_0023B340 + i + 0x100) = u1;
    }
}
