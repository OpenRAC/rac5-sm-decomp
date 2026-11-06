extern void func_0DCE68(void *);
extern void func_0DC138(long long, void *, void *);

void func_054D20(char *record, long long value)
{
    unsigned char buffer[48];
    func_0DCE68(buffer);
    func_0DC138(value, buffer, record + 0xe58);
}
