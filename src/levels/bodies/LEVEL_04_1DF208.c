extern void func_1351C8(void *a0, int a1, int a2, float a3, float a4,
                        float a5);
extern void func_035C18(void *a0, void *a1, void *a2);

char *func_1DF208(char *a0, void *a1, void *a2, char *a3, int a4)
{
    char buf[0x30];
    float v = *(float *)(a3 + 0x2C);

    func_1351C8(buf, 0, a4, v, v, v);
    func_035C18(a0, buf, buf + 0x24);
    return a0 + 0x70;
}
