/* FRONTEND:0x020638 -- reads bit 4 of the object's field 0x94. */
extern int *D_0032814;

int func_020638(void)
{
    return (*(int *)((char *)D_0032814 + 0x94) >> 4) & 1;
}
