/* LEVEL_01:0x0B6E68 -- issues three calls with the same index and argument, once. */
extern void func_0B7270(int, int);
extern void func_0B7148(int, int);
extern void func_0B6FE8(int, int);

void func_0B6E68(void)
{
    unsigned int i = 0;
    do {
        func_0B7270(i, 0x5a);
        func_0B7148(i, 0x5a);
        func_0B6FE8(i, 0x5a);
        i++;
    } while (i == 0);
}
