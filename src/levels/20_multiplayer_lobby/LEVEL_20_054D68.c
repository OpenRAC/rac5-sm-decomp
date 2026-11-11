extern int func_0DFD50(unsigned int kind, int count);
extern float func_000FA0(void);

void func_054D68(char *self) {
    unsigned int resource;
    *(unsigned int *)(self + 0xE7C) = 5;
    *(unsigned long *)(self + 0xF10) &= ~1UL;
    resource = func_0DFD50(0x39, 8);
    *(unsigned int *)(self + 0xF50) = 0;
    *(unsigned int *)(self + 0xEF8) = 0;
    *(unsigned int *)(self + 0xF04) = 0;
    *(unsigned int *)(self + 0xF4C) = resource;
    *(unsigned long *)(self + 0xF10) =
        (*(unsigned long *)(self + 0xF10) | 4UL) & ~0x40UL;
    *(char **)(self + 0xF00) = self + 0xDD8;
    *(float *)(self + 0xF08) = func_000FA0();
}
