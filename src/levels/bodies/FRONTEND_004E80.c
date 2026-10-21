extern void scePadPortClose(int, int);
extern void scePadEnd(void);

void func_004E80(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++)
        scePadPortClose(i, 0);
    scePadEnd();
}
