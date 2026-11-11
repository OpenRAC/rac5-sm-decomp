/* FRONTEND:0x002D30 -- stores the argument in the global word at 0x27E90. */
extern char D_00027E90[];

void func_002D30(int value)
{
    *(int *)D_00027E90 = value;
}
