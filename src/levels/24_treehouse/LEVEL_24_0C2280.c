/* LEVEL_24:0x0C2280 -- placement copy of LEVEL_01_0C89B8.c: after a state refresh, queues the 30-tick transition when the second query is set and the first equals 2, then plays the confirm sequence if the check holds. */
extern void func_0D08E0(int a0);
extern unsigned int func_0D03B0(void);
extern unsigned int func_0D03C0(void);
extern int func_128790(void);
extern void func_128870(void);
extern void func_12B1E0(int *p, int a1);

void func_0C2280(int *p)
{
    unsigned int first;
    unsigned int second;

    func_0D08E0(5);
    first = func_0D03B0();
    second = func_0D03C0();
    if (second != 0 && first == 2) {
        func_12B1E0(p, 30);
    }
    if (func_128790() != 0) {
        func_128870();
        func_12B1E0(p, 1);
    }
}
