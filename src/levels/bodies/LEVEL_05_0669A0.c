extern int func_126B40(unsigned int kind, int count);
extern float func_0013E8(void);

void func_0669A0(char *self) {
    unsigned int resource;
    *(unsigned int *)(self + 0xE7C) = 5;
    *(unsigned long *)(self + 0xF10) &= ~1UL;
    resource = func_126B40(0x39, 8);
    *(unsigned int *)(self + 0xF50) = 0;
    *(unsigned int *)(self + 0xEF8) = 0;
    *(unsigned int *)(self + 0xF04) = 0;
    *(unsigned int *)(self + 0xF4C) = resource;
    *(unsigned long *)(self + 0xF10) =
        (*(unsigned long *)(self + 0xF10) | 4UL) & ~0x40UL;
    *(char **)(self + 0xF00) = self + 0xDD8;
    *(float *)(self + 0xF08) = func_0013E8();
}
