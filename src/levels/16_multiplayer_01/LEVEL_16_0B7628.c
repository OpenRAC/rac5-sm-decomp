/* LEVEL_16:0x0B7628 -- placement copy of LEVEL_01_0C89B8.c: after a state refresh, queues the 30-tick transition when the second query is set and the first equals 2, then plays the confirm sequence if the check holds. */
extern void func_0C6680(int a0);
extern unsigned int func_0C6150(void);
extern unsigned int func_0C6160(void);
extern int func_10FB10(void);
extern void func_10FBD8(void);
extern void func_111DB0(int *p, int a1);

void func_0B7628(int *p)
{
    unsigned int first;
    unsigned int second;

    func_0C6680(5);
    first = func_0C6150();
    second = func_0C6160();
    if (second != 0 && first == 2) {
        func_111DB0(p, 30);
    }
    if (func_10FB10() != 0) {
        func_10FBD8();
        func_111DB0(p, 1);
    }
}
