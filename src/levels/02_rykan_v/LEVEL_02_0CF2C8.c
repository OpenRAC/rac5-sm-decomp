/* LEVEL_02:0x0CF2C8 -- placement copy of LEVEL_01_0C89B8.c: after a state refresh, queues the 30-tick transition when the second query is set and the first equals 2, then plays the confirm sequence if the check holds. */
extern void func_0DD918(int a0);
extern unsigned int func_0DD3E8(void);
extern unsigned int func_0DD3F8(void);
extern int func_139040(void);
extern void func_139120(void);
extern void func_13BA90(int *p, int a1);

void func_0CF2C8(int *p)
{
    unsigned int first;
    unsigned int second;

    func_0DD918(5);
    first = func_0DD3E8();
    second = func_0DD3F8();
    if (second != 0 && first == 2) {
        func_13BA90(p, 30);
    }
    if (func_139040() != 0) {
        func_139120();
        func_13BA90(p, 1);
    }
}
