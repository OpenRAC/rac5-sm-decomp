void func_087A20(void);
void func_0A0F70(void);
int func_0882F0(int);
void func_0BD800(int);
int func_019EE8(int);
void func_019EA8(int, int);
void func_000FB8(void);

void func_01A268(void)
{
    func_087A20();
    func_0A0F70();
    if (func_0882F0(1) & 8) {
        func_0BD800(5);
        if (func_019EE8(10)) {
            func_019EA8(4, 0);
            return;
        }
        if (func_019EE8(4))
            func_019EA8(10, 0);
    }
    func_000FB8();
}
