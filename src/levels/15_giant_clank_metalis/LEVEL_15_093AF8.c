typedef struct {
    int f_00;
    int f_04;
    int f_08;
    int f_0C;
    int f_10;
    int f_14;
    int f_18;
    int f_1C;
} Frame;

void func_08EFD0(int a0, void *a1, float f12);
int func_092B50(void);

int func_093AF8(void)
{
    Frame fr;

    func_08EFD0(0x6C, &fr, 0.0f);
    if (func_092B50() != 0) {
        func_08EFD0(0x6B, &fr.f_10, 0.0f);
        return fr.f_1C - fr.f_0C;
    }
    return 0;
}
