/* LEVEL_24:0x0A6C58 -- placement copy of LEVEL_01_0AD3E0.c: reads four 16-bit fields of a record through the accessor helpers and forwards them with unit scales and the remaining arguments to func_0A6B08. */
extern int func_0A1EF8(int *value);
extern int func_0A1F28(char *record);
extern int func_0A1F58(int *param_1);
extern int func_0A2010(int *range);
extern void func_0A6B08(int index, short first, short second, unsigned short third, float fa, float fb, unsigned short fourth, int fifth, int sixth, int seventh, int eighth, float fc);

void func_0A6C58(int index, int *record, int fifth, int sixth, int seventh, int eighth, float fc)
{
    short first;
    short second;
    unsigned short third;
    unsigned short fourth;

    first = func_0A1EF8(record);
    second = func_0A1F28((char *)record);
    third = func_0A1F58(record);
    fourth = func_0A2010(record);
    func_0A6B08(index, first, second, third, 1.0f, 1.0f, fourth, fifth, sixth, seventh, eighth, fc);
}
