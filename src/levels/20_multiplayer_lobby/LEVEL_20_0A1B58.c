/* LEVEL_20:0x0A1B58 -- placement copy of LEVEL_01_0C89B8.c: after a state refresh, queues the 30-tick transition when the second query is set and the first equals 2, then plays the confirm sequence if the check holds. */
extern void func_0B0BB0(int a0);
extern unsigned int func_0B0680(void);
extern unsigned int func_0B0690(void);
extern int func_0E28F8(void);
extern void func_0E29C0(void);
extern void func_0E4B98(int *p, int a1);

void func_0A1B58(int *p)
{
    unsigned int first;
    unsigned int second;

    func_0B0BB0(5);
    first = func_0B0680();
    second = func_0B0690();
    if (second != 0 && first == 2) {
        func_0E4B98(p, 30);
    }
    if (func_0E28F8() != 0) {
        func_0E29C0();
        func_0E4B98(p, 1);
    }
}
