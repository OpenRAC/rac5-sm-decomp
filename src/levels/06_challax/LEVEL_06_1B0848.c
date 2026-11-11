/* LEVEL_06:0x1B0848 -- resets a state byte before two calls. */
extern void func_1AF0A8(char *, int);
extern void func_1B0888(char *);

void func_1B0848(char *record)
{
    if (((unsigned char *)record)[0x45] != 0x1c) {
        func_1AF0A8(record, 0x1d);
        func_1B0888(record);
    }
}
