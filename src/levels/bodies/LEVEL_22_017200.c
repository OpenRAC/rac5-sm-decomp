void func_078AD0(void);
void func_08E510(void);
int func_0793A0(int);
void func_0AA960(int);
int func_016E80(int);
void func_016E40(int, int);
void func_000F98(void);

void func_017200(void)
{
    func_078AD0();
    func_08E510();
    if (func_0793A0(1) & 8) {
        func_0AA960(5);
        if (func_016E80(10)) {
            func_016E40(4, 0);
            return;
        }
        if (func_016E80(4))
            func_016E40(10, 0);
    }
    func_000F98();
}
