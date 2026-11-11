/* LEVEL_17:0x0B6B68 -- placement copy of LEVEL_01_0C89B8.c: after a state refresh, queues the 30-tick transition when the second query is set and the first equals 2, then plays the confirm sequence if the check holds. */
extern void func_0C5BC0(int a0);
extern unsigned int func_0C5690(void);
extern unsigned int func_0C56A0(void);
extern int func_10F088(void);
extern void func_10F150(void);
extern void func_111328(int *p, int a1);

void func_0B6B68(int *p)
{
    unsigned int first;
    unsigned int second;

    func_0C5BC0(5);
    first = func_0C5690();
    second = func_0C56A0();
    if (second != 0 && first == 2) {
        func_111328(p, 30);
    }
    if (func_10F088() != 0) {
        func_10F150();
        func_111328(p, 1);
    }
}
