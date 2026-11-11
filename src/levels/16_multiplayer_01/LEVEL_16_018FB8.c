void func_078BF8(void);
void func_08F148(void);
int func_0794C8(int);
void func_0AB8C0(int);
int func_018BD8(int);
void func_018B98(int, int);
void func_000E20(void);

void func_018FB8(void)
{
    func_078BF8();
    func_08F148();
    if (func_0794C8(1) & 8) {
        func_0AB8C0(5);
        if (func_018BD8(10)) {
            func_018B98(4, 0);
            return;
        }
        if (func_018BD8(4))
            func_018B98(10, 0);
    }
    func_000E20();
}
