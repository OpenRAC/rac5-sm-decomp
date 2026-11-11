void func_06BD98(void);
void func_0807D0(void);
int func_06C668(int);
void func_09CB00(int);
int func_016A50(int);
void func_016A10(int, int);
void func_000D10(void);

void func_016DD0(void)
{
    func_06BD98();
    func_0807D0();
    if (func_06C668(1) & 8) {
        func_09CB00(5);
        if (func_016A50(10)) {
            func_016A10(4, 0);
            return;
        }
        if (func_016A50(4))
            func_016A10(10, 0);
    }
    func_000D10();
}
