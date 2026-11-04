void func_078578(void);
void func_08E160(void);
int func_078E48(int);
void func_0AA898(int);
int func_018220(int);
void func_0181E0(int, int);
void func_000E90(void);

void func_018600(void)
{
    func_078578();
    func_08E160();
    if (func_078E48(1) & 8) {
        func_0AA898(5);
        if (func_018220(10)) {
            func_0181E0(4, 0);
            return;
        }
        if (func_018220(4))
            func_0181E0(10, 0);
    }
    func_000E90();
}
