void func_08F708(void);
void func_0AA790(void);
int func_08FFD8(int);
void func_0C73D8(int);
int func_01B1E0(int);
void func_01B1A0(int, int);
void func_001228(void);

void func_01B560(void)
{
    func_08F708();
    func_0AA790();
    if (func_08FFD8(1) & 8) {
        func_0C73D8(5);
        if (func_01B1E0(10)) {
            func_01B1A0(4, 0);
            return;
        }
        if (func_01B1E0(4))
            func_01B1A0(10, 0);
    }
    func_001228();
}
