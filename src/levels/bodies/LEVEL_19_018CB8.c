void func_0790E0(void);
void func_08E9E0(void);
int func_0799B0(int);
void func_0AB198(int);
int func_0188D8(int);
void func_018898(int, int);
void func_000E20(void);

void func_018CB8(void)
{
    func_0790E0();
    func_08E9E0();
    if (func_0799B0(1) & 8) {
        func_0AB198(5);
        if (func_0188D8(10)) {
            func_018898(4, 0);
            return;
        }
        if (func_0188D8(4))
            func_018898(10, 0);
    }
    func_000E20();
}
