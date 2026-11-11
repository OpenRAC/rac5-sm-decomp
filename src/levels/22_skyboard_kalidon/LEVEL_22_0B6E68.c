/* LEVEL_22:0x0B6E68 -- placement copy of LEVEL_01_0C89B8.c: after a state refresh, queues the 30-tick transition when the second query is set and the first equals 2, then plays the confirm sequence if the check holds. */
extern void func_0C54C8(int a0);
extern unsigned int func_0C4F98(void);
extern unsigned int func_0C4FA8(void);
extern int func_10A160(void);
extern void func_10A240(void);
extern void func_10CBB0(int *p, int a1);

void func_0B6E68(int *p)
{
    unsigned int first;
    unsigned int second;

    func_0C54C8(5);
    first = func_0C4F98();
    second = func_0C4FA8();
    if (second != 0 && first == 2) {
        func_10CBB0(p, 30);
    }
    if (func_10A160() != 0) {
        func_10A240();
        func_10CBB0(p, 1);
    }
}
