void func_085010(void);
void func_09E448(void);
int func_0858E0(int);
void func_0BAA60(int);
int func_019E00(int);
void func_019DC0(int, int);
void func_001228(void);

void func_01A180(void)
{
    func_085010();
    func_09E448();
    if (func_0858E0(1) & 8) {
        func_0BAA60(5);
        if (func_019E00(10)) {
            func_019DC0(4, 0);
            return;
        }
        if (func_019E00(4))
            func_019DC0(10, 0);
    }
    func_001228();
}
