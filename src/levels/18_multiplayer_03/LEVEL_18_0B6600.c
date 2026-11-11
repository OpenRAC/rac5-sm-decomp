/* LEVEL_18:0x0B6600 -- placement copy of LEVEL_01_0C89B8.c: after a state refresh, queues the 30-tick transition when the second query is set and the first equals 2, then plays the confirm sequence if the check holds. */
extern void func_0C5658(int a0);
extern unsigned int func_0C5128(void);
extern unsigned int func_0C5138(void);
extern int func_10E7C0(void);
extern void func_10E888(void);
extern void func_110A60(int *p, int a1);

void func_0B6600(int *p)
{
    unsigned int first;
    unsigned int second;

    func_0C5658(5);
    first = func_0C5128();
    second = func_0C5138();
    if (second != 0 && first == 2) {
        func_110A60(p, 30);
    }
    if (func_10E7C0() != 0) {
        func_10E888();
        func_110A60(p, 1);
    }
}
