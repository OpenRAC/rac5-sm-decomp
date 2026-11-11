/* LEVEL_05:0x0C6F60 -- placement copy of LEVEL_01_0C89B8.c: after a state refresh, queues the 30-tick transition when the second query is set and the first equals 2, then plays the confirm sequence if the check holds. */
extern void func_0D5530(int a0);
extern unsigned int func_0D5000(void);
extern unsigned int func_0D5010(void);
extern int func_12E608(void);
extern void func_12E6E8(void);
extern void func_131058(int *p, int a1);

void func_0C6F60(int *p)
{
    unsigned int first;
    unsigned int second;

    func_0D5530(5);
    first = func_0D5000();
    second = func_0D5010();
    if (second != 0 && first == 2) {
        func_131058(p, 30);
    }
    if (func_12E608() != 0) {
        func_12E6E8();
        func_131058(p, 1);
    }
}
