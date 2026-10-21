/* FRONTEND:0x020770 -- stores the byte in the object pointed to by D_00032814. */
extern int D_00032814[];

void func_020770(char value)
{
    char *object = (char *)D_00032814[0];

    object[0xE2] = value;
}
