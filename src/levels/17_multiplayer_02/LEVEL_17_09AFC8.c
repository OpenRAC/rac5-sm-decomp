/* LEVEL_17:0x09AFC8 -- placement copy of LEVEL_01_0AD3E0.c: reads four 16-bit fields of a record through the accessor helpers and forwards them with unit scales and the remaining arguments to func_09AE78. */
extern int func_096208(int *value);
extern int func_096238(char *record);
extern int func_096268(int *param_1);
extern int func_096320(int *range);
extern void func_09AE78(int index, short first, short second, unsigned short third, float fa, float fb, unsigned short fourth, int fifth, int sixth, int seventh, int eighth, float fc);

void func_09AFC8(int index, int *record, int fifth, int sixth, int seventh, int eighth, float fc)
{
    short first;
    short second;
    unsigned short third;
    unsigned short fourth;

    first = func_096208(record);
    second = func_096238((char *)record);
    third = func_096268(record);
    fourth = func_096320(record);
    func_09AE78(index, first, second, third, 1.0f, 1.0f, fourth, fifth, sixth, seventh, eighth, fc);
}
