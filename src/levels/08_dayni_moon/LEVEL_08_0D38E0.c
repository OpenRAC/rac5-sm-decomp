/* LEVEL_08:0x0D38E0 -- placement copy of LEVEL_01_0C89B8.c: after a state refresh, queues the 30-tick transition when the second query is set and the first equals 2, then plays the confirm sequence if the check holds. */
extern void func_0E1F48(int a0);
extern unsigned int func_0E1A18(void);
extern unsigned int func_0E1A28(void);
extern int func_1441C8(void);
extern void func_1442A8(void);
extern void func_146C18(int *p, int a1);

void func_0D38E0(int *p)
{
    unsigned int first;
    unsigned int second;

    func_0E1F48(5);
    first = func_0E1A18();
    second = func_0E1A28();
    if (second != 0 && first == 2) {
        func_146C18(p, 30);
    }
    if (func_1441C8() != 0) {
        func_1442A8();
        func_146C18(p, 1);
    }
}
