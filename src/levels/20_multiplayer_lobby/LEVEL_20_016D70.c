void func_066868(void);
void func_079A50(void);
int func_067138(int);
void func_095DF0(int);
int func_016990(int);
void func_016950(int, int);
void func_000DE0(void);

void func_016D70(void)
{
    func_066868();
    func_079A50();
    if (func_067138(1) & 8) {
        func_095DF0(5);
        if (func_016990(10)) {
            func_016950(4, 0);
            return;
        }
        if (func_016990(4))
            func_016950(10, 0);
    }
    func_000DE0();
}
