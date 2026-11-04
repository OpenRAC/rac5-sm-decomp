void func_07D578(void);
void func_096BD8(void);
int func_07DE48(int);
void func_0B3250(int);
int func_019378(int);
void func_019338(int, int);
void func_001228(void);

void func_0196F8(void)
{
    func_07D578();
    func_096BD8();
    if (func_07DE48(1) & 8) {
        func_0B3250(5);
        if (func_019378(10)) {
            func_019338(4, 0);
            return;
        }
        if (func_019378(4))
            func_019338(10, 0);
    }
    func_001228();
}
