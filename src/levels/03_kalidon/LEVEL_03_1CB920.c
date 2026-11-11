extern void func_01C150(void *, int, void *, int, int, int, int);

void func_1CB920(char *record)
{
    char scratch[128];
    func_01C150(scratch, 0x20, record + 0x30, 0x129, 0x101, 2, 1);
}
