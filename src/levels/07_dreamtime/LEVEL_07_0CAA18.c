/* LEVEL_07:0x0CAA18 -- placement copy of LEVEL_01_0C89B8.c: after a state refresh, queues the 30-tick transition when the second query is set and the first equals 2, then plays the confirm sequence if the check holds. */
extern void func_0D8FE8(int a0);
extern unsigned int func_0D8AB8(void);
extern unsigned int func_0D8AC8(void);
extern int func_135C90(void);
extern void func_135D70(void);
extern void func_1386E0(int *p, int a1);

void func_0CAA18(int *p)
{
    unsigned int first;
    unsigned int second;

    func_0D8FE8(5);
    first = func_0D8AB8();
    second = func_0D8AC8();
    if (second != 0 && first == 2) {
        func_1386E0(p, 30);
    }
    if (func_135C90() != 0) {
        func_135D70();
        func_1386E0(p, 1);
    }
}
