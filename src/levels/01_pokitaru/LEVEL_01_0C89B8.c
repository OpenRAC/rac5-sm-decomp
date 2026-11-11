/* LEVEL_01:0x0C89B8 -- after a state refresh, queues the 30-tick transition when the second query is set and the first equals 2, then plays the confirm sequence if the check holds. */
extern void func_0D6F88(int a0);
extern unsigned int func_0D6A58(void);
extern unsigned int func_0D6A68(void);
extern int func_132C90(void);
extern void func_132D70(void);
extern void func_1356E0(int *p, int a1);

void func_0C89B8(int *p)
{
    unsigned int first;
    unsigned int second;

    func_0D6F88(5);
    first = func_0D6A58();
    second = func_0D6A68();
    if (second != 0 && first == 2) {
        func_1356E0(p, 30);
    }
    if (func_132C90() != 0) {
        func_132D70();
        func_1356E0(p, 1);
    }
}
