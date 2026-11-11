/* LEVEL_15:0x0A9000 -- placement copy of LEVEL_01_0C89B8.c: after a state refresh, queues the 30-tick transition when the second query is set and the first equals 2, then plays the confirm sequence if the check holds. */
extern void func_0B75C8(int a0);
extern unsigned int func_0B7098(void);
extern unsigned int func_0B70A8(void);
extern int func_0F1B58(void);
extern void func_0F1C38(void);
extern void func_0F45A8(int *p, int a1);

void func_0A9000(int *p)
{
    unsigned int first;
    unsigned int second;

    func_0B75C8(5);
    first = func_0B7098();
    second = func_0B70A8();
    if (second != 0 && first == 2) {
        func_0F45A8(p, 30);
    }
    if (func_0F1B58() != 0) {
        func_0F1C38();
        func_0F45A8(p, 1);
    }
}
