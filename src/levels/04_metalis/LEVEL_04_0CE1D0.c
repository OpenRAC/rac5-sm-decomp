/* LEVEL_04:0x0CE1D0 -- placement copy of LEVEL_01_0C89B8.c: after a state refresh, queues the 30-tick transition when the second query is set and the first equals 2, then plays the confirm sequence if the check holds. */
extern void func_0DC838(int a0);
extern unsigned int func_0DC308(void);
extern unsigned int func_0DC318(void);
extern int func_13F110(void);
extern void func_13F1F0(void);
extern void func_141B60(int *p, int a1);

void func_0CE1D0(int *p)
{
    unsigned int first;
    unsigned int second;

    func_0DC838(5);
    first = func_0DC308();
    second = func_0DC318();
    if (second != 0 && first == 2) {
        func_141B60(p, 30);
    }
    if (func_13F110() != 0) {
        func_13F1F0();
        func_141B60(p, 1);
    }
}
