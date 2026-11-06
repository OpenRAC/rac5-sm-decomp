/* LEVEL_01.REL:0x1B6190, bounded 184-byte candidate.
 * Isolated pinned C object: 184 bytes; first linked
 * difference at body byte +84. Not linked into the accepted
 * gate or counted.
 * Reopen: The size is exact; the loop preheader materialises -1, base+0x84 and base+4 in a different order. Reopen with a source order that puts the -1 constant first without adding a saved register.
 */
extern void func_1B6348(char *param);
extern void func_144050(int value);

char *func_1B6190(int param_1, char *param_2)
{
    char *base = *(char **)(param_2 + 0x58);
    int *p5;
    char *p2;
    int *p3;
    unsigned int i;
    int v;

    func_1B6348(param_2);
    v = *(int *)(base + 0x80);
    if (v != 0)
        func_144050(v);
    p5 = (int *)(base + 0x68);
    i = 0;
    p2 = base + 0x84;
    p3 = (int *)(base + 4);
    *(int *)(param_2 + 0xC) = 0;
    *(float *)(param_2 + 0x3C) = 1.0f;
    *(int *)(param_2 + 0x1C) = 0;
    *(int *)(param_2 + 0x2C) = 0;
    *(int *)(param_2 + 0x70) = 0;
    *(char *)(param_2 + 0x45) = 0;
    *(int *)(base + 0x80) = param_1;
    *(int *)(base + 0x7C) = 0;
    do {
        *p5++ = 0;
        *p3 = -1;
        p2[i] = 0;
        p3 += 5;
        i++;
    } while (i < 5);
    return param_2;
}
