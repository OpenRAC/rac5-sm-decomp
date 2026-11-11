/* LEVEL_06:0x0A7BB0 -- placement copy of LEVEL_01_0AD3E0.c: reads four 16-bit fields of a record through the accessor helpers and forwards them with unit scales and the remaining arguments to func_0A7A60. */
extern int func_0A2E50(int *value);
extern int func_0A2E80(char *record);
extern int func_0A2EB0(int *param_1);
extern int func_0A2F68(int *range);
extern void func_0A7A60(int index, short first, short second, unsigned short third, float fa, float fb, unsigned short fourth, int fifth, int sixth, int seventh, int eighth, float fc);

void func_0A7BB0(int index, int *record, int fifth, int sixth, int seventh, int eighth, float fc)
{
    short first;
    short second;
    unsigned short third;
    unsigned short fourth;

    first = func_0A2E50(record);
    second = func_0A2E80((char *)record);
    third = func_0A2EB0(record);
    fourth = func_0A2F68(record);
    func_0A7A60(index, first, second, third, 1.0f, 1.0f, fourth, fifth, sixth, seventh, eighth, fc);
}
