void func_080958(void);
void func_099710(void);
int func_081228(int);
void func_0B5D78(int);
int func_018E58(int);
void func_018E18(int, int);
void func_001030(void);

void func_0191D8(void)
{
    func_080958();
    func_099710();
    if (func_081228(1) & 8) {
        func_0B5D78(5);
        if (func_018E58(10)) {
            func_018E18(4, 0);
            return;
        }
        if (func_018E58(4))
            func_018E18(10, 0);
    }
    func_001030();
}
