/* LEVEL_10:0x0C9DF8 -- placement copy of LEVEL_01_0C89B8.c: after a state refresh, queues the 30-tick transition when the second query is set and the first equals 2, then plays the confirm sequence if the check holds. */
extern void func_0D83C8(int a0);
extern unsigned int func_0D7E98(void);
extern unsigned int func_0D7EA8(void);
extern int func_130AF0(void);
extern void func_130BD0(void);
extern void func_133560(int *p, int a1);

void func_0C9DF8(int *p)
{
    unsigned int first;
    unsigned int second;

    func_0D83C8(5);
    first = func_0D7E98();
    second = func_0D7EA8();
    if (second != 0 && first == 2) {
        func_133560(p, 30);
    }
    if (func_130AF0() != 0) {
        func_130BD0();
        func_133560(p, 1);
    }
}
