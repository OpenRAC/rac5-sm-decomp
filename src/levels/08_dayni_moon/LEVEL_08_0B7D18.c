/* LEVEL_08:0x0B7D18 -- placement copy of LEVEL_01_0AD3E0.c: reads four 16-bit fields of a record through the accessor helpers and forwards them with unit scales and the remaining arguments to func_0B7BC8. */
extern int func_0B2F78(int *value);
extern int func_0B2FA8(char *record);
extern int func_0B2FD8(int *param_1);
extern int func_0B3090(int *range);
extern void func_0B7BC8(int index, short first, short second, unsigned short third, float fa, float fb, unsigned short fourth, int fifth, int sixth, int seventh, int eighth, float fc);

void func_0B7D18(int index, int *record, int fifth, int sixth, int seventh, int eighth, float fc)
{
    short first;
    short second;
    unsigned short third;
    unsigned short fourth;

    first = func_0B2F78(record);
    second = func_0B2FA8((char *)record);
    third = func_0B2FD8(record);
    fourth = func_0B3090(record);
    func_0B7BC8(index, first, second, third, 1.0f, 1.0f, fourth, fifth, sixth, seventh, eighth, fc);
}
