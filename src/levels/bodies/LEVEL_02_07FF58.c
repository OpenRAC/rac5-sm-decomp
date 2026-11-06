extern void func_07B390(void);
extern void func_07F850(void);
extern void func_07BAE8(void);
extern void func_07AC68(void);
extern void func_07F808(void);
extern void func_07BCA0(void);

void func_07FF58(long long unused, long long other, int target)
{
    if (target == (int)(void *)func_07B390) {
        func_07AC68();
    } else if (target == (int)(void *)func_07F850) {
        func_07F808();
    } else if (target == (int)(void *)func_07BAE8) {
        func_07BCA0();
    }
}
