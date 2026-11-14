/* LEVEL_15:0x1274E0 -- runs the helper on each 0x3C-byte record of the global table and clears two of its words. */
extern char D_002F2D20[];
extern void func_1269F0(char *record);

void func_1274E0(void)
{
    char *b = D_002F2D20;
    char *record = b + 4;
    char *p = b;
    char *end = p + 0xB4;

    do {
        func_1269F0(record);
        *(int *)(p + 0x34) = 0;
        *(int *)(p + 0x38) = 0;
        p += 0x3C;
        record += 0x3C;
    } while ((int)p < (int)end);
}
