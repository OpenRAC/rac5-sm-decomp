/* LEVEL_09:0x0AA690 -- placement copy of LEVEL_01_0AD3E0.c: reads four 16-bit fields of a record through the accessor helpers and forwards them with unit scales and the remaining arguments to func_0AA540. */
extern int func_0A5930(int *value);
extern int func_0A5960(char *record);
extern int func_0A5990(int *param_1);
extern int func_0A5A48(int *range);
extern void func_0AA540(int index, short first, short second, unsigned short third, float fa, float fb, unsigned short fourth, int fifth, int sixth, int seventh, int eighth, float fc);

void func_0AA690(int index, int *record, int fifth, int sixth, int seventh, int eighth, float fc)
{
    short first;
    short second;
    unsigned short third;
    unsigned short fourth;

    first = func_0A5930(record);
    second = func_0A5960((char *)record);
    third = func_0A5990(record);
    fourth = func_0A5A48(record);
    func_0AA540(index, first, second, third, 1.0f, 1.0f, fourth, fifth, sixth, seventh, eighth, fc);
}
