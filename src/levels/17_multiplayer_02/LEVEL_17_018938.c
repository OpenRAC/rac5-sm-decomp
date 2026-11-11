void func_079670(void);
void func_08E640(void);
int func_079F40(int);
void func_0AAE00(int);
int func_018558(int);
void func_018518(int, int);
void func_000E20(void);

void func_018938(void)
{
    func_079670();
    func_08E640();
    if (func_079F40(1) & 8) {
        func_0AAE00(5);
        if (func_018558(10)) {
            func_018518(4, 0);
            return;
        }
        if (func_018558(4))
            func_018518(10, 0);
    }
    func_000E20();
}
