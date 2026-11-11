/* LEVEL_19:0x09B360 -- placement copy of LEVEL_01_0AD3E0.c: reads four 16-bit fields of a record through the accessor helpers and forwards them with unit scales and the remaining arguments to func_09B210. */
extern int func_0965A0(int *value);
extern int func_0965D0(char *record);
extern int func_096600(int *param_1);
extern int func_0966B8(int *range);
extern void func_09B210(int index, short first, short second, unsigned short third, float fa, float fb, unsigned short fourth, int fifth, int sixth, int seventh, int eighth, float fc);

void func_09B360(int index, int *record, int fifth, int sixth, int seventh, int eighth, float fc)
{
    short first;
    short second;
    unsigned short third;
    unsigned short fourth;

    first = func_0965A0(record);
    second = func_0965D0((char *)record);
    third = func_096600(record);
    fourth = func_0966B8(record);
    func_09B210(index, first, second, third, 1.0f, 1.0f, fourth, fifth, sixth, seventh, eighth, fc);
}
