/* LEVEL_02.REL:0x0C0980, bounded 176-byte candidate.
 * Isolated pinned C object: 156 bytes; first linked
 * difference at body byte +0. Not linked into the accepted
 * gate or counted.
 * Reopen: The retail copies the parameter to $t2 and keeps redundant element-address copies. Reopen with a form that preserves those copies.
 */
typedef struct {
    int f00;
    int f04;
    int f08;
    unsigned char f0C;
    unsigned char pad0D[3];
    int f10;
    int f14;
} Item;

int func_000C0980(int param_1)
{
    unsigned int i;
    int off;

    if (*(int *)(param_1 + 0x30) != 1) {
        return 0;
    }
    i = *(unsigned int *)(param_1 + 0x38);
    if (i < 4) {
        off = i * 0x30;
        do {
            Item *p = (Item *)(*(int *)(param_1 + 0x2C) + off);

            p->f08 = -1;
            p->f14 = -1;
            p->f10 = 0;
            p->f00 = 0;
            i = i + 1;
            off = off + 0x30;
            p->f0C = 0;
            p->f04 = -1;
        } while (i < 4);
    }
    i = *(int *)(param_1 + 0x2C) + 0xE4;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    *(unsigned int *)(param_1 + 0x2C) = i;
    if (i <= *(unsigned int *)(param_1 + 0x28)) {
        *(int *)(param_1 + 0x30) = 0;
        return 1;
    }
    *(unsigned int *)(param_1 + 0x2C) = *(unsigned int *)(param_1 + 0x28);
    return 0;
}
