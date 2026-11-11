/* LEVEL_03:0x0C87A0 -- placement copy of LEVEL_01_0C89B8.c: after a state refresh, queues the 30-tick transition when the second query is set and the first equals 2, then plays the confirm sequence if the check holds. */
extern void func_0D6D70(int a0);
extern unsigned int func_0D6840(void);
extern unsigned int func_0D6850(void);
extern int func_131058(void);
extern void func_131138(void);
extern void func_133AA8(int *p, int a1);

void func_0C87A0(int *p)
{
    unsigned int first;
    unsigned int second;

    func_0D6D70(5);
    first = func_0D6840();
    second = func_0D6850();
    if (second != 0 && first == 2) {
        func_133AA8(p, 30);
    }
    if (func_131058() != 0) {
        func_131138();
        func_133AA8(p, 1);
    }
}
