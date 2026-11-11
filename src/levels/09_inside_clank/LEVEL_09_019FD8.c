void func_084070(void);
void func_09D148(void);
int func_084940(int);
void func_0B9768(int);
int func_019C58(int);
void func_019C18(int, int);
void func_001228(void);

void func_019FD8(void)
{
    func_084070();
    func_09D148();
    if (func_084940(1) & 8) {
        func_0B9768(5);
        if (func_019C58(10)) {
            func_019C18(4, 0);
            return;
        }
        if (func_019C58(4))
            func_019C18(10, 0);
    }
    func_001228();
}
