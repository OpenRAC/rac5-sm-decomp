/* LEVEL_23:0x0BF758 -- placement copy of LEVEL_01_0C89B8.c: after a state refresh, queues the 30-tick transition when the second query is set and the first equals 2, then plays the confirm sequence if the check holds. */
extern void func_0CDDB8(int a0);
extern unsigned int func_0CD888(void);
extern unsigned int func_0CD898(void);
extern int func_124408(void);
extern void func_1244E8(void);
extern void func_126E58(int *p, int a1);

void func_0BF758(int *p)
{
    unsigned int first;
    unsigned int second;

    func_0CDDB8(5);
    first = func_0CD888();
    second = func_0CD898();
    if (second != 0 && first == 2) {
        func_126E58(p, 30);
    }
    if (func_124408() != 0) {
        func_1244E8();
        func_126E58(p, 1);
    }
}
