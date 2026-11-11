void func_080530(void);
void func_09A668(void);
int func_080E00(int);
void func_0B6DB8(int);
int func_019068(int);
void func_019028(int, int);
void func_001228(void);

void func_0193E8(void)
{
    func_080530();
    func_09A668();
    if (func_080E00(1) & 8) {
        func_0B6DB8(5);
        if (func_019068(10)) {
            func_019028(4, 0);
            return;
        }
        if (func_019068(4))
            func_019028(10, 0);
    }
    func_001228();
}
