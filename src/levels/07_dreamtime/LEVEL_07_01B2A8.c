void func_089788(void);
void func_0A1E70(void);
int func_08A058(int);
void func_0BE518(int);
int func_01AF28(int);
void func_01AEE8(int, int);
void func_001228(void);

void func_01B2A8(void)
{
    func_089788();
    func_0A1E70();
    if (func_08A058(1) & 8) {
        func_0BE518(5);
        if (func_01AF28(10)) {
            func_01AEE8(4, 0);
            return;
        }
        if (func_01AF28(4))
            func_01AEE8(10, 0);
    }
    func_001228();
}
