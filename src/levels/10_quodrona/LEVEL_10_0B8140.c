/* LEVEL_10:0x0B8140 -- placement copy of LEVEL_01_0B6EC0.c: calls four helpers with a counter that starts at zero. */
extern void func_0B7A80(int value);
extern void func_0B7B28(int value);
extern void func_0B7B90(int value);
extern void func_0BA488(int value);

void func_0B8140(void)
{
    int i = 0;
    do {
        func_0B7A80(i);
        func_0B7B28(i);
        func_0B7B90(i);
        func_0BA488(i);
        i++;
    } while (i == 0);
}
