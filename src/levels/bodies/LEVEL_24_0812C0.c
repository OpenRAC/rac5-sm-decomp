extern void *func_081350(void);
extern unsigned int func_081228(int);
extern char *D_001C6EDC;

unsigned int func_0812C0(int value)
{
    if (func_081350() == 0) {
        return 0;
    }
    return func_081228(value) |
           *(unsigned int *)(D_001C6EDC + 500);
}
