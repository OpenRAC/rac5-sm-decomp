extern void func_0E2818(int, void *);
extern int func_05B988(void);
extern void func_059038(void);

void func_13EB80(char *record)
{
    func_0E2818(0x24, record + 0x30);
    if (func_05B988() != 0)
        func_059038();
}
