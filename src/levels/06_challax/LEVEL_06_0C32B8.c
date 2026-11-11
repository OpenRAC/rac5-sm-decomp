/* LEVEL_06:0x0C32B8 -- placement copy of LEVEL_01_0C89B8.c: after a state refresh, queues the 30-tick transition when the second query is set and the first equals 2, then plays the confirm sequence if the check holds. */
extern void func_0D1888(int a0);
extern unsigned int func_0D1358(void);
extern unsigned int func_0D1368(void);
extern int func_129360(void);
extern void func_129440(void);
extern void func_12BDB0(int *p, int a1);

void func_0C32B8(int *p)
{
    unsigned int first;
    unsigned int second;

    func_0D1888(5);
    first = func_0D1358();
    second = func_0D1368();
    if (second != 0 && first == 2) {
        func_12BDB0(p, 30);
    }
    if (func_129360() != 0) {
        func_129440();
        func_12BDB0(p, 1);
    }
}
