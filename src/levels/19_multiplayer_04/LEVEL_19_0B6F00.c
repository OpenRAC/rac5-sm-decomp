/* LEVEL_19:0x0B6F00 -- placement copy of LEVEL_01_0C89B8.c: after a state refresh, queues the 30-tick transition when the second query is set and the first equals 2, then plays the confirm sequence if the check holds. */
extern void func_0C5F58(int a0);
extern unsigned int func_0C5A28(void);
extern unsigned int func_0C5A38(void);
extern int func_1101B0(void);
extern void func_110278(void);
extern void func_112450(int *p, int a1);

void func_0B6F00(int *p)
{
    unsigned int first;
    unsigned int second;

    func_0C5F58(5);
    first = func_0C5A28();
    second = func_0C5A38();
    if (second != 0 && first == 2) {
        func_112450(p, 30);
    }
    if (func_1101B0() != 0) {
        func_110278();
        func_112450(p, 1);
    }
}
