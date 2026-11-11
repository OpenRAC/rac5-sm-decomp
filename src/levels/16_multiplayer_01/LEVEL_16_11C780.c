/* LEVEL:0x11C780 -- clears two consecutive word globals in a pair. */
extern int D_001B8528[];
extern int D_001B8530[];

void func_11C780(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        D_001B8530[i] = 0;
        D_001B8528[i] = 0;
    }
}
